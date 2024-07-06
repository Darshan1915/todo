//we use kabab-case

const mongoose = require('mongoose'); //this line only says that you goes on localhost on your laptop but in hte future we can use any other. So this is only upto development of this application.

mongoose
.connect("mongodb://127.0.0.1:27017/SCATCH")
.then(function(){
    console.log("connected");
})
.catch(function(){
    console.log(err);
})


module.exports =  mongoose.connection;