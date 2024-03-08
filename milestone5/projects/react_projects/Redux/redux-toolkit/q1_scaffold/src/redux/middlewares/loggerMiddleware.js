// create and export middleware function here

export const loggerMiddleware=(store)=>{
    return function(next){
        return function(action){
            console.log( 'dispatching action', action.type);
            console.log("next state", store.getState());
            next(action);
        }
    }
}