<?php

$notas = [10, 5, 6.5, 8.5, 9, 5.5, 4.5, 8, 7.5];
$soma_notas = array_sum($notas);
$quant_notas = count($notas);
$media_notas = $soma_notas / $quant_notas;
$maior_sete = 0;

for($i = 0; $i < count($notas); $i++){
    if($notas[$i] > 7){
        $maior_sete += 1;
    }
}
echo "A soma das notas eh: $soma_notas <br>"; 
echo "A media das notas eh: $media_notas <br>";
echo "A quantidade de notas maior do que 7 eh: $maior_sete <br><br>";


?>