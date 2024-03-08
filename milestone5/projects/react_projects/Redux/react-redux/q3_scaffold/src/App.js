import "./styles.css";
import { Actions } from "./components/Actions";
import { Timer } from "./components/Timer";
//  add redux imports here
import { Provider } from "react-redux";
import { store } from "./store";


export default function App() {
  return (
    <Provider store={store}>
    <div className="App">
      <h1>Simple Timer</h1>
      <Timer />
      <Actions />
    </div>
    </Provider>
  );
}
