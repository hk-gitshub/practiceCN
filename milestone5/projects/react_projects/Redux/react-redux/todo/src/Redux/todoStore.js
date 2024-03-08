
import { todoReducer } from "./Reducers/todoReducers";

const redux = require("redux");

export const store=redux.createStore(todoReducer);
