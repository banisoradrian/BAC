<html>
<head>
    <title>Informatii Atestat</title>
    <link rel="stylesheet" href="Informatii.css">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="utf-8">
    <link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
      <title>Informatii</title>
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
    <h1>Tehnologii folosite:</h1>
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
    
   <div class ="container">
        <div class ="card">
            <div class ="imgBx">
                <img src ="htmcsslimagine.png">
            </div>
            <div class ="content">
                <h2>HTML & CSS</h2>
                <p>Utilizand HTML si CSS am realizat structura site - ului , prin HTML am realiat ,,scheletul site - ului , iar prin css forma si caracteristicile scheletului(culoare , inaltime , forma etc).</p>
            </div>
        </div>

        <div class ="card">
            <div class ="imgBx">
                <img src ="javascriptimagine.jpg">
            </div>
            <div class ="content">
                <h2>Javascript</h2>
                <p>Cu ajutorul Javascriptului am realizat efectele / miscarea ,,scheletului".</p>
            </div>
        </div>

        <div class ="card">
            <div class ="imgBx">
                <img src ="phpimagine.png">
            </div>
            <div class ="content">
                <h2>PHP</h2>
                <p>In acest site PHP - ul este piesa de rezistenta , deoarece acesta coordoneaza majoritatea actiunilor din proiec prin logare la o baza de date.</p>
            </div>
        </div>
        
        <div class ="card">
            <div class ="imgBx">
                <img src ="Bibliografie.jpg">
            </div>
            <div class ="content">
                <h2>Bibliografie</h2>
                <p>
                    <p><a href="https://ro.wikipedia.org/wiki/Pagina_principal%C4%83"</a> Wikipedia</p>
                    <p><a href="https://fitness-nation.ro/?gclid=Cj0KCQjwxtSSBhDYARIsAEn0thQ4e2l7-k9lNP-wS4NfhtlY8MPcMPqdI7Dym8AI7x8JyjUnOvzcUR4aAs1PEALw_wcB"</a>Fitness Nation Romania</p>
                    <p><a href="https://images.google.com/">Google Images</a></p>
                </p>
            </div>
        </div>

   </div>
   

    <script>
const toggleButton = document.querySelector('.toggle-button')
const navbarLinks = document.querySelector('.navbar-links')
toggleButton.addEventListener('click', () => {
navbarLinks.classList.toggle('active')
})
</script>
</body>
</html>