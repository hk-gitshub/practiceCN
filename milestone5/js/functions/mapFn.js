const arr=[2,3,5,7,9];

//map funtion used manupate the array 
//map's function accecpt 3 arguments (current-element(required), index, arr)
// const cubeArray=arr.map(function(CustomElement){
//     return CustomElement**3;
// })

//we can also pass arrow function;
const cubeArray=arr.map((CustomElement)=> CustomElement**3);
console.log(cubeArray);