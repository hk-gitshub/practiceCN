import React from "react";

class ComponentsB extends React.Component{

    constructor(){
        super();
        this.state={
            name:"ComponentsB"
        }
        console.log("ComponentsB constructor");
    }

    static getDerivedStateFromProps(){
        console.log("ComponentsB getDerivedStateFromProps ");
        return null;
    }

    componentDidMount(){
        console.log("ComponentsB componentDidMount");
    }
    render(){
        console.log("ComponentsB render");
        return(
            <h1>{this.state.name}</h1>
        );
    }
}

export default ComponentsB;