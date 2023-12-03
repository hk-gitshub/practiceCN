function main(){
    const userAuth = (function(){
      const arr=[];
      const temp={};
      function registerUser(username, password){
        if(checkCredentials(username)){
              return `The user is already registered`;
        }else{
            temp.userName=username;
            temp.Password=password;
            arr.push(temp);
            return `The user have been added to the registeredUser array`;
        }
      }

        function checkCredentials(username){
            for(let i=0; arr.length; i++){
                if(arr[i].userName===username){
                    return true;
                }
            }
            return false;   
       }
        return{
            registerUser:registerUser
        };
    })();
      
  
  console.log(userAuth.registerUser("user1","password123"));
  //Output: The user have been added to the registeredUser array
  console.log(userAuth.registerUser("user1","password123"));
  //Output : The user is already registered
  return userAuth;
}