<?php

    $codigo = (float)$_POST["codigo"];
    $quantidade = (float)$_POST["quantidade"];

    $precoUnd = 0.00;
    $valorDesconto = 0.00;
    $totalNota = 0.00;
    $total = 0.00;

    if($codigo>=1 and $codigo<=10){
        $precoUnd = 10.00;
        $totalNota = $precoUnd * $quantidade;
            if($totalNota<=250){
                $valorDesconto = $totalNota*0.05;
                $total = $totalNota-$valorDesconto;
            }else if($totalNota>250 and $totalNota<500){
                $valorDesconto = $totalNota*0.10;
                $total = $totalNota-$valorDesconto;
            }else{
                $valorDesconto = $totalNota*0.15;
                $total = $totalNota-$valorDesconto;
            }
    }else if($codigo>=11 and $codigo<=20){
        $precoUnd = 15.00;
        $totalNota = $precoUnd * $quantidade;
            if($totalNota<=250){
                $valorDesconto = $totalNota*0.05;
                $total = $totalNota-$valorDesconto;
            }else if($totalNota>250 and $totalNota<500){
                $valorDesconto = $totalNota*0.10;
                $total = $totalNota-$valorDesconto;
            }else{
                $valorDesconto = $totalNota*0.15;
                $total = $totalNota-$valorDesconto;
            }
    }else if($codigo>=21 and $codigo<=30){
        $precoUnd = 20.00;
        $totalNota = $precoUnd * $quantidade;
            if($totalNota<=250){
                $valorDesconto = $totalNota*0.05;
                $total = $totalNota-$valorDesconto;
            }else if($totalNota>250 and $totalNota<500){
                $valorDesconto = $totalNota*0.10;
                $total = $totalNota-$valorDesconto;
            }else{
                $valorDesconto = $totalNota*0.15;
                $total = $totalNota-$valorDesconto;
            }
    }else if($codigo>=31 and $codigo<=40){
        $precoUnd = 30.00;
        $totalNota = $precoUnd * $quantidade;
            if($totalNota<=250){
                $valorDesconto = $totalNota*0.05;
                $total = $totalNota-$valorDesconto;
            }else if($totalNota>250 and $totalNota<500){
                $valorDesconto = $totalNota*0.10;
                $total = $totalNota-$valorDesconto;
            }else{
                $valorDesconto = $totalNota*0.15;
                $total = $totalNota-$valorDesconto;
            }
    }else{
        echo "Informe um código válido (entre 1 e 40).<br>";
    }

    //Formatando
    $precoUnd = number_format($precoUnd,2,",",".");
    $totalNota = number_format($totalNota,2,",",".");
    $total = number_format($total,2,",",".");
    $valorDesconto = number_format($valorDesconto,2,",",".");


    //Criando tabela
    echo "<table border='1'>
    <tr>
        <td colspan='2' align='center' bgcolor=grey>Dados da compra</td>
    </tr>
    <tr>
        <td align='center'>Preço Unitário</td>
        <td align='center'>R$ $precoUnd<br></td>
    </tr>
    <tr>
        <td align='center'>Preço Total</td>
        <td align='center'>R$ $totalNota</td>
    </tr>
    <tr>
        <td align='center'>Desconto</td>
        <td align='center'>R$ $valorDesconto</td>
    </tr>
    <tr>
        <td align='center'>Preço Final</td>
        <td align='center'>R$ $total</td>
    </tr>
</table>";

?>