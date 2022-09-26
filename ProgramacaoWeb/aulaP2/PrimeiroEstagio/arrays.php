<?php

    $produtos = [
    "A" => 10.50, 
    "B" => 50, 
    "C" => 65, 
    "D" => 19.90, 
    "E" => 20, 
    "F" => 35, 
    "G" => 65, 
    "H" => 105, 
    "I" => 97
    ];
     
    foreach($produtos as $nome=>$preco){
        echo "Nome: $nome, preço: $preco <br> ";
    }


?>