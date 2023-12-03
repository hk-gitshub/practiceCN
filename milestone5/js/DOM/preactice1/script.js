function changeBackgroundColor(selector){
    const ele=document.querySelectorAll(selector);
    ele.forEach(element => {
        element.setAttribute("style", "background-color:yellow");
    });

}

// changeBackgroundColor(".my-class");
// changeBackgroundColor("#my-id");
// changeBackgroundColor("button");

const btn=document.createElement("button");
btn.textContent="Click here";
btn.className="btn1";

const division=document.getElementById("my-id");
division.appendChild(btn);

