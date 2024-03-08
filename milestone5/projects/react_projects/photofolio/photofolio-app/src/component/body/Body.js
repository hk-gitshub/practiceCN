import styles from "./body.module.css"
export default function Body() {

    return (
        <div className={styles.content}>
            <h2> Your Albums</h2>
            <button className={styles.add_btn}> Add Albums</button>
        </div>
    )
}