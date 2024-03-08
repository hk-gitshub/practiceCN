import { StrictMode } from "react";
import { createRoot } from "react-dom/client";

import App from "./App";

const reactElement=document.getElementById("root");
const root=createRoot(reactElement)
root.render(
    <StrictMode>
        <App />
    </StrictMode>
);