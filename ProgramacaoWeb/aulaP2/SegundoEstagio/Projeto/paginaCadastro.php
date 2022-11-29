<?php

    $nome = $_POST["nome"];
    $idade = $_POST["idade"];
    $peso = $_POST["peso"];
    $altura = $_POST["altura"];

    $imc = ($peso)/($altura*$altura);
    $imc = number_format(($imc),2,",",".");

    $fluxo = fopen("pacientes.txt", "r");

    fwrite($fluxo, $nome);
    fwrite($fluxo, $idade);
    fwrite($fluxo, $peso);
    fwrite($fluxo, $altura);
  

?>