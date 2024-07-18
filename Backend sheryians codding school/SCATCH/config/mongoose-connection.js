// //we use kabab-case

// const mongoose = require('mongoose'); 

// // const config = require("config");

// //debug
// // const dbgr = require("debug")("developement:mongoose");//("developement:mongoose") we can name this anything. Ise krne ke baad ham consol.log ke bajaye dbgr use kr skte hai. Aur iska use ye hai ki ham hamari aaplication kisiko de to consol mai kuch bhi print nhi hoga jabtak ki ham environment set nhi krte. {n consol=> $env:DEBUG="developement:*"}
// const dbgr = require("debug")("developement:mongoose")


// //this line only says that you goes on localhost on your laptop but in hte future we can use any other. So this is only upto development of this application.
// mongoose
// .connect("mongodb://127.0.0.1:27017/SCATCH")
// // .connect(`${config.get("MONGODB_URI")}/SCATCH`) // Insted of config we can also use .env. Config.get ye kaam krta hai ki - dekhta hai environment kya chal rha hai wor jo environment chal rha hai wo run kr deta hai.
// .then(function(){//then executes when above line have no error
//     console.log("connected");
//     // dbgr("connected");
// })
// .catch(function(){
//     console.log(err);
//     // dbgr(err);
// })


module.exports =  mongoose.connection;

const mongoose = require('mongoose');

mongoose
.connect("mongodb://127.0.0.1:27017/SCATCH")
.then(function(){//then executes when above line have no error
    console.log("connected");
 })
.catch(function(){
    console.log(err);
 })


module.exports =  mongoose.connection;
