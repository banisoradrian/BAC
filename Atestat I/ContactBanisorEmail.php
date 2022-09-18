<?php 

    use PHPMailer\PHPMailer\PHPMailer;
    require_once 'phpmailer/Exception.php';
    require_once 'phpmailer/PHPMailer.php';
    require_once 'phpmailer/SMTP.php';
    $mail = new PHPMailer(true);
    if(isset($_POST['submit'])) {
        $name = $_POST['name'];
        $email = $_POST['email'];
        $message = $_POST[''];
        try {
            $mail -> isSMTP();
            $mail -> Host = 'smtp.gmail.com';
            $mail -> SMTPAuth = true;
            $mail -> Username = 'email@gmail.com'; //adresa de email unde doriti sa folositi SMTP server
            $mail -> Password = 'gmailpass';// parola gmail
            $mail ->SMTPSecure = PHPMailer :: ENCRYPTION_STARTTLS;
            $mail -> Port ='587';

            $mail ->setFrom('email@gmail.com');
            $mail ->addAdress('adresa'); // adresa de email unde dorim sa primim email

            $mail -> isHTML(true);
            $mail -> Subject = 'Message Received(Contact page)';
            $mail -> Body = '<he>Name : $name <br> Email : $email <br> Message : $message</he>';

            $mail -> send();
            $alert = '<div class ="alert-succes">
                     <span>Message Sent! Thank you for contacting us.</span>
                     </div>';

        }
    
        catch(Exception $e){
        $alert = '<div class ="alert-error>
                 <span>'.$e -> getMessage().'</span>
                 </div>';
    }
}
?>