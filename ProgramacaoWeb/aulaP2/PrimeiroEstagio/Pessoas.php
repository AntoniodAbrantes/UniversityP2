<?php
$pessoas = [
    "João" => 35,
    "Maria" => 40,
    "Pedro" => 88,
    "José" => 55];
    $soma_idades = 0;
    $cont_idades = 0;
    

    foreach($pessoas as $nomes=>$idades){
        $soma_idades += $idades;
        $cont_idades += 1;
        echo "Nomes: $nomes <br>";
        
            
    }
    $media_idades = $soma_idades / $cont_idades;
        echo "Soma idades eh $soma_idades <br>";
        echo "A media das idades eh $media_idades <br><br>";
    

?>