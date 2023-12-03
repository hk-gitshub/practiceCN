    //Create your function with the name shuffle.
    //It should return a function when call should give the shuffled array.
    //Do not modify the anything in the starter code.
    function main() {

        const Subject1 = [
            "Question1",
            "Question2",
            "Question3",
            "Question4",
            "Question5"
          ];
          function shuflfe(arr){
              return function(){
                  for(let i=arr.length-1; i>0; i--){
                      let j=Math.floor(Math.random()*(i+1));
                      let temp=arr[j];
                      arr[j]=arr[i];
                      arr[i]=temp;
                  }
                  return arr;
                }
          }
          const func = shuflfe(Subject1);
          console.log(func());
          // return shuffle;
        }
      main();