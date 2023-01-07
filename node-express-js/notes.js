//  setup all process
/*  
1. first install node on the node oficial website 

2. second check node install or not
    check : node --version

3. after initialize node with npm server
    code : npm init

4. package install simple command 
    npm install packages_name --save

5. mostly use this code to install
    npm install packages_name

    run code on node js follow now this things 
    : node file_name

6. use express then you will follow this things and install express js packages 

1. npm install express 
first create a run npm 
const express = require("express");
const app = express();

get method to connect server 
app.get("/", function(request, response) {
    response.send("hello world");
}); 

after form filling the use where go this is decide
app.post("/", function(req, res) {
    res.send("this is your data!");
});

add html file 
app.get("/", function(req, res) {
    res.sendFile(__dirname + "/htmlFileName.html");
});

app.listen(3000, function() {
    3000 is a local host server num it use to connect server
    3000 means = localhost:3000/ ["/" : is a home page link]
    console.log("hello world");
});


// install auto reload system

code :- 
    npm install -g nodemon 
    compile : nodemon filename.js

install body-parser package to add and get element for the form and post method exicute 

npm install body-parser
var bodyParser = require("body-parser");
Ex :-

const express = require("express");
const app = express();
const bodyParser = require("body-parser");
app.use(bodyParser.urlencoded({extended : true}));

app.get("/", (req, res)=>{
    res.sendFile(__dirname + "html file name and currect path");
});

app.post("/", (req, res)=> {
    there are use case of body-parser 
    var num1 = Number(req.body.num1);
    var num2 = Number(req.body.num2);
    var sum = num1 + num2;
    res.send("sum is  " + sum);
});

app.listen(3000, (req, res)=> {
    console.log("hello");
});

 */

// use ejs

/* 

set file location : this is a importent
app.set("view engine", "ejs");

every time ejs use app.render funtion 
app.get("/", (req, res) {
    var value = 10;
    res.render("filename", {variable_name : value});
})

access this value in html
<p> <%= variable_name %></p>
 
*/
//File System
var fs = require("fs");

// 1. readFile
// 2. writeFile
// 3. appendFile
// 4. open
// 5. rename
// 6. unlink

// how do use this things :-

fs.open("file-name", "W", function (err) {
  if (err) throw err;
  console.log("file created!");
}); // create file 

fs.readFile("file-name", function (err, data) {
  res.writeHead(200, { "Content-type": "text/html" });
  res.write(data);
  res.send();
}); // read file 

fs.writeFile("file-name", "text", callback); // write file 
fs.unlink("file-name", callback) // delete file 
fs.rename("file-name", "rename-name", callback) // rename file 
fs.appendFile("file-name", "extra text", callback) // add extra text