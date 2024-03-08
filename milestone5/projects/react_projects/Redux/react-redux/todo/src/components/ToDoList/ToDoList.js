import { useSelector, useDispatch } from "react-redux";
import "./ToDoList.css";
import { toggleTodo } from "../../Redux/Actions/toDoActions";

function ToDoList({onToggle}) {
  const todos=useSelector((state)=>state.todo)
  const dispatch=useDispatch();


  return (
    <div className="container">
    <ul>
      {todos.map((todo,index) => (
        <li key={todo.id}>
          <span className="content">{todo.text}</span>
          <span className={todo.completed ? 'completed':'pending'}>{todo.completed ? 'Completed': 'Pending'}</span>
          <button className="btn btn-warning"
          onClick={()=>{dispatch(toggleTodo(index))}}
          >Toggle</button>
          </li>
      ))}
    </ul>
    </div>
  );
}

export default ToDoList;
