import "./styles.css";
import React from "react";
import Image from "./components/Image";

export default class App extends React.Component {
  constructor() {
    super();
    this.state = {
      photos: [],
      loading: false
    };
  }

  componentDidMount() {
    fetch("https://jsonplaceholder.typicode.com/albums/1/photos")
      .then(response => response.json())
      .then(photo => this.setState({ photos: photo, loading: true }));
  }

  render() {
    // Display loading status here
    if (this.state.loading) {
      return (
        <div className="App">
          {this.state.photos.map((photo) => {
            return <Image key={photo.id} photo={photo} />;
          })}
        </div>
      );
    }else{
      return(<>loading</>)
    }
  }
}
