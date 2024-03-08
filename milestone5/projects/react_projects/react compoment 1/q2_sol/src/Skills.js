// Create Skill component here to display your skills
// In this component there should be a list with each listitem as your skill.

import React from "react";

export default class Skills extends React.Component{
    constructor(){
        super();
        this.state={
            skills:["HTML","CSS", "JavaScript", "ReactJS", "Node"]
        }
    }

    render(){
        const {skills}=this.state;
        return(
            <ul className="skills">
                {skills.map((ele, i)=>{
                    return(
                        <li key={i} className="elements">{ele}</li>
                    )
                })}

            </ul>
        )
    }
}