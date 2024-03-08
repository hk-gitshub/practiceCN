import React from "react";

class Input extends React.Component {
    constructor(){
        super();
        this.state={
            name:'',
            lastName:''
        }
    }
    handleName=(e)=>{
        this.setState({name: e.target.value});
    }

    handleLastName=(e)=>{
        this.setState({lastName: e.target.value});
    }
    render() {
        return (
            <>
             {/* <div className="container"> */}
                <div className="inps-box">
                    <div className="inp">
                        <p>Name</p>
                        <input type="text" onChange={this.handleName}/>
                    </div>
                    <hr />
                    <div className="inp">
                        <p>Last Name</p>
                        <input type="text" onChange={this.handleLastName}/>
                    </div>
                    <hr />
                </div>
                <h2>Hello {this.state.name} {this.state.lastName}</h2>
            </>
        );
    }
}

export default Input