import "./styles.css";

// Do not remove the export statement from Card Component.
//Refactor the given Card component.
export const Card = (prop) => {
  const {name, about}=prop
  return (
  <div className="card">
    <h3>Name: {name}</h3>
    <span>About: {about}</span>
  </div>
);}

export default function App() {
  return <Card name="Hardik" about="yu hu hu hu my self hardik Kori" />;
}
