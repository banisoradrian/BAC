<html>
<head>
    <title>Log in </title>
    <link rel="stylesheet" href="InregistrareAtestat.css">
    <link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet" integrity="sha384-wvfXpqpZZVQGK6TAh5PVlGOfQNHSoD2xbE+QkPxCAFlNEevoEH3Sl0sibVcOQVnN" crossorigin="anonymous">
    <style>
    div 
    { 
        font-size: 20px;
        color:lime;
    }
</style>
</head>
<body>
<?php
    require "LogareAjutor.php";
    if (isset($failed)) 
        echo "<div>Invalid user or password.</div>";
?>

    <div class="logo">
        <img  src="https://images.hindustantimes.com/img/2022/01/27/1600x900/healthy-gdae63cff2_1280_1643268445755_1643268464696.png" alt="damwedalb " >
    </div>
        <div class="login-box">
<h1> Sanatatea </h1>
<form id="login-form" method="post" target="_self">
    <div class="textbox">
        <i class="fa fa-user fa fa-lg" aria-hidden="true"></i>
    <input type="text" placeholder="Nume" name="user" required/>
    </div>

    <div class="textbox">
    <i class="fa fa-lock" aria-hidden="true"></i>
        <input type="Password" placeholder="Parola" name="password" required/>
    </div>
    <input class="btn" type="submit" name="" value="Sign In">
</form>



<p ><a href="#" onClick="alert('Alexandru Ion')">Click pentru a se afisa username - ul</a></p>
<p ><a href="#" onClick="alert('Info2022*')">Click pentru a se afisa parola</a></p>

    

</body>
</html>