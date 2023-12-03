function greet(msg){
    return function(msg1){
      console.log(`${msg1}, ${msg}`);
    };
  }
  
  const greeting=greet("what r u doing");
  greeting("hii");  

  greet("you doing great")("good job");