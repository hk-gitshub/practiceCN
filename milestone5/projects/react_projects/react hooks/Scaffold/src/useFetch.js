// import axios from "axios";

// const axios=require()
// import { faL } from "@fortawesome/free-solid-svg-icons";
import { useState, useEffect } from "react";

// Complete the following hook
const useFetch = (url) => {
  const [loading, setLoading] = useState(false);
  const [data, setData] = useState({});
  const [error, setError] = useState(null);


  const getJoke = async () => {
    try {
      // setLoading(true)
      const joke = await fetch(url);
      const data=await joke.json();
      console.log(data);
      setData(data)
      // setLoading(false);
    } catch (error) {
      setError(error)
      // setLoading(true)
      console.log("this is error message:", error.message);
    }finally{
      setLoading(false);
    }
  };

  useEffect(()=>{
    setLoading(true)
    getJoke();
  }, [])

  return { loading, data, getJoke, error };

};
export default useFetch;
