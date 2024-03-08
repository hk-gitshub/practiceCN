import { Component } from "react";
import AnimeCard from "./AnimeCard";

// Complete the AnimeList Component
class AnimeList extends Component {
  render() {
    const { anime } = this.props;
    return (
      <div className="anime-list">
        {
          anime.map((ani, i) => <AnimeCard key={i} data={ani} />)
        }
      </div>);
  }
}

export default AnimeList;
