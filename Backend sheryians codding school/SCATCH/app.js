const express = require('express');
const app = express();

const cookieParser = require('cookie-parser');
const path = require('path');


const adminRoutes = require("./routes/adminRoutes")
const userRoutes = require("./routes/userRoutes")
const productRoutes = require("./routes/productRoutes")

const db = require("./config/mongoose-connection");


app.use(express.json());
app.use(express.urlencoded({extended: true}));
app.use(cookieParser());
app.use(express.static(path.join(__dirname,"public")));

app.get("/", function(req,res){
    res.send("working")
})

app.use("/admins",adminRoutes);
app.use("/users",userRoutes);
app.use("/products",productRoutes);

app.listen(3000);