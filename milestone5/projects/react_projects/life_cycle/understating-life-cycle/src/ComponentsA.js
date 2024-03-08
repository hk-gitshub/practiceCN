import React from "react";

// import ComponentsB from "./ComponentsB";

class ComponentsA extends React.Component{

    constructor(){
        super();
        this.state={
            name:"ComponentsA",
            data: []
        }
        console.log("ComponentsA constructor");
    }

    static getDerivedStateFromProps(){
        console.log("ComponentsA getDerivedStateFromProps ");
        
        return null;
    }

    componentDidMount(){
        fetch("https://jsonplaceholder.typicode.com/users")
        .then(response=>response.json())
        .then(data=>this.setState({data:data}))
        console.log("ComponentsA componentDidMount");
    }
    render(){
        console.log(this.state.data);
        
        return(
            <>
            <h1>{this.state.name}</h1>
            <ul>
                {this.state.data.map((d, index)=>{
                    return(
                        <li key={index}>
                            {d.username}
                        </li>
                    )
                })}
            </ul>
            </>
        )
    }
}

export default ComponentsA;