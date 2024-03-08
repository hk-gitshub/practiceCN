import React from "react";
// import styled from "styled-components";
import navbars from "./navbar.module.css"



class Navbar extends React.Component {
    render() {
        return (
            <div className={ navbars.nav}>
                <div className={navbars.title}>Movie App</div>
                <div className={navbars.cartContainer}>
                    <img alt="cart icon" src="https://cdn-icons-png.flaticon.com/128/4903/4903482.png" className={navbars.cartImg}/>
                    <span className={navbars.cartCount}>3</span>
                </div>
            </div>
        );
    }
}

export default Navbar;

