function addSquare(a,b){
    function square(x){
        return x*x;
    }
    return square(a)+square(b)
}

console.log("Answer: ",addSquare(2,3));