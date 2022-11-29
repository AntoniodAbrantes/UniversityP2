<?php

    include_once ("operacoes.php");

    //aqui estamos salvando os dados das variaveis contidas em "operações.php"
    //podemos trocar cada valor de save() por $_POST coom a variavel que desejamos pegar num formulario
    save('B', 600, 500, 5, 25);
    print_r(findAll());


?>