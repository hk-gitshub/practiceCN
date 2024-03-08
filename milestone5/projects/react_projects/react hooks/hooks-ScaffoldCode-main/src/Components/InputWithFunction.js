import { useEffect, useState } from "react";

export default function Input(){

    let [name, setName]=useState("")
    let [last, setLastName]=useState("")

    useEffect(()=>{
        document.title=name+" "+last;
    },[name, last])

   useEffect(()=>{
    let timer=setInterval(()=>{
        console.log("window width:", window.innerWidth);
    }, 2000);

    return (clearInterval(timer)) //cleanup when the component unmounts
    // return()=>clearInterval(timer);
   })
    return(
        <>
        <div className="section">
            <Row label="Name">
                    <input className="input" value={name} onChange={(e)=>setName(name=e.target.value)} autoFocus/>
            </Row >
            <Row label="Last Name">
                    <input className="input" value={last} onChange={(e)=>setLastName(name=e.target.value)}/>
            </Row >
        </div>

        <h2>Hello, {name + " " + last}</h2>
        
        </>
        )
    }


function Row(props){
    const{label} = props;
    return(
        <>
        <lable>{label}<br/></lable>
        {props.children}
        <hr />
        </>
    )
}
