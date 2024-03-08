import{useState} from "react";

function App() {
  let [value, setValue]=useState(0);

  const setInc =()=>{
    value+=1;
  }

  const setDec=()=>{
    value-=1;
  }
  
  return(
    <>
      <h2>counter {(e)=>setValue(value=e.target.value)}</h2>
      <button onClick={setDec}> increase </button>
      <button onClick={setInc}> decrease </button>
    </>
  )
}

export default App;
