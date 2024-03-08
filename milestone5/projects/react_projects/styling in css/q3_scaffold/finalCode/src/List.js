import lists from "./list.module.css";
import Item from "./components/Item";
// import "./list.css";
import { data } from "./data";

export default function List() {
  return (
    <>
      <h3 className={lists.title}>Items Listed for Sale</h3>
      <div className={lists.container}>
        {data.map((item) => (
          <Item key={item.id} item={item} />
        ))}
      </div>
    </>
  );
}
