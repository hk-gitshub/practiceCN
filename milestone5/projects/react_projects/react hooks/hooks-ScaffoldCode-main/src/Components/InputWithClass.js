import React from "react";

export default class Input extends React.Component {
    constructor() {
        super();
        this.state = {
            name: "",
            last: ""
        }
    }

    handleName = (e) => {
        this.setState({
            name: e.target.value
        })
    }

    handleLastName = (e) => {
        this.setState({
            last: e.target.value
        })
    }

    componentDidMount(){
        document.title= this.state.name+ " "+ this.state.last;
    }

    componentDidUpdate(){
        document.title= this.state.name+ " "+ this.state.last;
    }

    render() {
        const { name, last } = this.state;

        return (
            <>
                <div className="section">
                    <Row label="Name">
                        <input className="input" value={name} onChange={this.handleName} />
                    </Row >
                    <Row label="Last Name">
                        <input className="input" value={last} onChange={this.handleLastName} />
                    </Row >
                </div>

                <h2>Hello, {name} {last}</h2>

            </>
        )

    }

}


function Row(props) {
    const { label } = props;
    return (
        <>
            <lable>{label}<br /></lable>
            {props.children}
            <hr />
        </>
    )
}
