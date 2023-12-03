//iife 

(function (){
    console.log("jay swaminarayan");
  })();
  
  (function(a, b){
    console.log(a**b);
  }) (4, 2);
  
  const user = (function(){
    const userData={
      userName: "hardik",
      userAge: 23
    };
    //object is local and private
  
    function getName(){
      console.log(userData.userName);
    }
  
    function updateAge(age){
      console.log(userData.userAge+age);
    }
  
    return {getName, updateAge};
  })();
  
  console.log(user);
  user.getName();
  user.updateAge(2);
  console.log(user.userData); //it's private in iife fn

  // ++++++++mcq++++

  function main(){
    return (function(){
    console. log("hello user")
    }) ();
    }
    const result = main();

    //==================
    var counter= (function(){
        var count=0;
        function increment(){
            count++;
        }
        function getCount(){
            return count;
        }
        return {
          increment,
          getCount
        }
      })();
      
      counter.increment();
      counter.increment();
      console.log(counter.getCount());
//=================both are same (above & below )====================
      var counter = (function () {
        var count=0;
        return {
         increment: function () {
            count++;
            },
         getCount: function () {
            return count;
            }
        }
        })();
        counter. increment ();
        counter. increment ();
        console. log(counter . getCount ( )) ;