import React, { useState } from 'react';
import "../styles/signup.css"
import { authContext } from "../context/authContext";
import { useContext } from "react";
import {
    getAuth, createUserWithEmailAndPassword,
    signInWithEmailAndPassword
} from 'firebase/auth';
import { app } from '../firebase';
import { statusContext } from '../context/statusContext';


const Signup = () => {
    const {signIn, setSignIn} = useContext(authContext);

    const handleHome=()=>{
        if(signIn){
            setSignIn(false)
        }else{
            setSignIn(true);
        }
    }
    return (
        <>
            <div className='navbar-container'>
                <div className='heading'>BusyBuy</div>
                <div className="left-nav">
                    <div onClick={handleHome}> Home</div>
                    <div> SignIn</div>
                </div>
            </div>
            <Auth />
        </>
    )
}

const Auth = () => {
    const {setSignIn} = useContext(authContext);
    const {setStatus} = useContext(statusContext);
    // const [name, setName]=useState('');
    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');
    const [error, setError] = useState(null);
    const auth = getAuth();

    const handleSignUp = async () => {
        try {
            await createUserWithEmailAndPassword(auth, email, password);
            setSignIn(false);
            setStatus(true);
            console.log('User signed up successfully!');
        } catch (error) {
            setError(error.message);
        }
    };
    const handleSignIn = async () => {
        try {
            await signInWithEmailAndPassword(auth, email, password);
            console.log('User signed in successfully!');
            setSignIn(false);
            setStatus(true);
        } catch (error) {
            setError(error.message);
        }
    };
    return (
        <div className='form'>
            <h1 className='form-heading'> Sign In</h1>
            <input type="text" placeholder="Email" onChange={(e) =>
                setEmail(e.target.value)} className='form-inp'/>
            <input type="password" placeholder="Password" onChange={(e) =>
                setPassword(e.target.value)} className='form-inp'/>
            <button onClick={handleSignUp} className='form-btn'>Sign Up</button>
            <button onClick={handleSignIn} className='form-btn'>Sign In</button>
            {error && <p>{error}</p>}
        </div>
    );
};

export default Signup;