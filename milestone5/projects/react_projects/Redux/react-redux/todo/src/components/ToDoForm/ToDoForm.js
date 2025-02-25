import { useState } from "react";
import { useDispatch } from "react-redux";
import "./ToDoForm.css";
import {addTodo } from "../../Redux/Actions/toDoActions";

function ToDoForm() {
  const [todoText, setTodoText] = useState("");
  const dispatch=useDispatch();

  const handleSubmit = (e) => {
    e.preventDefault();
    // onCreateTodo(todoText);
    dispatch(addTodo(todoText));
    setTodoText("");
  };

  return (
    <div className="container">
      
    <form onSubmit={handleSubmit}>
      <input
        type="text"
        className="form-control mb-3"
        value={todoText}
        onChange={(e) => setTodoText(e.target.value)}
      />
      <button className="btn btn-success float-end" type="submit">Create Todo</button>
    </form>
    </div>
  );
}

export default ToDoForm;
