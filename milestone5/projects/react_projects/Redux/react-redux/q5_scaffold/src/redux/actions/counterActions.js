
// define counter action constants here
export const COUNT_INCREMENT="COUNT_INCREMENT";
export const COUNT_DECREMENT="COUNT_DECREMENT";
export const COUNT_RESET="COUNT_RESET";


// define counter action creators here
export const incCounter=()=>({type:COUNT_INCREMENT})
export const decCounter=()=>({type:COUNT_DECREMENT})
export const resetCounter=()=>({type:COUNT_RESET})

