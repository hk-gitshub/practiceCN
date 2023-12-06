import React from "react";

class MovieCard extends React.Component {
    constructor() {
        super();
        this.state = {
            title: "Animallll",
            plot: "Action, Dram, & thrill",
            price: 189,
            rating: 8.9,

        }
        //2nd way to bind function : make bind on constructor
        // this.addStar=this.addStar.bind(this)
    }
    //either make arrow function to avoid binding
    // addStar=()=>{
    //     console.log(this.state);    
    // }

    addStar(){
        console.log(this.state);
    }
    render() {
        const { title, plot, price, rating } = this.state;
        return (
            <div className="main">
                <div className="movieCard">
                    <div className="leftSide">
                        <img alt="poster" src="https://m.media-amazon.com/images/M/MV5BMDUxNDcwMjItN2M4Yy00NDVjLTllZWUtYjBhM2VkNTg0OWY4XkEyXkFqcGdeQXVyMTY3ODkyNDkz._V1_UX100_CR0,0,100,100_AL_.jpg" />
                    </div>

                    <div className="rightSide">
                        <div className="title">{this.state.title}</div>
                        <div className="plot">{plot}</div>
                        <div className="price">{price}</div>
                        <div className="footer">
                            <div className="ratting">{rating}</div>
                            <div className="star">
                                
                            <div><img src="https://cdn-icons-png.flaticon.com/128/6057/6057365.png" alt="str-btn" />
                                </div>
                                <div><img src="https://cdn-icons-png.flaticon.com/128/2550/2550301.png" alt="str-btn" />
                                </div>
                                <div><img src="https://cdn-icons-png.flaticon.com/128/32/32563.png" alt="str-btn" onClick={this.addStar.bind(this)}/>
                                
                                </div>

                            </div>
                            <div className="btns">
                                <button className="favourite-btn"> favourite</button>
                                <button className="cart">Add to cart</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        );
    }
}

export default MovieCard;