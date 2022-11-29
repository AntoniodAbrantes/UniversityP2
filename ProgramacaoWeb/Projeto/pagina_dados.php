<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <?php

    $nome = $_POST["nome"];
    $idade = $_POST["idade"];
    $peso = $_POST["peso"];
    $altura = $_POST["altura"];
    $email = $_POST["email"];

    if(!filter_var($idade, FILTER_VALIDATE_INT)){
        header("location: error.php?error= informe uma idade válida!");
    }
    if(!filter_var($email, FILTER_VALIDATE_EMAIL)){
        header("location: error.php?error= informe um e-mail válido!");
    }
    if(!filter_var($peso, FILTER_VALIDATE_FLOAT)){
        header("location: error.php?error= informe um peso válido!");
    }
    ?>
    <main>
    <h2>Dados Digitados</h2>
        <p><strong>Nome: <strong> <?= $nome ?></p>
        <p><strong>Email: <strong> <?= $email ?></p>
        <p><strong>Idade: <strong> <?= $idade ?></p>
        <p><strong>Peso: <strong> <?= $peso ?></p>
        <p><strong>Altura:</strong> <?= $altura?></p>
    </main>

</body>
</html>