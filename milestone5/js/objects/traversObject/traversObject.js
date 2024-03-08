//complete the calculatePrice function
//Do not alter the starter code
const goods = {
    apple: { price: 150, quantity: 2 },
    banana: { price: 75, quantity: 3 },
    orange: { price: 125, quantity: 1 }
    };    
    function calculatePrice(goods){
        //Implement your function here
        let totalPrice=0;
        // console.log(fruits);
        console.log(Object.values(goods));
        for(let i in goods){
            let fruits=Object.values(goods[i]);
            let temp=1
            for(let j of fruits){
                temp *= j;
            }
            totalPrice +=temp;
        }
        return totalPrice;
    }
console.log(goods.apple.price);
    console.log(calculatePrice(goods));
    //output : 650
