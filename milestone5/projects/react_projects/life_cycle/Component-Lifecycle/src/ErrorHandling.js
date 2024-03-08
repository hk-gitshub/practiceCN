
import React from "react";

export default class ErrorHandling extends React.Component{
    constructor(props){
        super()
        this.state={
            hasError: false
        }
    }

    static getDerivedStateFromError(error){
        return {
            hasError: true
        }
    }

    componentDidCatch(error, info){
        console.log("error: ", error);
        console.log("error info: ", info);
    }

    render(){
        if(this.state.hasError){
            return <h1>Somthing get wrong plase contact admin</h1>
        }
        return this.props.children;
    }
}