import { useEffect, useState } from "react";

export default function useSetLocalStorage() {
    const [email, setEmail] = useState('');


    useEffect(() => {
        const mail=localStorage.getItem("email")
        if(mail){
            setEmail(mail)
        }
    }, []);

    useEffect(() => {
        localStorage.setItem("email", email);
    }, [email])

   


    return{email, setEmail}

}