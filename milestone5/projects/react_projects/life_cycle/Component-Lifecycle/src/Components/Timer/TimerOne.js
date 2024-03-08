import React from "react";

export default class TimerOne extends React.Component {
  constructor() {
    super();

    this.state = {
      time: 0
    };

    this.timer = null;
  }


  componentDidMount() {
    console.log("Timer ComponentDidMount");
    console.log("_________________________________");

  }

  getSnapshotBeforeUpdate(prevProp, prevState) {
    console.log("Timer getSnapshotBeforeUpdate");
    console.log("_________________________________");
    return null;
  }

  shouldComponentUpdate(nextProps, nextState) {
    console.log("Timer shouldComponentUpdate");
    console.log("next props", nextProps);
    console.log("next states", nextState);
    console.log("_________________________________");
    return nextProps.timerOn !== this.props.timerOn || nextState.time %5 ===0 ;
  }

  componentDidUpdate(prevProps, prevState, snapshot) {
    console.log("Timer componentDidUpdate");
    console.log("_________________________________");
    console.log("Previous Props:", prevProps);
    console.log("Current Props:", this.props);
    console.log("Preavious State: ", prevState);
    // console.log("Current Props from snapShot: ",snapshot.currentProps);
    // console.log("Current State from snapShot: ",snapshot.currentState);

    if (prevProps.timerOn != this.props.timerOn) {
      if (this.props.timerOn) {
        this.timer = setInterval(() => {
          this.setState((prevState) => ({ time: prevState.time + 1 }));
        }, 1000);
      } else {
        clearInterval(this.timer);
      }

    }


  }

  componentWillUnmount() {
    console.log("Timer componentWillUnmount");
    if (this.props.timeOn) {
      clearInterval(this.timer);
    }
  }

  render() {
    return (
      <div>
        <h2>Time Spent: {this.state.time}</h2>
        {new Date(this.state.time * 1000).toISOString().slice(11, 19)}
      </div>
    );
  }
}