import { ADD_TODO, TOGGLE_TODO } from "../Actions/toDoActions";

const initialtState = {
    todo: [{
        "text":"wakeup at 6 am",
        "completed": false
    },
    {
        "text": "eat breakfast",
        "completed": true
    }]
}

export function todoReducer(state = initialtState, actions) {
    switch (actions.type) {
        case ADD_TODO:
            return {
                ...state,
                todo: [
                    ...state.todo,
                    {
                        text: actions.text,
                        completed: false
                    }
                ]
            }
        case TOGGLE_TODO:
            return{
                ...state,
                todo: state.todo.map((item, i)=>{
                    if(i==actions.index){
                        item.completed =!item.completed
                    }
                    return item;
                })
            }
        default:
            return state;
    }
}