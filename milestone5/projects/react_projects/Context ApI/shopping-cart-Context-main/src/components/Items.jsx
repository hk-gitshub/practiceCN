import styles from "../styles/Item.module.css";
import ItemCard from "./ItemCard";

function Items() {

  return (
    <div className={styles.wrapper}>
        <ItemCard name={"apple"} price={199}/>
    </div>
  );
}

export default Items;
