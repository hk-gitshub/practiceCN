import { useEffect, useState } from "react";

const useLocalStorage = (key, defaultValue) => {
  const [age, setAge]=useState('');
  const [name, setName]=useState('');

  useEffect(()=>{
    const name=localStorage.getItem("name");
    const age=localStorage.getItem("age");

    if(name){
      setName(name);
    }
    if(age){
      setAge(age);
    }
  }, []);

  useEffect(()=>{
    localStorage.setItem("name", name);
    localStorage.setItem("age", age);

  }, [name, age])


  return{name, setName, age, setAge};
};

export default useLocalStorage;
