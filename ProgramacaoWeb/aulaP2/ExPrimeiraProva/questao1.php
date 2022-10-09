<?php

$precoCarro = (float) $_GET["precoc"];
$p0 = 0.8*$precoCarro;
$p1 = (1.03*$precoCarro)/6;
$p2 = (1.06*$precoCarro)/12;
$p3 = (1.09*$precoCarro)/18;
$p4 = (1.12*$precoCarro)/24;
$p5 = (1.15*$precoCarro)/30;
$p6 = (1.18*$precoCarro)/36;
$p7 = (1.21*$precoCarro)/42;
$p8 = (1.24*$precoCarro)/48;
$p9 = (1.27*$precoCarro)/54;
$p10 = (1.30*$precoCarro)/60;
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body align ="center">
<h3> Preço final à vista: R$ <?php echo number_format($p0, 2) ?></h3>
<table align ="center" border="1">
<tr>
<th>Quantidade de parcelas</th>
<th>Valor da parcela</th>
</tr>
<tr>
<td>6</td>
<td>R$<?php echo number_format($p1, 2);?></td>
</tr>
<tr>
<td>12</td>
<td>R$<?php echo number_format($p2, 2) ?></td>
</tr>
<tr>
<td>18</td>
<td>R$<?php echo number_format($p3, 2) ?></td>
</tr>
<tr>
<td>24</td>
<td>R$<?php echo number_format($p4, 2) ?></td>
</tr>
<tr>
<td>30</td>
<td>R$<?php echo number_format($p5, 2) ?></td>
</tr>
<tr>
<td>36</td>
<td>R$<?php echo number_format($p6, 2) ?></td>
</tr>
<tr>
<td>42</td>
<td>R$<?php echo number_format($p7, 2)?></td>
</tr>
<tr>
<td>48</td>
<td>R$<?php echo number_format($p8, 2) ?></td>
</tr>
<tr>
<td>54</td>
<td>R$<?php echo number_format($p9, 2) ?></td>
</tr>
<tr>
<td>60</td>
<td>R$<?php echo number_format($p10, 2) ?></td>
</tr>
</table>
</body>
</html>