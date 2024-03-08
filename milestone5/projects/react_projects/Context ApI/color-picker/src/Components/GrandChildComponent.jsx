//using hook useContext
// import { useContext } from "react";
import { colorContext } from "./context";

const GrandChildComponent = () => {

  // const value=useContext(colorContext);
  return (
    // it's for class base component
    <colorContext.Consumer>
      {(value)=>(<p style={{ color: value.color }}>Color: {value.color}</p>)
      }
    </colorContext.Consumer>
  );
}

export default GrandChildComponent;
