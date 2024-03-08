
import React from "react";

import { name, email } from "./HomePage";

const submitHandle=(event)=>{
  event.preventDefault();
};

const Form = () => (
  <>
    <div>
      <h3>Login Page</h3>
      <form onSubmit={submitHandle}>
        <input type="text" placeholder="YourName" value={name}/>
        <input type="text" placeholder="jxyz@pqr.com" value={email}/>
        <button type="submit">Login</button>
      </form>
    </div>
  </>
);

export default Form;