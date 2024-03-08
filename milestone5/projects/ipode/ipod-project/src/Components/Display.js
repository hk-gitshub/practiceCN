import React from "react";
import Navbar from "./Navbar"
import "../css/display.css"

class Display extends React.Component{
    render(){
        return (
            <div className="display">
                <Navbar/>
            </div>
        );
    }
}

export default Display;