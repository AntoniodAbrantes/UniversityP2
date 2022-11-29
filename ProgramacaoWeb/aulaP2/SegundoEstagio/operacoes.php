<?php

    include_once "conexao.php";

    function save($titulo, $nome, $qtde_paginas, $preco, $qtde){

        //abrir a conexão
        $conexao = getConnection();
        //realizar a query no banco de dados
        mysqli_query($conexao, "INSERT INTO tb_livros (titulo, qtde_paginas, preco, qtde) VALUES('$titulo', $qtde_paginas, $preco, $qtde)");

        mysqli_close($conexao);

        return true;

    }

    function findAll(){

        $conexao = getConnection();

        $rows = mysqli_query($conexao, "SELECT * FROM tb_livros WHERE id=1");

        /*print_r($rows);

        echo"<br>";

        mysqli_fetch_row($rows);

        echo"<br>";

        mysqli_fetch_assoc($rows);*/

       $livro = [];
       $livros = [];
       while($row = mysqli_fetch_assoc($rows)){
            $livro["id"] = $row["id"];
            $livro["qtde_paginas"] = $row["qtde_paginas"];
            $livro["titulo"] = $row["titulo"];
            $livro["preco"] = $row["preco"];
            $livro["qtde"] = $row["qtde"];
            array_push($livros, $livro);
       }

       return $livros;
    }

?>