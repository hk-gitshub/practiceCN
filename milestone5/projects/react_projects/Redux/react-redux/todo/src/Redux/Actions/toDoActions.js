// actions constants

export const ADD_TODO="ADD_TODO";
export const TOGGLE_TODO="TOGGLE_TODO";

//actions creators

export const addTodo=(text)=>({text, type:ADD_TODO});
export const toggleTodo=(index)=>({index, type: TOGGLE_TODO})