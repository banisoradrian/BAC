<?php
session_start();

if (isset($_POST["user"]) && !isset($_SESSION["user"])) 
{
   $users = 
          [
            "asd" => "pass",
            "Alexandru Ion" => "Info2022*",
            "Mihai12@" => "654321",
            "BanisorAdrian24" => "parolaq"
          ];
  if (isset($users[$_POST["user"]])) 
  {
    if ($users[$_POST["user"]] == $_POST["password"]) {
      $_SESSION["user"] = $_POST["user"];
    }
  }
 
  if (!isset($_SESSION["user"])) { $failed = true; }
}
 

if (isset($_SESSION["user"])) {
  header("Location: AtestatBanisor.php");
  exit();
}