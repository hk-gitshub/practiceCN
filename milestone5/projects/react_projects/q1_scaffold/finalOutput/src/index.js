import { StrictMode } from "react";
import { createRoot } from "react-dom/client";

import App from "./App";

const rootElement = document.getElementById("root");
const root = React.createRoot(rootElement);

root.render(
  <StrictMode>
    <App />
  </StrictMode>
);
