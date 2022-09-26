<?php
$livros = [
    "Introdução a Linguagem C" => ["qtdePaginas"=>350, "preco"=>150],
    "Introdução a Linguagem Python" => ["qtdePaginas"=>300, "preco"=>99.50],
    "Entendendo PHP" => ["qtdePaginas"=>290, "preco"=>105.90],
    "Introdução ao SQL" => ["qtdePaginas"=>150, "preco"=>85.90],
];

$soma_valor = 0;
$maior_preco = 0;
$maiorPrecostring = "0";

foreach($livros as $nomes=>$informacoes){
    
    $soma_valor += $livros[$nomes]["preco"];
    if($livros[$nomes]["preco"] > $maior_preco){
        $maior_preco = $livros[$nomes]["preco"];
        $maiorPrecostring = $nomes;
    }
}
    



echo "Soma dos valores dos livros eh $soma_valor <br>";
echo "O livro com maior valor eh $maiorPrecostring, com o valor de $maior_preco. <br><br>";


?>