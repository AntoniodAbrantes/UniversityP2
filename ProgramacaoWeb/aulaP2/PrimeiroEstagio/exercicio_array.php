<?php

    $precos = [10.50,50,35,58,65,99.9,105,305,2.50];

    $total_soma_precos = 0;
    $maior_preco = -PHP_FLOAT_MIN;
    $menor_preco = -PHP_FLOAT_MAX;



    for($i = 0; $i < count($precos); $i++){

        if($i == 0){
            $maior_preco = $preco[$i];
        }
        
        $total_soma_precos += $precos[$i];

        if ($precos[$i] > $maior_preco){

            $maior_preco = $precos[$i];
        } 
    }


    
    $media = $total_soma_precos/count($precos);

    echo "Maior Preço: $maior_preço <br>";
    echo "Total soma preços: $total_soma_precos <br>";
    echo "Média de preços: $media <br>";
    echo "Menor Preço: $menor_preco <br>";
?>