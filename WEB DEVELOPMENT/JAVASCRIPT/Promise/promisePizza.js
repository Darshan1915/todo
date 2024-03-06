function getCheese(){
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const Cheese = "🧈"
            //console.log("here is the chees",cheese);
            resolve(Cheese)
        }, 2000);
    }) 
}

function getDough(Cheese){
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const Dough = "🍩+🧈"
            //console.log("here is the dough",Dough);
            resolve(Dough)
            //reject("bad item") And it is catched by catch() function
        }, 2000);
    }) 
}

function getPizza(dough){
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const Pizza = "🍕+🍩+🧈"
            //console.log("here is the Pizza",Pizza);
            resolve(Pizza)
        }, 2000);
    }) 
}

//method 2:-
async function orderpizza(){
    const Cheese = await getCheese();
    console.log("here is the chees",Cheese);
    const Dough = await getDough(Cheese);
    console.log("here is the Dough",Dough);
    const Pizza = await getPizza(Dough);
    console.log("here is the Pizza",Pizza);
}



//method 1:-

// ggetCheese()
//     .then((Cheese)=>{
//         console.log("here is the chees",Cheese);
//         return getDough(Cheese);
//     }).then((Dough)=>{
//         console.log("here is the dough",Dough);
//         return getPizza(Dough)
//     })
//     .then((pizza)=>{
//         console.log("here is the pizza",pizza);
//     })
//     .catch((data)=>{
//         console.log("erroe occured",data);
//     })
//     .finally(()=>{
//         console.log("Procces ended");
//     })