Algoritmo "Análise de Empréstimo QUESTÃO 9"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Carlos Anderson 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a) Eduardo Monteiro
// Data atual  : 05/09/2023
Var
// Seção de Declarações das variáveis 


rendaMensal, valorEmprestimo, valorPrestacaoMaximo: real

numeroPrestacoes: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...


escreva("Digite a renda mensal do solicitante: ")
leia(rendaMensal)

escreva ("Digite o valor total do empréstimo solicitado: ")
leia (valorEmprestimo)

escreva("Digite o número de prestações desejado: ")
leia (numeroPrestacoes)

valorPrestacaoMaximo <- 0.3 rendaMensal

se (valorEmprestimo <= 18 rendaMensal) e (valorEmprestimo / numPrestacoes) <= valorPrestacaoMaximo entao

escreva ("Empréstimo concedido.")

senão

escreva("Empréstimo não concedido.")

fimse


Fimalgoritmo
