const express = require('express');
const router = express.Router();
const userModel = require('../models/user-model');



router.get("/", function(req, res){
    res.send("heyy")
})

// router.post("/register", async function(req, res){
//         try{
//             let {email, password, fullname} = req.body;
//             let createduser = await userModel.findOne(email);
//             if(createduser){
//                 return res
//                 .status(340)
//                 .send("user is already registered")
//                 // .redirect
//             }
//             else{
//                 const createduser = await userModel.create({
//                     fullname,
//                     password: hash,
//                     email
//                 })
//                 // bcrypt.genSalt(10,(err,salt)=>{
//                 //      bcrypt.hash(password, salt, async (err, hash)=>{
//                 //         const createduser = await userModel.create({
//                 //             fullname,
//                 //             password: hash,
//                 //             email
//                 //         })

//                 //     })
//                 // })    
//             }
//             res.send(createduser);
//         }   
//         catch(err){
//             console.log(err.message);
//         }       
//     })          

module.exports = router;