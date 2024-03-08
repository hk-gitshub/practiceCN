// Create component here to display the Basic information such as 
// Name: Email: Phone: Address:
// Make sure to include these in your code with semicolon

import  React from 'react';

class Hero extends React.Component{
    constructor(){
        super();
        this.state={
            Name: "Pranav Sharad Yeole",
            Email: "pranav@google.com",
            Phone: "8546465544",
            Address: "ABC xyz street."

        }
    }


    render(){
        const {Name, Email, Phone, Address}=this.state;
        return(
            <div className='hero'>
                <p className='name'>Name: {Name}</p>
                <p>Email:{Email}</p>
                <p>Phone: {Phone}</p>
                <p>Address: {Address}</p>
            </div>
        )
    }
}

export default Hero;
