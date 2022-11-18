<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Listar Produtos</title>
</head>
<body>
    <h1>Listar Produtos</h1>
    <table width="100%" border="1">
        <tr>
            <th>Nome</th>
            <th>Quantidade</th>
            <th>Preço</th>
            <th>Total</th>
        </tr>
        <?php
            $fluxo = fopen("produtos.txt", "r");
            while(!feof($fluxo)){
                $nome = fgets($fluxo);
                $qtde = (int) fgets($fluxo);
                $preco = (float) fgets($fluxo);
                $total = $qtde * $preco;
            ?>
            <tr>
                <td><?= $nome ?></td>
                <td><?= $preco ?></td>
                <td><?= $qtde ?></td>
                <td><?= $total ?></td>
            </tr>
        <?php } 
        fclose($fluxo)?>
    </table>
</body>
</html>