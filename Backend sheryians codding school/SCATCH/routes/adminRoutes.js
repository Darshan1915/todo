const express = require('express');
const router = express.Router();

const adminModel = require("../models/admin-model");

// console.log(process.env.NODE_ENV);
if(process.env.NODE_ENV==="developement"){//Now its working , but if change the nevironment from developement to production then config is unable to find value and its show error
    router.post("/create",async function(req, res){

        let {fullname, email, password}= req.body;

            // let createdAdmin = await adminModel.create({
            //     fullname,
            //     email,
            //     password,
            // })
            // res.status(201).send(createdAdmin);

         let admin = await adminModel.find();
         if(admin.length > 0){
            return res
            .status(503)
            .send("You don't have permission to create a new owner");
         }
         else{
            res.send("Yes, you can create owner")
            let createdAdmin = await adminModel.create({
                fullname,
                email,
                password,
            })

            res.status(201).send(createdAdmin);
         }
    })
}
 

router.get("/", function(req, res){
    res.send("heyy")
})


 

module.exports = router;