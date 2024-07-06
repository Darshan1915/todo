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

app.use("/admin",adminRoutes);
app.use("/users",userRoutes);
app.use("/product",productRoutes);

app.listen(3000);