function Add( a, b){
    const sum = a+b
    console.log("Result is : ",sum);
}
function Sub( a, b){
    const substract= a-b
    //console.log("Result is : ",sum);
    return substract;
}

let x = 20;
let y = 12;
Add(x,y)
const result = Sub(x,y)
console.log("Substract is: ",result);
//In normal function declaration we can call dunction from anywhrere
//but in function expressing we want 1st difine then after below call


//IMP
//Function expression
const square = function(num){
    return num*num;
}
console.log(square(4));
