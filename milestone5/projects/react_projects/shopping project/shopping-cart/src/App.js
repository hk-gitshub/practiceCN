import React, { useState } from 'react'
// import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import Auth from "./component/Auth";
import Navbar from "./component/Navbar"
import Body from './component/Body';
import Signup from "./component/Signup"
import { authContext } from './context/authContext';
import { statusContext } from './context/statusContext';

function App() {

  const [signIn, setSignIn] = useState(false);
  const [status, setStatus] = useState(false);

  if (signIn) {
    return (
      <authContext.Provider value={{ signIn, setSignIn }}>
        <statusContext.Provider value={{ status, setStatus }}>
          <Signup />
        </statusContext.Provider>
      </authContext.Provider>
    )
  } else {
    return (
      <>
        <authContext.Provider value={{ signIn, setSignIn }}>
        <statusContext.Provider value={{ status, setStatus }}>   
          <Navbar/>
          <Body />
        </statusContext.Provider>   
        </authContext.Provider>
      </>
    )
  }
}

export default App;
