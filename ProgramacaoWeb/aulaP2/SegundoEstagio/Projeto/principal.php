<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Página Principal</title>
</head>
<body>
    <!--Importando arquivo html da pasta html-->
    <?php include_once "./html/header.html"?>
    <main>
    <br>
    <form action="processar.php" method="post">
        <label for="nome">Nome: </label>
        <input type="text" name="nome" id="nome"> <br><br>
        <label for="email">Email: </label>
        <input type="email" name="email" id="email"> <br><br>
        <label for="idade">Idade: </label>
        <input type="number" name="idade" id="idade"> <br><br>
        <label for="peso">Peso: </label>
        <input type="number" name="peso" id="peso" step="0.01"> <br><br>
        <button>Enviar</button>
    </form>
    </main>
    <?php include_once "./html/footer.html" ?>
</body>
</html>