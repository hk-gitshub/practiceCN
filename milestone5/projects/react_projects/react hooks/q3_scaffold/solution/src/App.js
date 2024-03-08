import { useReducer, useState } from "react";
import ExpenseForm from "./components/ExpenseForm/ExpenseForm";
import ExpenseInfo from "./components/ExpenseInfo/ExpenseInfo";
import ExpenseList from "./components/ExpenseList/ExpenseList";
import "./App.css";

const expenseReducer=(state, action)=>{

  switch(action.type){
    case "addExpanse":
      return [action.expense, ...state];
    case "deleteExpanse":
      return state.filter((ex, index)=> ex.id !== action.index)
    default:
      return state;
  }

}

function App() {
  // Remove the useState hook and replace it with useReducer hook
  // Implement the functionality to add and remove the transaction in reducer function
  // const [expenses, setExpenses] = useState([]);
  const [expenses, dispatch]=useReducer(expenseReducer, []);

  return (
    <>
      <h2 className="mainHeading">Expense Tracker</h2>
      <div className="App">
        <ExpenseForm dispatch={dispatch}/>
        <div className="expenseContainer">
          <ExpenseInfo expenses={expenses} />
          <ExpenseList expenses={expenses} dispatch={dispatch} />
        </div>
      </div>
    </>
  );
}

export default App;
