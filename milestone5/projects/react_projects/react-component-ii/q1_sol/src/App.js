import React from "react";
import "./styles.css";

class App extends React.Component {
  constructor() {
    super();
    this.state = {
      theme: "Dark",
      bool: true
    };
  }

  handleClick = () => {
    this.setState((prevState)=>({
      bool: !prevState.bool,
      theme: prevState.bool ? "Light" : "Dark"
    }))
  }
  

  render() {
    const {theme, bool}=this.state
    return (
      // Add dynamic classes with state to the div below
      <div className={bool?"lightTheme":"darkTheme"}>

        <div className="btn">
          <button onClick={this.handleClick}> {theme} Theme</button>
        </div>
        {/* Add the button element here */}
        <h2>Why We Explore - NASA</h2>
        <img
          src="https://res.cloudinary.com/dl26pbek4/image/upload/v1671686299/launch-pad-67650_1920_p6izup.jpg"
          alt="space shuttle"
        />
        <p>
          Humans are driven to explore the unknown, discover new worlds, push
          the boundaries of our scientific and technical limits, and then push
          further. The intangible desire to explore and challenge the boundaries
          of what we know and where we have been has provided benefits to our
          society for centuries.
        </p>
      </div>
    );
  }
}

export default App;
