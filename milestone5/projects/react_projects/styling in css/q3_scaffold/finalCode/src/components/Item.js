import items  from "./item.module.css";

export default function Item({ item }) {
  return (
    <div className={items.container}>
      <h3 className={items.title}>{item.title}</h3>
      <img src={item.image} alt={item.title} className={items.image} />
      <p>
        <strong className={items.price}>${item.price}</strong>
      </p>
      <p>{item.description}</p>
    </div>
  );
}
