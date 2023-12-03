class vehical{
    //properties
    // name;
    // color;
    // price;
    //constructor function
    constructor(name,color, price){
        this.name=name;
        this.color=color;
        this.price=price;
    }

    //methods
    getDetails(){
        console.log(`name:${this.name}, color:${this.color}, price:${this.price}`);
    }
}

const veh=new vehical("audi", "black", 240000000);
veh.getDetails();
console.log(veh);