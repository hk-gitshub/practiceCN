// add counter action creators imports here

import { COUNT_DECREMENT, COUNT_INCREMENT, COUNT_RESET } from "../actions/counterActions";

const INITIAL_STATE = { count: 0 };

// define counter reducer function here
export const counterReducer = (state=INITIAL_STATE, action) => {
    switch(action.type){
        case COUNT_INCREMENT:
            return{
                ...state,
                count: state.count+1
            }
        case COUNT_DECREMENT:
            return{
                ...state,
                count: Math.max(0, state.count-1)
            }
        case COUNT_RESET:
            return{
                ...state,
                count: 0
            }
        default:
            return state;
    }
}
