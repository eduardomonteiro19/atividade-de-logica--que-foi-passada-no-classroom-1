Algoritmo "CÁLCULO DE COMPRA QUESTÃO 7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Carlos Anderson 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a) Eduardo Monteiro
// Data atual  : 05/09/2023
Var
// Seção de Declarações das variáveis 
nome: caractere

quantidade: inteiro
precoUnitario:real
total:real
desconto:real
totalApagar:real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...


escreva("Digite a descrição do produto (nome): ")
leia (nome)

escreva ("Digite a quantidade adquirida: ")
leia (quantidade)

escreva ("Digite o preço unitário: ")
leia(precoUnitario)


total <- quantidade precoUnitario

se quantidade <= 5 entao


desconto <- total 0.02

senão

se quantidade < 10 entao

desconto <- total 0.03

senão

desconto <- total 0.05

fimse

Fimse


desconto

totalAPagar <- total

Limpatela



escreval("Produto: " nome)

escreval("Quantidade:", quantidade)

escreval("Total:" , total )
escreval("Desconto:", desconto)

escreval("Total a pagar: ", total Pagar)


Fimalgoritmo
