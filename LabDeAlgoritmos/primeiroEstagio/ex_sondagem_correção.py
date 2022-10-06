qtdPessoas = 0
somaSalarios = 0.0
somaFilhos = 0
qtdPessoasBaixoSalario = 0
maiorSalario = 0.0
menorSalario = 0.0
nomeMaiorSalario = ""
nomeMenorSalario = ""

while(True): #loop infinito
    nome = input("Digite o nome: ")
    salario = float(input("Digite o salario: "))
    if(salario < 0):
        print("Salari NEGATIVO não existe!XAU!")
        break
    qtdFilhos = int(input("Digite a quantidade de filhos: "))
    if(qtdPessoas == 0):
        maiorSalario = salario
        menorSalario = salario
        nomeMaiorSalario = nome
        nomeMenorSalario = nome
    qtdPessoas += 1
    somaSalarios += salario
    somaFilhos += qtdFilhos

    if (salario <= 1500):
        qtdPessoasBaixoSalario += 1

    if(salario > maiorSalario):
        maiorSalario = salario
        nomeMaiorSalario = nome
    if(salario < menorSalario):
        menorSalario = salario
        nomeMenorSalario = nome


mediaSalarios = somaSalarios / qtdPessoas
print("A média dos salarios e: ", mediaSalarios)
mediaFilhos = somaFilhos / qtdPessoas
print("A média de filhos é: ", mediaFilhos)
porcentagemBaixoSalario = (qtdPessoasBaixoSalario * 100) / qtdPessoas
print("A porcentagem é: ", porcentagemBaixoSalario)
print("Mais rico: ", nomeMaiorSalario, " e mais pobre: ", nomeMenorSalario)

