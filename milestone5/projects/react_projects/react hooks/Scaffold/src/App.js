import "./styles.css";
import useFetch from "./useFetch";

export default function App() {
  const url = "https://v2.jokeapi.dev/joke/Programming?type=single";

  const { loading, data, getJoke, error } = useFetch(url)
  if (loading) {
    return <p>Loading...</p>;
  }
  if (error) {
    return <p>Something went wrong...</p>;
  }
  return (
    <div className="App">
      <h1>Joke Generator</h1>
      <h2>{data.joke}</h2>
      <button className="btn" onClick={getJoke}>New Joke</button>
    </div>
  );
}
