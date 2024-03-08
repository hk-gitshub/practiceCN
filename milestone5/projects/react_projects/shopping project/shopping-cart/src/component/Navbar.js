import React from 'react'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import "../styles/Navbar.css"
import { authContext } from "../context/authContext";
import { useContext } from "react";
import { statusContext } from '../context/statusContext';

const Navbar = () => {
    const { signIn, setSignIn } = useContext(authContext);
    const { status, setStatus } = useContext(statusContext);

    const handleSign = () => {
        if (signIn) {
            setSignIn(false)
        } else {
            setSignIn(true);
        }
    }

    const handleSignOut =()=>{
        setStatus(false);
    }

    return (
        <div className='navbar-container'>
            <div className='heading'>BusyBuy</div>
            <div className='left-nav'>
                <div className='home'>Home</div>
                {
                    status ? <>
                        <div className='order'>My Order</div>
                        <div className=''>Cart</div>
                        <div className='signin' onClick={handleSignOut}>
                            Sign Out</div>
                    </> :
                        <>
                            <div className='signin' onClick={handleSign}>sign In</div>
                        </>
                }
            </div>

        </div>
    )
}

export default Navbar;