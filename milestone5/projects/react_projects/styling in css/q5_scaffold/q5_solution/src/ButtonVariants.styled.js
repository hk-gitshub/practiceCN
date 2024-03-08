import styled from "styled-components";

export const Button=styled.button`
box-shadow: rgba(99, 99, 99, 0.2) 0px 2px 8px 0px;
width: 250px;
height: 50px;
font-size: larger;
font-weight: bolder;
background-color: ${
    (porps)=>(
        porps.bg?porps.bg:"#fff"
        )};
color: ${
    (porps)=>(
        porps.color?porps.color:"#000"
        )};
border: ${
    (porps)=>(
        porps.border?porps.border:"#000"
        )};
`