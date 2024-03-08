import React from "react"
import "../styles/body.css"

export default function Body() {
    return (
        <div className="container">
            <div className="search-container">
                <form className="inp-box">
                    <input placeholder="search by name" type="text" className="inp" />
                </form>
            </div>

            <div className="item-container">
                <div className="item">x
                    <div className="image-box">
                        <img src="https://fakestoreapi.com/img/81fPKd-2AYL._AC_SL1500_.jpg"
                            alt="bag"
                            className="image" />
                    </div>
                    <div className="item-details">
                        <div className="item-name"> 
                        <p>Fjallraven - Foldsack No. 1 Backpac.</p>

                        </div>
                        <div className="item-price">
                            <p className="price">&#8377; 1099</p>
                        </div>
                        <button className="btn"> Add to cart </button>
                    </div>
                </div>

            </div>
        </div >
    )
}