function main() {
    class ExpenseTracker {
        #income;
        #expenses = [];
        totalExpenses = 0;
      constructor(income) {
        // Private properties
          this.#income=income;
      }
  
  
        // Public properties
        addExpense = (name, amount, date) => {
          this.#expenses.push({ name, amount, date });
          this.totalExpenses += amount;
        };
  
        calculateBalance = () => {
          return this.#income - this.calculateTotalExpenses();
        };
  
        // Private method to calculate total expenses
        calculateTotalExpenses = () => {
          return this.totalExpenses;
        };
      
    }
  
    const tracker = new ExpenseTracker(5000);
    tracker.addExpense("Rent", 1000, "2021-10-01");
    tracker.addExpense("Groceries", 500, "2021-10-02");
    console.log(tracker.calculateBalance()); // should output 3500
    return ExpenseTracker;
  }
  
  main();
  