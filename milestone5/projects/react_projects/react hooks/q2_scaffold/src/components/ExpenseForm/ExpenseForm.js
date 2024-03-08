import { useRef } from "react";
import styles from "./ExpenseForm.module.css";

const ExpenseForm = (props) => {
  const expenseTextInput = useRef();
  const expenseAmountInput = useRef();

  const {addExpanse}=props;

  const onSubmitHandler = (e) => {
    e.preventDefault();
    // Logic to add expense here
    // console.log(expenseTextInput.current.value);
    // console.log(expenseAmountInput.current.value);

    const text=expenseTextInput.current.value;
    const amount=expenseAmountInput.current.value

    const id= new Date().getTime();

    addExpanse(text, amount, id);

    expenseTextInput.current.value="";
    expenseAmountInput.current.value="";

  };

  return (
    <form className={styles.form} onSubmit={onSubmitHandler}>
      <h3>Add new transaction</h3>
      <label htmlFor="expenseText
      ">Text</label>
      <input
        id="expenseText"
        className={styles.input}
        type="text"
        placeholder="Enter text..."
        ref={expenseTextInput}
        required
      />
      <div>
        <label htmlFor="expenseAmount">Amount</label>
        <div>(negative - expense,positive-income)</div>
      </div>
      <input
        className={styles.input}
        id="expenseAmount"
        type="number"
        placeholder="Enter amount..."
        ref={expenseAmountInput}
        required
      />
      <button className={styles.submitBtn}>Add Transaction</button>
    </form>
  );
};

export default ExpenseForm;
