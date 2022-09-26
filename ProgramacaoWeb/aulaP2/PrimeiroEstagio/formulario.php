<?php

    $nome = $_POST["nome"];
    $matricula = (int) $_POST["mat"];
    $primeiraNota = (float) $_POST["nota1"];
    $segundaNota = (float) $_POST["nota2"];

    $media = ($primeiraNota + $segundaNota)/2;
    
    if($media >= 7){
        echo "Aprovado com média: $media<br>";
    }else if($media < 7){
        echo "Recuperação com média: $media<br>";
    }if($media < 4){
        echo "<br>Reprovado!</br>";
    }
    
    echo "<b>Nome</b>: $nome <br> <b>Matricula</b>: $matricula <br><b>Notas</b>: $primeiraNota, $segundaNota<br><b>Média</b>: $media";
    
?>   