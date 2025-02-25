import React from "react";
import styles from "./ExpenseList.module.css";
import Transaction from "../Transaction/Transaction";

export default class ExpenseList extends React.Component {
  render() {
    return (
      <div className={styles.expenseListContainer}>
        <h3>Transactions</h3>
        <ul className={styles.transactionList}>
          {/* Display transactions here */}
        </ul>
      </div>
    );
  }
}
