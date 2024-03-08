import styles from "./navbar.module.css"

export default function Nabar(){
     
    return(
        <div className={styles.navbarContainer}>

            <div className={styles.logo}>
                <img src="https://mellow-seahorse-fc9268.netlify.app/assets/logo.png" alt="photofolio_logo" className={styles.logo_img}/>
                <h3>PhotoFolio</h3>
            </div>

        </div>
    )
}