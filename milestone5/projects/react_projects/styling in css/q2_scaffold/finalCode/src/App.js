import "./styles.css";

export default function App() {
  return (
    <div className="App">
      <form
        style={style.frm}
      >
        <h3 style={style.h3}>Sign Up</h3>
        <input style={style.input} placeholder="Username" />
        <input style={style.input} placeholder="Email" />
        <input style={style.input} placeholder="Password" />
        <div
          style={style.btns}
        >
          <button
            style={style.cancelBtn}
          >
            Cancel
          </button>
          <button
            style={style.loginBtn}
          >
            Login
          </button>
        </div>
      </form>
    </div>
  );
}


const style={
  frm:{
    width: "60%",
    margin: "50px auto",
    display: "flex",
    flexDirection: "column",
    gap: 20
  },
  h3:{
    fontSize: "2rem", 
    letterSpacing: 2
  },
  input:{
    padding: 10
  },
  btns:{
    display: "flex",
    justifyContent: "center",
    gap: 20
  },
  cancelBtn:{
    outline: "none",
    paddingBlock: 5,
    width: 100,
    backgroundColor: "red",
    color: "white",
    cursor: "pointer"
  },
  loginBtn:{
    outline: "none",
    paddingBlock: 5,
    width: 100,
    backgroundColor: "red",
    color: "white",
    cursor: "pointer"
  }


}