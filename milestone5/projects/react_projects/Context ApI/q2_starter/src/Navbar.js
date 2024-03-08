import { themeContext } from "./themeContext";
import { lanContext } from "./languageContext";
import { useContext } from "react";

export const Navbar = () => {
  // get theme and lanauge contexts here
  const {language}=useContext(lanContext);
  const {theme, setTheme}=useContext(themeContext);

  const handleTheme=()=>{
    if(theme==="light"){
      setTheme("dark")
    }else{
      setTheme("light")

    }
  }

  return (
    <div className="navbar">
      <span>Dialecto</span>
      <div className="right">
        {/* add eventListerner to it also change the content of the button based on the theme */}
        <button onClick={(e)=>handleTheme()}>{theme=="light"?"dark":"light"}</button>
        <span>{language}</span>
      </div>
    </div>
  );
};
