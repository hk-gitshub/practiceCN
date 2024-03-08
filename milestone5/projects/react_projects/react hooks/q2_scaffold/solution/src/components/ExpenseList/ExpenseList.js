import React from "react";
import styles from "./ExpenseList.module.css";
import Transaction from "../Transaction/Transaction";
import "../Transaction/Transaction.module.css"

const ExpenseList = (props) => {
  const { expenses, removeExpanse } = props;
  return (
    <div className={styles.expenseListContainer}>
      <h3>Transactions</h3>
      <ul className={styles.transactionList}>
        {/* Display transactions here */}
        {expenses.map((expense, index) => (
            <Transaction expense={expense} index={index} removeExpanse={removeExpanse} className={styles.Transaction}/>
        ))}
      </ul>
    </div>
  );
};

export default ExpenseList;
