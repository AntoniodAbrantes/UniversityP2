<?php
$turma = [
    "A" => [10,8,6],
    "B" => [5,3,8],
    "C" => [10,10,10],
    "D" => [8,6,3],
    "E" => [9,9,9],
    "F" => [2,3,5]
    ];

    $contAluno = 0;
    $mediaTurma = 0;
    $somaTurma = 0;
    $countPassou = 0; 
    $nomeCaboclo = "";
    $maiorMedia = 0;


    foreach($turma as $nome=>$notas){
        $contAluno +=1;
        $somaAluno = 0;
        $countA = 0;
        foreach($notas as $array=>$indice){
            $somaAluno += $indice; 
            $countA += 1;
        }
        $mediaA = $somaAluno / $countA;
        $somaTurma += $mediaA;
        if($mediaA >= 6){
            $countPassou += 1;
        }
        if($mediaA > $maiorMedia){
            $maiorMedia = $mediaA;
            $nomeCaboclo = $nome;
        }
        echo ("A soma do Aluno $nome é $somaAluno e a media é:$mediaA<br>");


    }
    $mediaTurma = $somaTurma / $contAluno;
    echo ("A media de Toda a Turma é : $mediaTurma<br>");
    echo ("A quantidade de Alunos que Passou por media é: $countPassou<br> ");
    echo ("A maior media foi do Aluno $nomeCaboclo, e a media foi: $maiorMedia.");
   

        

?>
