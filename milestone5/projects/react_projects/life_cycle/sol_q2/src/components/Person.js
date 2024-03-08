import { Component } from "react";

class Person extends Component {
  // Define appropriate lifecycle method to show alert here

 

  render() {
    const { img, email } = this.props.person;
    const {index}=this.props;
    return (
      <div className="person">
        <b onClick={()=>this.props.handleClick(index)}>X</b>
        <img alt={email} src={img} />
        <p>{email}</p>
      </div>
    );
  }


  componentWillUnmount(){
    alert(`A person with email ${this.props.person.email} has been removed`);
  }
}

export default Person;
