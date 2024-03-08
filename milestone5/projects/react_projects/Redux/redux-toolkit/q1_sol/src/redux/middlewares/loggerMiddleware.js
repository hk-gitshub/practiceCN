// create and export middleware function here

export const loggerMiddleware=(store)=>{
    return function(next){
        return function(action){
            console.log( 'dispatching action', action.type);
            next(action);
            console.log("next state", store.getState());
        }
    }
}