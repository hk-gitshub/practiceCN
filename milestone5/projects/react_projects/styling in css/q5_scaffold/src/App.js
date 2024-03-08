import "./styles.css";
import { Button } from "./ButtonVariants.styled";

export default function App() {
  return (
    <div className="App">
      <h3>Button Variants</h3>
      <div>
        <h3>Outlined Button</h3>
        <Button> Outlined </Button>
      </div>
      <div>
        <h3>Filled Button</h3>
        <Button border="none" bg="green" color="red"> Filled </Button>
      </div>
    </div>
  );
}
