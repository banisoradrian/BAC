<?php
session_start();
if (isset($_POST["logout"]))
{ 
   unset($_SESSION["user"]); 
}
if (!isset($_SESSION["user"]))
{
    header("Location: InregistrareAtestat.php");
    exit();
}
?>
<html>
    <head>
      <link rel="stylesheet" href="AtestatBanisor.css">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="utf-8">
    <link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
      <title>Atestat Banisor</title>
      <script src="https://code.jquery.com/jquery-3.4.1.js"></script>
  <script type="text/javascript">
 
    $(window).on('scroll',function(){
    if($(window).scrollTop()){
        $('nav').addClass('black');
    }
    else
    {
        $('nav').removeClass('black'); 
    }
    });
     </script>
    </head>
       <body>
      
    <section>
     <header>
      <nav class="navbar">
          <div class="LOGO">
            <img src ="LogoInregistrare.png" style="filter: invert(62%) sepia(75%) saturate(5062%) hue-rotate(85deg) brightness(130%) contrast(117%);">
          </div>
          <a href="#" class="toggle-button">
            <span class="bar"></span>
            <span class="bar"></span>
            <span class="bar"></span>
          </a>
         <div class="navbar-links">
            <ul>
            <li><a href="Despre.php">Despre</a></li>       
                        <li><a href="AtestatBanisor.php">Acasa</a></li>    
                        <li><a href="Importantasanatatii.php">Importanta sanatatii</a></li>    
                        <li><a href="Informatii.php">Informatii</a></li>    
                        <li><a href="ContactBanisor.php">Contact</a></li>
            </ul>
         </div>
      </nav>
    </header>
    <div class="content">
        <div class="content-text">
        <h2>Când inima este în largul ei, corpul este sănătos</h2>
           <p>Adrian Banisor</p> 
           <form method="post">
  <input type="hidden" name="logout" value="1"/>
  <input class="btn" type="submit"  value="Logout">
</form>
       </div>
       </div>
          <div class="contact">
              <li><a href="https://www.facebook.com/adrian.banisor/"><i class="fa fa-facebook fa-3x" aria-hidden="true"></i></a></li>
              <li><a href="https://www.instagram.com/adrian_banisor/"><i class="fa fa-instagram fa-3x" aria-hidden="true"></i></a></li>
          </div>
</section>
<script>
const toggleButton = document.querySelector('.toggle-button')
const navbarLinks = document.querySelector('.navbar-links')
toggleButton.addEventListener('click', () => {
navbarLinks.classList.toggle('active')
})
</script>

    </body>
</html>