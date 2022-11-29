<?php

    function getConnection(){
        $SERVER = "localhost";
        $USERNAME = "root";
        $PASSAWORD = "";
        $DBNAME = "programacao_web";
        $PORT = 3306;

        $conn = mysqli_connect($SERVER, $USERNAME, $PASSAWORD, $DBNAME, $PORT);
        /*if (mysqli_connect_errno()){
            echo "Erro ao tentar conexão com o banco de dados." . mysqli_connect_error($conn);
            exit();
        }*/

        echo "Conectado com Sucesso";

        return $conn;

    }

    getConnection();


?>