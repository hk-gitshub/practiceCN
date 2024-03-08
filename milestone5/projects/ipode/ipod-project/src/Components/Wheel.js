import react from "react"
import { FaForward, FaPlay } from "react-icons/fa";
import { FaPause } from "react-icons/fa";
import { FaBackward } from "react-icons/fa6";
// import "../css/wheel.css"

export default class Wheel extends react.Component {

    render() {
        return (
            <div className="main-container">
                <div className="main">
                    <div id="menu" className="control">
                        menu 
                    </div>
                    <div className="control" id="center">
                    </div>
                    <div className="control" id="fwd">
                        <FaForward />
                    </div>
                    <div className="control" id="bkd">
                        <FaBackward />
                    </div>
                    <div className="control" id="play">
                        <div>
                            <FaPlay />
                            <FaPause />
                        </div>
                    </div>
                </div>
            </div>
        );
    }
}
