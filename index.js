const http = require('http');
const fs = require('fs');
const PORT = 3300;
const server = http.createServer((req,res)=>{
    switch (req.url) {
        case '/':
            console.log(`request was made to ${req.url}`);
            fs.readFile("./public/index.html",(err,data)=>{
                if (err) {
                    res.write("ERROR 404: FILE NOT FOUND");
                    res.end();
                    return;
                }
                res.write(data);
                res.end();
            })
            break;
        case '/get-info':
            console.log("request was made to /get-info")
            console.log(req.body);
            res.write("request received");
            break;
    }
});

server.listen(PORT, ()=>{
    console.log(`Listening on port ${PORT}`);
});