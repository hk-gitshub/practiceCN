import React from "react";
import "../css/navbar.css"

class Navbar extends React.Component{
    constructor(){
        super();
        this.state={
            time: this.CurrentTime()
        }
    }

    CurrentTime=()=>{
        const Today=new Date();
        let time=Today.getHours()+ ":" + Today.getMinutes();
        return time;
    }

    render(){
        const {time}=this.state;
        return(
            <>
            <div className="bar">
                <h5 className="heading"> IPod</h5>
                <h5 className="time"> {time}</h5>
                <div className="right">
                    <img className="battery" src="https://cdn-icons-png.flaticon.com/128/664/664886.png" alt="battery" />
                </div>
                
            </div>
            </>
        );
    }
}

export default Navbar;