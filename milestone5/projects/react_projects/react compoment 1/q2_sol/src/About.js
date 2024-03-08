// Create About component here to display the a small content here.
// In this component use paragraph tag (p) to display the content

import React from "react";


export default class About extends React.Component{
    constructor(){
        super();
        this.state={
            about:"Hi, My name is Pranav. I am a full stack developer and I have developed several projects with MERN stack. I am also familiar with Python and Django."
        }
    }

    render(){
        return(
            <div>
                <p className="about">{this.state.about}</p>
            </div>
        )
    }
}