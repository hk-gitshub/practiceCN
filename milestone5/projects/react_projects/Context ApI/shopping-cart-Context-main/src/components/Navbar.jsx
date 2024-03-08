import React from "react";
import styles from "../styles/Total.module.css";
import { useContext } from "react";
import { itemContext, totalContext } from "./context";

function Navbar() {
	const { item } = useContext(itemContext)
	const { total } = useContext(totalContext)

	// console.log(value);
	return (
		<div className={styles.container}>
			<h1>Total : &#x20B9; {total}</h1>
			<h1>Items: {item}</h1>
		</div>
	);
}

export default Navbar;
