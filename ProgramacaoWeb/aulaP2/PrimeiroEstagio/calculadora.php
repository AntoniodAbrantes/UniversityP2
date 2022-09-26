<?php

    require "funcaoCalculadora.php";

    $n1 = (float) $_POST["n1"];
    $n2 = (float) $_POST["n2"];
    $operacao = $_POST["operacao"];

    $resultado = 0;

    switch($operacao){
        case "somar":
            $resultado = somar($n1, $n2);
            
            break;
        case "subtrair":
            $resultado = subtrair($n1, $n2);
          
            break;
        case "multiplicar":
            $resultado = multiplicar($n1, $n2);
         
            break;
        case "dividir":
            $resultado = dividir($n1, $n2);
            if(!$resultado){
                echo "Não pode dividir por zero";
            }
            break;
    }

    echo "Primeiro Número: $n1 <br>";
    echo "Segundo Número: $n2 <br>";
    echo "Operação: $operacao <br>";
    echo "Resultado: $resultado <br>";
?>