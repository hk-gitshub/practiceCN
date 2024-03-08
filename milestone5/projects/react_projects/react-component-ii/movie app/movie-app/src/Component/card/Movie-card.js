import React from "react";
import "./movieCard.css"

class MovieCard extends React.Component {
    constructor() {
        super();
        this.state = {
            title: "Animallll",
            plot: "Action, Dram, & thrill",
            price: 189,
            rating: 8.9,
            stars: 0,
            fav: false,
            rmCart: false
        }
        //2nd way to bind function : make bind on constructor
        // this.addStar=this.addStar.bind(this)
    }
    //either make arrow function to avoid binding
    addStar = () => {

        // this.state.stars+=0.5;
        this.setState({
            stars: this.state.stars + 0.5
        });
        this.setState({
            stars: this.state.stars + 1
        });
        this.setState({
            stars: this.state.stars + 0.3
        });
        this.setState({
            stars: this.state.stars + 0.5
        });
        console.log(this.state.stars);
    }

    // addStar(){
    //     console.log(this.state);
    // }

    decreaseStar = () => {
        this.setState(
            (prevState) => {
                return {
                    stars: prevState.stars - 0.5
                }
            });

        this.setState(
            (prevState) => {
                return {
                    stars: prevState.stars - 0.5
                }
            });

        console.log("star", this.setState.stars)
    }


    handleFav = () => {
        this.setState({ fav: !this.state.fav })
    }

    handleRemove = () => {
        this.setState({ rmCart: !this.state.rmCart })
    }

    render() {
        console.log("render")
        const { title, plot, price, rating, stars, fav, rmCart } = this.state;
        return (
            <div className="main">
                <div className="movieCard">
                    <div className="leftSide">
                        <img alt="poster" src="https://m.media-amazon.com/images/M/MV5BNDYxNjQyMjAtNTdiOS00NGYwLWFmNTAtNThmYjU5ZGI2YTI1XkEyXkFqcGdeQXVyMTMxODk2OTU@._V1_SX300.jpg" className="movieImage"/>
                    </div>

                    <div className="rightSide">
                        <div className="title">{this.state.title}</div>
                        <div className="plot">{plot}</div>
                        <div className="price">{price}</div>
                        <div className="footer">
                            <div className="ratting">{rating}</div>
                            <div className="star">

                                <div>
                                    <img src="https://cdn-icons-png.flaticon.com/128/6057/6057365.png" alt="str-btn"
                                        onClick={this.decreaseStar} />
                                </div>
                                <div>
                                    <img src="https://cdn-icons-png.flaticon.com/128/2550/2550301.png" alt="str-btn" />
                                </div>
                                <div>
                                    <img src="https://cdn-icons-png.flaticon.com/128/32/32563.png" alt="str-btn" onClick={this.addStar.bind(this)} />
                                </div>

                                <div>
                                    {stars}
                                </div>

                            </div>
                            <div className="btns">
                                {/* {fav?<button className="unfavourite-btn" onClick={this.handleFav}> unfavourite</button>:
                                <button className="favourite-btn" onClick={this.handleFav}> favourite</button>} */}

                                <button className={fav ? "unfavourite-btn" : "favourite-btn"}
                                    onClick={this.handleFav}>
                                    {fav ? "unfavourite-btn" : "favourite-btn"}
                                </button>

                                <button className={rmCart?"remove-cart":"cart"} onClick={this.handleRemove}>{rmCart?"Remove from cart":"Add to cart"}</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        );
    }
}

export default MovieCard;