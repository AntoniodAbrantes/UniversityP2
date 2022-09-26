<?php

$salario = (float) $_GET ["Salario"];
$comissao = (float) $_GET ["ValorVendas"];
$salarioComVenda = $salario + (0.04*$comissao);

echo "Salário Fixo: $salario <br> comissao: $comissao <br> valor final: $salarioComVenda";




?>