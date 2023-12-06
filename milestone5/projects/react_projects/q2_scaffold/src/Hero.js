import React from "react";

class Hero extends React.Component {
    render() {
        return (
                <div className="heroDetails">
                    <div className="name">
                        Name: Pranav Sharad Yeole
                    </div>
                    <div className="mail">
                        Email: pranav@google.Com
                    </div>
                    <div className="number">
                        Number: Pranav Sharad Yeole
                    </div>
                    <div className="address">
                        Address: ABC, xyz street.
                    </div>
            </div>
        );
    }
}

export default Hero;