import { ADD_NOTE, DELETE_NOTE } from "../actions/noteActions";

const initialState = {
    notes: [
        {
            text: "today we are learning react ",
            createdOn: new Date()
        },
        {
            text: "two reducres in one app",
            createdOn: new Date()
        }
    ]
}


export function noteReducer(state = initialState, action) {
    switch (action.type) {
        case ADD_NOTE:
            return {
                ...state,  //spread operator to keep the existing state intact and add a new
                notes: [                //adds the payload (new note) to the array of notes
                    ...state.notes,
                    {            
                        text:action.text,       
                        createdOn: new Date()
                    }]   
            }
        case DELETE_NOTE:
            state.notes.splice(action.index, 1);
            return{
                ...state, 
                notes: [...state.notes]   //returning an object with the updated property 'notes'
            }
        default:
            return state
    }
}