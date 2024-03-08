import "./styles.css";

export default function App() {
  return (
    <div className="App">
      <form
        style={{
          width: "60%",
          margin: "50px auto",
          display: "flex",
          flexDirection: "column",
          gap: 20
        }}
      >
        <h3 style={{ fontSize: "2rem", letterSpacing: 2 }}>Sign Up</h3>
        <input style={{ padding: 10 }} placeholder="Username" />
        <input style={{ padding: 10 }} placeholder="Email" />
        <input style={{ padding: 10 }} placeholder="Password" />
        <div
          style={{
            display: "flex",
            justifyContent: "center",
            gap: 20
          }}
        >
          <button
            style={{
              outline: "none",
              paddingBlock: 5,
              width: 100,
              backgroundColor: "red",
              color: "white",
              cursor: "pointer"
            }}
          >
            Cancel
          </button>
          <button
            style={{
              outline: "none",
              paddingBlock: 5,
              width: 100,
              backgroundColor: "red",
              color: "white",
              cursor: "pointer"
            }}
          >
            Login
          </button>
        </div>
      </form>
    </div>
  );
}
