import React from "react";
import Image from "./Image";
import { faL } from "@fortawesome/free-solid-svg-icons";

export default class ImageList extends React.Component {
  // Create Lifecycle method to prevent re render of the list if some spaces are present. 
  // Use the shouldComponentUpdate lifecycle method here
  shouldComponentUpdate(nextProps){
    if(nextProps){
      return true;
    }else{
      return false
    }
  }

  render() {
    return (
      <div className="image-list">
        {this.props.images.map((image, index) => {
          return <Image key={index} image={image} />;
        })}
      </div>
    );
  }
}
