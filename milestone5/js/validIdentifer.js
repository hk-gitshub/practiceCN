function isValidIdentifier(id){

    //     if(!(id[0]==='$' || 
    //            id[0]==='_' || 
    //            id[0]>='a' && id[0]<='z' ||
    //            id[0]>='A' && id[0]<='z'))
    //         {
    //             console.log(id+" is not a valid identifier.");
    
    //         }
         let res=true;
        for(let i=0; i<id.length; i++){
            if(!(id[i]==='$' || 
               id[i]==='_' || 
               id[i]>='a' && id[i]<='z' ||
               id[i]>='A' && id[i]<='z'))
            {
                res=false;
                break;
            }
        }
         if(!res){
             console.log(id+" is not a valid identifier.");
         }else{
             console.log(id+" is a valid identifier.");
         }
        
    }

    isValidIdentifier("myVariable"); // Logs: myVariable is a valid identifier.
isValidIdentifier("123abc"); // Logs: 123abc is not a valid identifier.
isValidIdentifier("_pr&ivate"); // Logs: _pr&ivate is not a valid identifier.