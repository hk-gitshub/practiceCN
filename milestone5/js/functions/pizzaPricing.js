
    //create you curried function here with name pizzaPricing.`	`

    function pizzaPricing(size){
        const Size={
            small:8.00,
            medium:10.00,
            large:12.00
        };

        return function(arrTopping){
            return function(quantity){
                // return (size+(arrTopping.length*1.50)*quantity).toFixed(2);
                return ((Size[size]+(arrTopping.length*1.50))*quantity).toFixed(2);
            }
        }
    }
    
    const withTopping=pizzaPricing('small');
    const nungs=withTopping(['topping1', 'topping2', 'topping']);
    const price=nungs(2);
    console.log(price);
    
    console.log(pizzaPricing('medium')(['topping1','topping5','topping2','topping4','topping3'])(3));
    