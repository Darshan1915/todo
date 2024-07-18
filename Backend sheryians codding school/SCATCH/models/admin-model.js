const mongoose = require('mongoose');

// mongoose.connect("mongodb://127.0.0.1:27017/SCATCH")
//we connects mongose in usermodel and admin model but not in the productmodel . why ??? => bcz when u create model , schema their job is create to create this schema and model, not a connect to dbs okk.
//but this is not good way lets see config folder:
  
const adminSchema = mongoose.Schema({
    fullname :  {
        type: String,
        minLenth: 3,
        trim:true
    },
    email :String,
    password :String,
    products: {
    type: Array,
    default:[]
    },
    picture : String,
    gstin: Number
})


module.exports =  mongoose.model("user", adminSchema);