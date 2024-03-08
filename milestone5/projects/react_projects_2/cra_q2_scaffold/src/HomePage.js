// Complete the HomePage Component and export it
import React from "react";
import Form from "./Form";


const name = "YourName";
const email = "jxyz@pqr.com";

function HomePage() {
  return (
    <div className="Homepage">
      <h1>Home Page</h1>
      <Form />
    </div>
  );
}
export default HomePage;
export {name, email};