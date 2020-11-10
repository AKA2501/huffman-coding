const express = require('express');
const port = 8000;
const path = require('path');

const app = express();

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'public'));

app.get('/', function (req, res) {
    return res.render('index');
});

app.listen(port, function (err) {
    if (err) {
        console.log('Error: ', error);
        return;
    }
    console.log('Server up and running on port: ', port);
});