import "./styles.css";
import { Component } from "react";
import Person from "./components/Person";

class App extends Component {
  constructor(props) {
    super(props);
    this.state = {
      network: [
        {
          id: 1,
          img:
            "https://res.cloudinary.com/dl26pbek4/image/upload/v1675071817/pexels-rodnae-productions-7348711_doe69b.jpg",
          email: "john@gmail.com",
          show: true
        },
        {
          id: 1,
          img:
            "https://res.cloudinary.com/dl26pbek4/image/upload/v1675071807/pexels-zaid-mohammed-15131063_bysy0s.jpg",
          email: "stephen@gmail.com",
          show: true
        },
        {
          id: 1,
          img:
            "https://res.cloudinary.com/dl26pbek4/image/upload/v1675071812/pexels-ali-kazal-14520051_qrdgym.jpg",
          email: "alex@gmail.com",
          show: true
        }
      ]
    };

    this.handleClick = this.handleClick.bind(this);
  }

  // Create function to remove person from your network here
  handleClick = (index) => {
    let updatedNetwork=[...this.state.network].filter((person, i) => index !== i);
    console.log(updatedNetwork);
    // updatedNetwork[index].show=false;
    // this.setState({network: updatedNetwork})

    this.setState({network: updatedNetwork});

  }

  render() {
    // console.log(this.state.network);
    return (
      <div className="App">
        <h1>My Network</h1>
        <div className="list">
          {this.state.network.map((p, i) => (
            // p.show && 
            <Person key={i} person={p} index={i} handleClick={this.handleClick} />
          ))}
        </div>
      </div>
    );
  }
}

export default App;
