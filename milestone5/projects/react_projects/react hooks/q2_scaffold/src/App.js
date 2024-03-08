import { useState } from "react";
import ExpenseForm from "./components/ExpenseForm/ExpenseForm";
import ExpenseInfo from "./components/ExpenseInfo/ExpenseInfo";
import ExpenseList from "./components/ExpenseList/ExpenseList";
import "./App.css";

function App() {
  const [expenses, setExpenses] = useState([]);

  // Create function to add an expense

  const addExpanse=(text, amount, id)=>{
    setExpenses([{text, amount, id}, ...expenses])
  }

  // Create function to delete an expense

  const removeExpanse=(id)=>{
    setExpenses(
      expenses.filter(
        (ex, i)=>i!==id
      ));
  }

  return (
    <>
      <h2 className="mainHeading">Expense Tracker</h2>
      <div className="App">
        <ExpenseForm addExpanse={addExpanse}/>
        <div className="expenseContainer">
          <ExpenseInfo expenses={expenses} />
          <ExpenseList expenses={expenses} removeExpanse={removeExpanse}/>
        </div>
      </div>
    </>
  );
}

export default App;
