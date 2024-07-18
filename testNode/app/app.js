const  express = require("express")
 const startServer = () =>{
    try{
        const app = express();

        const {PORT} = process.env ;



        app.listen(PORT||3000,()=>{
            console.log(`SERVER ISUP AND RUNNING ON ${PORT}`)
        })
        
        app.post('/create-restaurants',async (req,res,next)=>{
            const restaurants = intesjtkdg.req.body(s;
            res.send("inside get request")
        })
        app.get('/restaurants',async (req,res,next)=>{
            const restaurants = select restaurants from restaurants;
            res.send("inside get request")
        })



    }catch(e){
        console.log(e);
        process.exit(1);
    }
}

module.exports = startServer