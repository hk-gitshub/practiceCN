import React from "react";
import TimerOne from "./Components/Timer/TimerOne.js";
import ComponentA from "./Components/ComponentA.js";
import ErrorHandling from "./ErrorHandling.js";

class App extends React.Component {
  constructor() {
    super();

    this.state = {
      timerOn: false
    }
  }

  handleTimerOn = () => {
    this.setState((prevState) => {
      return {
        timerOn: !prevState.timerOn
      }
    })
  };

  render() {
    return (
      <>
        <ErrorHandling>
        <TimerOne timerOn={this.state.timerOn}/>
        <button onClick={this.handleTimerOn}>{this.state.timerOn ? "STOP" : "START"}</button>
        </ErrorHandling>
        
        <ErrorHandling>
          <ComponentA />
        </ErrorHandling>
      </>
    );
  }
}

export default App;
