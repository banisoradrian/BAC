<html>
<head>
    <title>Informatii Atestat</title>
    <link rel="stylesheet" href="ImportantaSanatatii.css">
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
    <div class="container">
        
            <h1>
                Despre Lucrarea de atestat
            </h1>
        
        <article class="soup">
            <img class="soup-image" src="PozaDespre.jpg">
            <p>
                Am ales aceasta tema deoarece imi place sa duc un stil de viata sanatos chiar daca mai fac si alegeri gresite privind acest lucru , totusi nu las ca unele decizi gresite sa - mi strice tot progresul realizat.​
                Mereu am fost adeptul unui stil de viata sanatos si activ prin antrenamente fizice.De asemenea , imi place sa ajut pe oricine care vrea sa - si schimbe stilul de viata , chiar daca multi spun ca e greu sa fii activ fizic si sa mananci sanatos acest lucru este o scuza venita din partea oamenilor lenesi.
                
            </p>
        </article>
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