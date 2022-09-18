<html>
    <head>
      <link rel="stylesheet" href="ContactBanisor.css">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="utf-8">
    <link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet">
    <script src= "https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
      <title>Contact Banisor</title>
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
		<div class="contact-box">
			<div class="left"></div>
			<div class="right">
				<h2>Contact & Info</h2>
            <li>Nume : Bănișor Adrian - Ștefan ;</li>
            <li>Profesor coordonator : Cosma Ionel ;</li>
            <li>Liceu : Colegiu Tehnic ,,Gheorghe Asachi" - Onesti ;</li>
            <li>Clasa : a XII - a A<sub>1</sub> ;</li>
            <li>Telefon : 0743311651 ;</li>
            <li>Email : banisor.adrian@yahoo.com ;</li>
            <li>Gmail : banisoradrinanstefan@gasachi.ro</li>
            <button class="btn" onclick="swal('Multumesc pentru atentia acordata ! <3 ')";>Apasa-ma te rog &#128527;</button>
			</div>
		</div>
	</div>

        <div class="contact">
              <li><a href="https://www.facebook.com/adrian.banisor/"><i class="fa fa-facebook fa-3x" aria-hidden="true"></i></a></li>
              <li><a href="https://www.instagram.com/adrian_banisor/"><i class="fa fa-instagram fa-3x" aria-hidden="true"></i></a></li>
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