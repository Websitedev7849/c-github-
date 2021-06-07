const http = require('http');
const fs = require('fs');
const empDetails = [
    {
        name: "siddharth pawar",
        dob: "06/08/2001",
        jd: "05/05/2019",
        salary: 300000
    },
    {
        name: "pranjal pawar",
        dob: "25/12/1997",
        jd: "02/04/2018",
        salary: 500000
    }
];
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
            let data = '';
            console.log(`request was made to ${req.url}`);
            req.on('data', chunk => {
                data += chunk;
            });
            req.on('end', () => {
                let empToCompare = JSON.parse(data);
                let employeeFound = empDetails.find((emp)=>{
                    return emp.name === empToCompare.name &&
                     emp.dob === empToCompare.dob &&
                     emp.jd === empToCompare.jd &&
                     emp.salary === empToCompare.salary;
                });
                res.setHeader('Content-Type', 'text/json');
                if (employeeFound) {
                    res.write('{"empFound": true}');
                    res.end();
                    return;
                }
                res.write('{"empFound": false}')
                res.end();
            });
            break;
    }
});

server.listen(PORT, ()=>{
    console.log(`Listening on port ${PORT}`);
});
