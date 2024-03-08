import React from "react";
import Wheel from "./Wheel";
import "../css/wheel.css"
import Display from "./Display";

export default class App extends React.Component {

    constructor(){
        super();
        this.state={
            active:0,
            menuItems: ["Now Playing", "Music", "Games", "Settings"],
            // musicSongs: [],
            // musicImages:[],
            // songNames: 
        }
    }
    render() {
        return (
            <>
                <Display />
                <Wheel />
            </>
        );
    }
}