

salarios = []
filhos = []

maior_salario = 0
salario = 0
salInferior1500 = 0

menor_salario = 999999

pessoa_maior_salario = 'a'
pessoa_menor_salario = 'b'



while salario >= 0:    

    nome = input('Qual o seu nome? \n')   
    salario = int(input('Qual o seu salário?\n '))
    
    if salario < 0:
        break
    filhos.append(int(input('Quantos filhos você tem?\n')))
    

    salarios.append(salario)

    if salario > maior_salario:
        maior_salario = salario
        pessoa_maior_salario = nome

    if salario < menor_salario:
        menor_salario = salario
        pessoa_menor_salario = nome

    if salario <= 1500:
        salInferior1500 += 1

    

mediaSalarios = sum(salarios)/len(salarios)
mediaFilhos = sum(filhos)/len(filhos)

print('A) A média do salário da população é de: ', mediaSalarios)
print('\nB) A média do número de filhos é de: ', mediaFilhos )
print('\nC) O nome da pessoa com maior salário é ', pessoa_maior_salario, 'e o com menor salário é ',pessoa_menor_salario,'.')
print('\nD) O percentual de pessoas com salário até R$1500,00 é de: ', salInferior1500/len(salarios))