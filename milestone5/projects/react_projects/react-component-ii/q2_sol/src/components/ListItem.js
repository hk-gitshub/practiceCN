import React, { Component } from "react";

// Complete this Component
const ListItem = ({item}) => {
  const {name, link, icon, bgColor}=item;
  // console.log(item);
  return (
    <div
      className="ListItem"
      style={{
        height: 30,
        backgroundColor: bgColor
      }}
    >
      <img src={icon} alt={name} />
      <a href={link}>{name}</a>
    </div>
  );
};

export default ListItem;
