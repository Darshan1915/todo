async function orderpizza(){
    const Cheese = await ggetCheese();
    console.log("here is the chees",Cheese);
    const Dough = await getDough(Cheese);
    console.log("here is the Dough",Dough);
    const Pizza = await getPizza(Dough);
    console.log("here is the Pizza",Pizza);
}
