const mongoose = require('mongoose');

//mongoose.connect("mongodb://127.0.0.1:27017/SCATCH") //we user this connecrtion from config folder okk.

const userSchema = mongoose.Schema({
    fullname :  {
        type: String,
        minLenth: 3,
        trim:true
    },
    email :String,
    password :String,
    cart : {
    type: Array,
    default:[]
    },
    orders: {
    type: Array,
    default:[]
    },
    contact : Number,
    picture : String
})

module.exports =  mongoose.model("user", userSchema);