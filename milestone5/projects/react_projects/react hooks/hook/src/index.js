import { StrictMode } from "react";
import {createRoot} from "react-dom/client"

import App from "./app"


const reactElement=document.getElementById("root");
const root = createRoot(reactElement);

root.render(
    <StrictMode>
        <App/>
    </StrictMode>
);
