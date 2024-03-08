import { useSelector, useDispatch } from "react-redux";
import { decCounter, incCounter, resetCounter } from "../redux/actions/counterActions";
// add action creators imports here

export const CounterActions = () => {
  const {count}  = useSelector((state) => state.counter);
  const dispatch=useDispatch()
  // console.log(count);

  return (
    <div className="actions">
      {/* disptach action to decrease count here */}
      <button disabled={count <= 0} onClick={()=>dispatch(decCounter())}>
        <img
          src="https://cdn-icons-png.flaticon.com/512/992/992683.png"
          alt="dec"
        />
      </button>
      {/* disptach action to increase count here */}
      <button disabled={count >= 10} onClick={()=>dispatch(incCounter())}>
        <img
          src="https://cdn-icons-png.flaticon.com/512/992/992651.png"
          alt="inc"
        />
      </button>
      {/* disptach action to reset count here */}
      <button onClick={()=>dispatch(resetCounter())}>
        <img
          src="https://cdn-icons-png.flaticon.com/512/9923/9923627.png"
          alt="reset"
        />
      </button>
    </div>
  );
};
