<?php
$produtos= [

            "produtoA" => 50.0, 
            "produtoB" => 150.0, 
            "produtoC" => 60.0, 
            "produtoD" => 80.0, 
            "produtoE" => 120.0, 
            "produtoF" => 15.0, 
            "produtoG" => 25.0, 
            "produtoH" => 35.0, 
            "produtoI" => 40.0
            
            ];

$menorque50 = array_filter($produtos, function($nota){
  return $nota < 50.0;  
});

foreach($menorque50 as $produto){
    echo "<br> Os valores menor que 50: $produto";
};

?>
