
// const redux = require("redux");

import * as redux from "redux";
import { combineReducers } from "redux";
import {todoReducer} from "./reducers/todoReducer";
import { noteReducer } from "./reducers/noteReduces";

const result=combineReducers({
    todoReducer,
    noteReducer
})

export const store = redux.createStore(result);
console.log(result);

