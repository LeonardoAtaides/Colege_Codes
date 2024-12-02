* TUDO EM PYTHON É UM OBJETO *

# DocString
É uma forma de "comentário", serve para anotar algo 
importante que passe de uma linha
*Fica entre três aspas* ''' ''', """ """
Ex:

'''                              """
testanto a asplas triplas   OU   testanto a asplas triplas
no python                        no python
'''                              """

# PRINT - E para algo definido ao usuário
obs:numeros geralmente não precisam de ''
para incluir um texto é apenas utilizar PRINT
Ex:
print('Olá mundo')

**TIPOS DE PRINTS**
- 1° print('A soma de 2 + 2 é', 2 + 2)
- 2° print(f'A soma de 3 + 3 é {3 + 3}')
- 3° print('A soam de 4 + 4 é {}'.format(4 + 4)) **MAIS PRÁTICA E USADA**

**MANIPULAÇÃO DE PRINTS**
*Comando Sep=''*
Utiliza-se para dar escolher um separador dentro de um print
Ex:
print(1, 2, 3, sep='-') -- 1-2-3

*Comando End= ''*
Utiliza-se para dar finalidade no final da linha de um print
Ex:
print(1, 2, 3, 4, sep='-', end='.') -- 1-2-3-4.

*Pode ser usado para manter um print na mesma linha*
Ex:
print(1, 2, 3, 4, sep='-', end='-')
print(5, 6, 7, 8, sep='-') -- 1-2-3-4-5-6-7-8

*Comando de Escape /*
Utiliza-se para colocar " por exemplo dentro de um print
Ex:
print('Hoje o dia foi \"doido\"') -- Hoje o dia foi "doido"
**Evitando um erro de sintaxe dentro do código**
**Quando deseja mostrar o caracter de escape utiliza-se:**
*Comando R*
Ex:
print(r'Hoje o dia foi \"doido\"') -- Hoje o dia foi \"doido\"
 *MAIS PRÁTICO USANDO ASPAS DIFERENTES*
Ex:
print('Hoje o dia foi "doido"') -- Hoje o dia foi "doido"

*LINHAS*
para quebrar /n, para não quebrar ao final do cod add end=' '

**PARA RETIRAR O ESPAÇO QUANDO ADIONADO** ,USA-SE '{}'.format(VARIAVEL)
OBS:deve estar dentro das''

# INPUT - entrada, usuário digita algo
Ex:
Nome = input('Qual o seu nome: ') - João
Idade = input ('Qual a sua idade: ') - 24
print('Seu nome é {} e você tem {} anos'.format(Nome, Idade))
      - Seu nome é João e você tem 24 anos -

# MANIPULAÇÃO DE STRINGS
C U R S O   E M   V I  D  E  O     P  Y  T  H  O  N
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

*FATIAMENTO- número de índice dentro da str*
**OBS:o último valor não entra na contagem**
  ex:   
frase[9] - *V*
frase[-9:] - *eo Python*- Conta de traz pra frente
frase[9:13] - *VIDE*
frase[9:21] - *VIDEO PYTHON*
frase[9:21:2] - *V D O P T O*
           |->**o "2" representa o "SALTO" de 2 espaços**
frase[:5] - *CURSO*
      |->**do inicio,0 até o 5 espaço**
frase[15:] - *PYTHON*
        |->**o 15 até o final,21**
frase[9::3] - *V E P H*
        |->**conta do 9 até o final,pulando de 3 em 3 espaço**

**COMANDO PARA STRINGS**


*LEN* - Serve para verificar a quantatidade de caracteres dentro 
de uma string
**CONTA OS ESPAÇOS DENTRO DA STRING, CUIDADO!**
Ex:
frase = 'oi'
print(len(frase)) - *2*

*REPLACE* - Serve para substituir algum elemento dentro da string
**Recebe duas coisas:**
- 1° oque vc quer substituir
- 2° qual caracter vc quer substituir

Ex: 
frase = 'estou estudando HTML'.replace('HTML', 'Python')
                                         |-> 1°   |-> 2°
print(frase) - *estou estudando Python*

**Este método pode ser chamado várias vezes na string**
Ex:
num = '123.1234.332-34'.replace('.', '').replace('-', '')
print(num) *123123433234*

                                                                       
*STARTSWITH* - Verifica se a frase começa com algo, dando reposta VERDADEIRA ou FALSA
Ex:                                                               |->**True**   |->**False**
frase = 'Olá bom dia!'
fsw = frase.startswith('Olá')
print(fsw) - *True*

*ENDSWITH* - Verifica se a frase termina com algo, dando reposta VERDADEIRA ou FALSA
Ex:                                                              |->**True**   |->**False**
frase = 'Olá bom dia!'
fsw = frase.endswith('!')
print(fsw) - True

*COUNT*- contar quantas letras tem dentro da string
Ex:
frase = 'Estudar e necessário'
f_count = frase.count('e')
print(f_count) - *3*
**Retorna sempre quantas vezes apareceu dentro da variável**

*CAPITALIZE* - Apenas a primeira letra da string fica em maiuscula*
Ex:
frase = 'amanhã será um bom dia!'.capitalize()
print(frase) - *Amanhã será um bom dia!*

*TITLE* - Deixa maiúsculo o ínicio de cada palavra*
Ex:
frase = 'o domingo a noite chegou!'.title()
print(frase)

*ISDIGIT* - Verifica na frase se contem um valor númerico, dando reposta VERDADEIRA ou FALSA
Ex:                                                                    |->**True**   |->**False**
frase = '5454'.isdigit()             frase = '5454fg'.isdigit()              
print(frase) - *True*                print(frase) - *False*

*UPPER* - Deixa todas as letras da string em maiusculas
Ex:
frase = 'um dia serei programador!'.upper()
print(frase) - *UM DIA SEREI PROGRAMADOR!*

*LOWER* - Todas as letras da frase em minusculas*
Ex: 
frase = 'AMANHÃ E DIA DE TRABALHAR!'.lower()
print(frase) - *amanhã e dia de trabalhar!*


*FIND* - Serve para encontrar algo dentro da string
**Retorna o índice onde inicia a palavra definida**
Ex:
frase = 'Hoje e sábado ainda bem!'                     frase = 'Hoje e sábado ainda bem!'
ffd = frase.find('ainda')                              frase.find('android') 
print(ffd) - *[7]* (Onde começa a palavra 'ainda')     print(ffd) - [-1] ( Ou seja, Não existe)
              |-> **índice**

*RFIND* - encontrar pelo lado direito
Ex:
frase = 'Hoje e sábado ainda bem!'
frfd = frase.rfind('e')
print(frfd)v - *[21]* (Sempre procura até o último termo)
                 |-> **índice**

*STRIP* - Remove todos espaços desde o inicio até o final
      A P R E N D A    P  Y  T  H  O  N
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
            *onde 'A' se torna 0*
Ex:
frase = ' Aprenda Python '.strip()
print(frase) - *Aprenda Python*

*RSTRIP* -Remove apenas espaços do lado direito 'R'
EX:
frase = ' Aprenda Python  '.rstrip()
print(frase) - * Aprenda Python*

*LSTRIP* - Remove apenas espaços do lado esquerdo 'l'
EX:
frase = ' Aprenda Python  '.lrstrip()
print(frase) - *Aprenda Python *

*SPLIT* - dividir,onde se existir espaços na str*
obs:gera uma lista com todas as palavras de uma cadeia de caracteres
ex:
|C U R S O| |E M| |V I D E O| |P Y T H O N|
|0 1 2 3 4| |0 1| |0 1 2 3 4| |0 1 2 3 4 5|
     0        1        2            3

Ex:
frase = ' Rua Agusta 150, Centro, SP'
fsplit = frase.split(',')
print(fsplit) - *['Rua Agusta 150', 'Centro', 'SP']*

*TITLE* - Deixa maiúsculo o ínicio de cada palavra*
Ex:
frase = 'o domingo a noite chegou!'.title()
print(frase)

*JOIN* - Faz uma junção com elementos da strin
**Precisa ser declarado dentro de uma variável, ou terá um erro**
Ex:
frase = '12345'
f_join = '-'.join(frase)
print(f_join)

*IN* - Verifica se existe tal palavra na frase, dando reposta VERDADEIRA ou FALSA
                                                              |->**True**   |->**False**
Ex:
frase = 'o domingo a noite chegou!        frase = 'o domingo a noite chegou!
sn = 'dia' in frase                       sn = 'noite' in frase
print(sn) - *False*                       print(sn) - *True*

*IS ISTANCE()* - verifica o tipo se e str, int, float
**primeiro e passo a variável e depois o tipo: str, int, float e etc**
Ex:
lista = {'leozin', 19}

for item in lista:
    if isinstance(item, str):
        print(item.upper())
    else:
        print(item) - *LEOZIN , 19*

# TIPOS DE INFORMAÇÃO
- INT = NÚMEROS INTEIROS - 2,7,-3,9876
- FLOAT = NÚMEROS REAL - 4.5,0.076,-15.223
- BOOL =  True, False
- STR = 'Olá','7,5'
- COMPLEX = complex(1j)
- LISTA = ['Maça, 'Morango]
- TUPLA = ('A', 'B')
- RANGE = Range(6)
- DICIONÁRIO = (nome='Odemir', age=26)
- SET = sset(('A', 'B', 'C'))
- FRONZET = frozenset(('A','B', 'C'))
- BYTES = bytes(5)
- BYTEARRAY = bytearray(5)
- MEMORYVIEW = memoryview(bytes(5))

# Conversão de Tipos
É um ato para converter um tipo em outro
*Tipos imutáveis e primitivos*
Ex:
*INT*
- print(int('1') + 1) -- *2*
*FLOAT*
- print(float('1.34') + 1) -- *2.34*
*STRING*
print(str(11) + 'b') -- *11b*
*BOOL*
print(bool('')) - *False*
print(bool(' ')) - *True* 


# OPERADORES MATEMÁTICOS
+ SOMA, - SUBTRAÇÃO, * MULTIPLICAÇÃO, / DIVISÃO
** POTÊNCIA, // DIVISÃO INTEIRA, % RESTO DA DIVISÃO, **(1/2) RAIZ 

**adicao** = 10 + 10
print('Adição', adicao) -- *20*

**subtracao** = 10 - 5
print('Subtração', subtracao) -- *5*

**multiplicacao** = 10 * 10
print('Multiplicação', multiplicacao) *100*

**divisao** = 10 / 3  # float
print('Divisão', divisao) -- *3.3333333333333335*

**divisao_inteira** = 10 // 3
print('Divisão inteira', divisao_inteira) -- *3*

**exponenciacao** = 2 ** 10
print('Exponenciação', exponenciacao) -- *1024*

**modulo** = 55 % 2  # resto da divisão
print('Módulo', modulo) -- *1*

# ORDEM DE PRECEDENCIA:
1-(), 2-** , 3-* / // %, 4- + - 

# OPERADORES DE COMPARAÇÃO
1 - == IGUAL A
2 - != DIFERENTE
3 - > MAIOR
4 - < MENOR
5 - >= MAIOR IGUA
6 - <= MENOR IGUAL

# OPERADORES LÓGICOS
1 - and E
2 - or OU
3 - not NÃO

# OPERADORES DE IDENTIDADE
- IS está ali  / True e False
- IS NOT não está  / True e False

# OPERADORES DE ASSOCIAÇÃO
- IN verificar algo esta ali  / True e False
- NOT IN verificar se não está  / True e False

# TYPE - TIPO
VARIAVEL - isnumeric() - e um número? ex:1,2,3
VARIAVEL - isalpha() - e uma letra? ex: abc
VARIAVEL - isalnum() - tem alfabeto e número ex: 3a

n=input('Digite algo:')
print('é um número?',n.isnumeric())
print('é do alfabeto?',n.isalpha())
print('é dos alfanumerico?',n.isalnum())


# LISTAS - São criadas usando [] - Colchetes
Ex:
lista = [1, 2 ,3 ,4]
print(lista)

TUPLAS - São criadas usando () - Parenteses #são imutaveis
Ex:
tupla = (1, 2 ,3 ,4 )
print(tupla)

DICIONÁRIOS - São criados usando {} - Chaves
dicionario = {'Index': 'Valor', 'id1': 1, 'id2':2, 'nome': 'José'}
print(dicionario)

**MANIPULAÇÃO DE LISTAS**

# 1 - * APEEND() - Para adicionar um item ao final da lista *
# 2 - * LEN() - Calcular o tamanho da lista *
# 3 - * [] - Acessar posições *
# 4 - * DEL() - Excluir um elemento *
# 5 - * CLEAR() - Limpar a lista *
# 6 - * INSERT() - Para inserir um item da lista em um índice especificado *
*obs* lista.insert(0, 5)
                  |  |-> Depois o valor(str, int, float...)
                  |-> primeiro add o indice

# 7 - * EXTEND() - EStende a lista *
# 8 - * REMOVE() - Remove o item especificado *
# 9 - * POP() - Remove o índice especificado *
# 10 - * SORT() - Ordenar os valores * (reverse=True) - Inverte a ordem
# 11 - * COPY() - Faz uma cópia da Lista *
# 12 - * INDEX() - Mostra a numeração do elemento lista *
# 13 - * CONCATENA LISTAS -- += -= *

# PACOTES EXTERNO
*incluir uma ''biblioteca''*
*comando IMPORT,add a biblioteca geral*
*comando FROM-variavel-IMPORT,sendo mais especifico*

# PACOTE DATE.TIME - Datas
Ex:                                         *Importando uma biblioteca específica*
import datetime                               from datetime import date
data_hoje = datetime.datetime.today()         data_hoje = date.today()
print(data_hoje) - 2024-06-11 23:11:43        print(data_hoje) - 2024-06-11

                         Obs: A data vem no padrão americano 24/06/11 
                        para modificar usamos: data.strftime('%d/%m/%y') - 11/06/24
# PACOTE TIME - Tempo/Hrs
Ex:
import time
print('Valindo o seu acesso...')
time.sleep(3)
print('Acesso liberado!')

# BIBLIOTECA MATH - Matemática
- CEIL- faz um arredondamento para cima
- FLOOR-faz um arredondamneto para baixo
- TRUNC- elimina da virgula pra frente sem fazer arredondamento
- FACTORIAL- para calculo de fatorial
- MIN - valor minimo de uma variavel
- MAX -  valor máximo de uma varriavel
- ABS - transforma um valor negativo em positivo
- POW - Transforma o valores dentro de () em pôtencia
- SQRT- para calcular raiz quadrada

-- PARA USO GERAL USAMOS:IMPORT-MATH
-- PARA SER ESPECÍFICO USAMOS:FROM-MATH-IMPORT-SQRT 
OBS:SE IMPORTAR DUAS ADD,COMO SQRT,CEIL DE ACORDO COM A LINHA ACIMA

Ex:*GERAL*
import math
num=int(input('Digite um número:'))
raiz=math.sqrt(num)
print('a raiz de {} é igual a {}'.format(num, math.floor(raiz)))

Ex:*ESPECÍFICA*
from math import sqrt
num=int(input('Digite um número:'))
raiz=sqrt(num)
print('A raiz de {} é igual a {}'.format(num,raiz))

Ex:*ESPECÍFICA COM DUAS ADICIONAIS*
from math import sqrt, floor
num=int(input('Digite um número:'))
raiz=sqrt(num)
print('A raiz de {} é igual a {}'.format(num,floor(raiz)))

# BIBLIOTECA RANDOM - Aleatório
Ex:*CHOICE - Escolha*
import random
Lista = [1, 2, 3, 4, 5, 6, 7, 8]
num= random.choice(Lista)
print(num)

Ex:*RANDOM* - gera um número aleatório entre 0 e 1
import random
num=random.random()
print(num)

ex:*RANDINT* - gera um número inteiro aleatório, *dentro de um período*
import random
num=random.randint(1, 10)
print(num)

# BIBLIOTECA STATISTICS - Estatísticas
        *Import statistics*

- MEAN - Calcula a média
- SUM - Soma os valores
- MEDIAN - Extrai a médiana 
- MODE - Calcula a moda 

# BIBLIOTECA DECIMAL - para arrendondar números decimais com muitas casas decimais
    *import decimal*
ex:
import decimal
numero = decimal.Decimal('0.2')
numero1 = decimal.Decimal('0.7')
print(numero + numero1) -- *0.9*


#   IF = SE ELIF = CONDIÇÃO  ELSE = SENÃO

IF carro.esquerda():
  bloco true

ELSE:
  bloco false

  ex1:
  nome = str(input('Qual o seu nome? '))
if nome == 'Leonardo':
    print('Que nome lindo você tem!')
else:
    print('Seu nome e tão normal!')
 print('Bom dia {}!'.format(nome))

n1 = float(input('Digite a primeira nota:'))
n2 = float(input('Digite a segunda nota:'))
m = (n1 + n2)/2
print('A sua média foi {:.1f}'.format(m))
if m >= 6.0:
    print('Sua média foi boa! PARABÉNS!')
else:
    print('Sua média foi ruim! ESTUDE MAIS!')

   #OU

n1 = float(input('Digite a primeira nota:'))
n2 = float(input('Digite a segunda nota:'))
m = (n1 + n2)/2
print('A sua média foi {:.1f}'.format(m))
print('PARABÉNS' if m >= 6.0 else 'ESTUDE MAIS!')

# CONDIÇÕES ANINHADAS
else + if = elif:

ex:
nome = str(input('Qual o seu nome? '))
if nome == 'João':
    print('Que nome lindo!')
elif nome == 'Pedro' or nome == 'Maria' or nome == 'José':
    print('O seu nome e bem comum no Brasil !')
else:
    print('Seu nome é bem normal!')
print('Tenha um bom dia, {}'.format(nome))


# LAÇOS DE REPETIÇÃO - LOOP FOR
C - VARIAVEL

ex1: 
for c in range(0, 6):
    print('oi')
print('Fim')

ex2:
for c in range(6, 0, -1):
    print(c)
print('Fim')

ex3:
for c in range(0, 7, 2):
    print(c)
print('Fim')

ex4:
n = int(input('Digite um número: '))
for c in range(0, n+1): #+1 para chegar ao número digitado
    print(c)
print('FIM')

ex5:
i = int(input('INICIO: '))
f = int(input('FIM: '))
p = int(input('PASSO: '))
for c in range(i, f+1, p):
    print(c)
print('FIM')

ex6:
s = 0
for c in range(0, 3):
    n = int(input('Digite um valor: '))
    s += n # s = s + n
print('O somatório de todos os valores foi {}'.format(s))

 # ESTRUTURA DE REPETIÇÃO WHILE - QUANDO NÃO HÁ LIMITE DE REPETIÇÃO
 obs: te  que dizer a ele quando parar se não se torna um loop 

ex:
while not maça:
    passo
pega
---------------------
while not maça:
    if chão:
    passo
    if buraco:
    pula
    if moeda:
    pega
pega

ex1:

c = 1
while c < 10:
    print(c)
    c += 1
print('Fim')

ex2:
c = 1
while c < 10:
    print(c)
    c += 1
print('Fim')

ex3:
r = 'S'
while r == 'S':
    n = int(input('Digite um valor: '))
    r = str(input('Quer continuar? [S/N] ')).upper()
print('Fim')

ex4:
n = 1
par = impar = 0
while n != 0:
    n = int(input('Digite um valor: '))
    if n != 0:
        if n % 2 == 0:
            par += 1
        else:
            impar +=1
print('Você digitou {} números pares e {} números ímpares!'.format(par, impar))


# BREAK
*serve para parar um código em if,elif, else*
Ex:
Lista = ['Morango', 'Pera', 'Uva', 'Abacaxi']

for frutas in Lista:
    print(frutas)
    if frutas == 'Uva': - Morango, Pera, Uva
        break

# CONTINUE
*Serve para da continuação ao código,podendo pular uma informação irrelevante*
Ex:
for Loop in range(0, 11):
    if Loop == 5:
        continue
    print(Loop)

# RETURN
*Serve para dar um retorno de valores das funções*
Ex:
def soma (x, y):                
    return x + y
variavel = soma(1, 3)
print(variavel) - *4*
**possibilita alocar os valores dentro de uma variável**

# DEF
Funções sãoo trechos de código usadas para replicar determinada ação 
ao longo do seu código
**ESTRUTURA DE FUNÇÕES - É UM BLOCO QUE SÓ E EXECUTADO QUANDO É CHAMADO**
*Usa-se para códigos simples e complexos*

Ex:01
def mensagem():
    print('Aprendendo Python!!')
mensagem()

Ex:02
def somar(Valor_1, Valor_2):
    cal =  Valor_1 + Valor_2
    print(cal)
    
somar(10, 10) - 20

**A *def* é definida em um Escopo** -  significa o local onde aquele código pode atingir.
OBS: sempre se define de dentro para fora de um código

Existe o escopo *global* e *local*:
**O escopo *global* é o escopo onde todo o código é alcançavel.**
*OBS: Não e indica usar desta forma*
Ex:
x = 1
def escopo():
    global x
    x = 10

**O escopo *local* é o escopo onde apenas nomes do mesmo local**
Ex:
x = 1
def escopo():
    x = 10

# RETURN - exclusivo apenas para funções
*Serve para dar um retorno de valores das funções*
*o return para a execução do código após ser declarado*
Ex:
def soma (x, y):                
    return x + y
variavel = soma(1, 3)
print(variavel) - *4*
**possibilita alocar os valores dentro de uma variável**

# CLOSURE "ADIANDO A EXECUÇÃO DE UMA DEF(FUNÇÃO)"
Usa-se para adiar a execução de determinada função no momento
Ex:

def soma(x, y):
    return x + y

def multiplica(x, y):
    return x * y


def criar_funcao(funcao, *args): |
    def executa():               | Define uma função interna para 
        return funcao(*args)     | realizae tal atraso na execução
    return executa               |

soma_com_cinco = criar_funcao(soma, 5 , 3)
multiplica_por_dez = criar_funcao(multiplica, 10, 2)


print(soma_com_cinco())
print(multiplica_por_dez())

# Higher Order Functions -Funções de primeira classe
E basicamente para definir que as funções podem ser tratadas
como qualquer outro tipo de dado
**Uma funcão retornando outra**
Ex:
def saudacao(msg, nome):
    return f'{msg}, {nome}'

def executa(funcao, *args):
    return funcao(*args)

print(executa(saudacao, 'Bom dia', 'Leozin')) *Bom dia. Leozin*


#  Dicionários (tipo dict) 
são estruturas de dados do tipo par de "chave" e "valor". Chaves podem ser consideradas como o "índice",como: str, int, float, bool, tuple, etc.
*Usamos as chaves - {} - ou a classe dict para criar dicionários*
**Mutável: dict, list**
EX: 
pessoa = {
     'nome': 'Luiz Otávio',
     'sobrenome': 'Miranda',
     'idade': 18,     'altura': 1.8,
     'endereços': [
        {'rua': 'tal tal', 'número': 123},#         {'rua': 'outra rua', 'número': 321},
      ]
}
 pessoa = dict(nome='Luiz Otávio', sobrenome='Miranda')

*Métodos dentro de dicionário*

# Métodos úteis dos dicionários em Python
*len* - quantas chaves
Ex: **print(len(dicionário))**

*keys* - Retorna o nome das chaves
Ex: **print(dicionário.keys())**

*values* - Retorna os valores dentro das chaves
Ex: **print(dicionário.values())**

*items*- Retorna os valores das chaves e os dados dentro dela
Ex: **print(dicionário.items())**

*setdefault* - adiciona valor se a chave não existe
Ex: **dicionário.setdefault('idade', 0)**
    **print(pessoa['idade'])**

*copy* - retorna uma cópia rasa (shallow copy)
Ex:
d1 = {
    'c1': 1,
    'c2': 2,
    'l1': [0, 1, 2],
}
d2 = d1.copy()
print(d2)

**Tem como fazer uma copia profunda**
Importa o módulo *copy*
E usa o método  *DEEPCOPY*
Ex:
Import copy             |-> o método que garante a cópia profunda
produtos_copia = copy.deepcopy(variavel)
|-> várial de cópia                 |-> passa a váriavel que deseja fazer
                                        a cópia
*-GARANTE QUE SE OS DADOS FOREM ALTERADOS NA VARIÁVEL PRINCIPAL SE ATUALIZE NA CÓPIA-*


*get* - obtém uma chave,buscando pela chave ou variável
Ex:
pessoa['Nome'] = 'José'
pessoa.get('Nome') - José
**se chave não existir retorna None, sendo possível alterar**
pessoa['Nome'] = 'José'
del pessoa['Nome']
print(pessoa.get('Nome', None))
                          |-> ou 'NÃO EXISTE'

*pop* - Apaga um item com a chave especificada (del)
Ex:
pessoa = {
     'nome': 'Luiz Otávio',
     'sobrenome': 'Miranda',
}

nome = pessoa.pop('nome')
print(pessoa) - *{'sobrenome': 'Miranda'}*

*popitem* - Apaga o último item adicionado
Ex:
pessoa = {
     'nome': 'Luiz Otávio',
     'sobrenome': 'Miranda',
}

ultima_chave = pessoa.popitem()
print(pessoa) - *{'nome': 'Luiz'}*

*update* - Atualiza um dicionário com outro/adiona chaves
Ex:
pessoa = {
     'nome': 'Luiz Otávio',
     'sobrenome': 'Miranda',
}

pessoa.update({                    pessoa.update(nome= idade=30, e)
    'idade': 30,           **OU**
    'endereço': 'Bahia'
})
print(pessoa) - *{'nome': 'Luiz Otávio', 'sobrenome': 'Miranda', 'idade': 30, 'endereço': 'Bahia'}*


**Desemcopamento e unindo dicionários**
*Usa-se* ** *para fazer uma união de dicionários*
pessoa = {
    'nome': 'Aline',
    'sobrenome': 'Souza',
}

dados_pessoa = {
    'idade': 16,
    'altura': 1.6,
}

pessoas_completa = {**pessoa, **dados_pessoa}
print(pessoas_completa)

**kwarks** - Argumentos nomeados 
*Como 'nome': 'Leozin' , 'idade': 18*
Ex:
def mostro_argumentos_nomeados(*args, **kwargs):
    print('NÃO NOMEADOS:', args)

    for chave, valor in kwargs.items():
        print(chave, valor)

mostro_argumentos_nomeados(1, 2, nome='Joana', qlq=123) - *NÃO NOMEADOS: (1,2) / nome Joana / qlq 123*

# SETS - Conjuntos em Python
**São mutáveis, pórem aceitam apenas tipos imutáveis como valor interno**
**Não possui índices**
**Não garantem ordem**
- São eficientes par a remover valores duplicados de iteráveis
Ex:
s1 = set() -> vazio
s1 = {'Junio',1 ,2 ,3} -> com dados

*Removem os valores duplicados de iteráveis*
Ex:
s1 = {1 ,2, 2, 2,2 ,3}
print(s1) - *{1, 2, 3}*

# Métodos úteis:
*add, update, clear, discard*

1° add - adicionar um valor:
Ex:
s1 = set()
s1.add('Opa')
s1.add('Beleza')
print(s1) - *{'Beleza', 'Opa'}* ou *{'Opa', 'Beleza'}*

2° update - adiciona vários valores
s1 = set()
s1.update(('Opa', 'Beleza')) *{'Opa', 'Beleza'}*
print(s1)                 |-> sendo passado com imutavel para evitar do código
                              interar sobre cada caracter da string
                               sem (),*{'p', 'e', 'z', 'B', 'a', 'l', 'O'}*

3° clear - remove tudo dentro dom set:
Ex:
s1 = set()
s1.update(('Opa', 'Beleza'))
s1.clear()
print(s1) *set()*

4° discard - Elimina valores
Ex:
s1 = set()
s1.update((1, 2, 3, 4, 5))
s1.discard(1)
print(s1) *{2, 3, 4, 5}*

# Operadores úteis

1° União - Union
usa-se "|" para realizar a união entre dois ou mais sets:
**lembrando que não se repete itens repetidos**
Ex:
s1 = {1, 2, 3}
s2 = {2, 3, 4}
s3 = s1 | s2
print(s3) - *{1, 2, 3, 4}*

2° Intersecção - Intersection 
Usa-se "&" para realizar a intersecção entre dois ou mais sets:
Ex:
s1 ={1, 2, 3}
s2 = {2, 3, 4}
s3 = s1 & s2
print(s3) - *{2, 3}*

3° Diferença - Itens presentes apenas no set da esquerda 
Usa-se "-" para realizar a diferença entre dois sets:
Ex:
s1 ={1, 2, 3}
s2 = {2, 3, 4}
s3 = s1 - s2
print(s3) - *{1}*

4° Diferença Simétrica - Itens que não estão em ambos:
Usa-se "^" para reaçizar a diferença simétrica entre dois sets:
Ex:
s1 ={1, 2, 3}
s2 = {2, 3, 4}
s3 = s1 ^ s2
print(s3) -  *{1, 4}*


# ESTRUTURA LAMBDA - E UMA FUNÇÃO ANÔNIMA
*Pode receber qualquer número de argumentos, mas tendo apenas uma expressão*
*Usa-se para códigos mais simples*

Ex:
lista = [
    {'nome': 'Luiz', 'sobrenome': 'miranda'},
    {'nome': 'Maria', 'sobrenome': 'Oliveira'},
    {'nome': 'Daniel', 'sobrenome': 'Silva'},
    {'nome': 'Eduardo', 'sobrenome': 'Moreira'},
    {'nome': 'Aline', 'sobrenome': 'Souza'},
]
lista.sort(key=lambda item: item["nome"])
print(lista) - *Aline,Daniel, Eduardo...*

Ex:
lista = [
    {'nome': 'Luiz', 'sobrenome': 'miranda'},
    {'nome': 'Maria', 'sobrenome': 'Oliveira'},
    {'nome': 'Daniel', 'sobrenome': 'Silva'},
    {'nome': 'Eduardo', 'sobrenome': 'Moreira'},
    {'nome': 'Aline', 'sobrenome': 'Souza'},
]
def exibir(lista):
    for item in lista:
        print(item)
    print()
l1 = sorted(lista, key=lambda item: item["nome"])
l2 = sorted(lista, key=lambda item: item["sobrenome"])

exibir(l1)
exibir(l2)

Ex:
def executa(funcao, *args):
    return funcao(*args)

duplica = executa(
    lambda m: lambda n: n * m,
    2
)
print(duplica(2))

print(
    executa(
        lambda x, y: x + y,
        2, 3
    ),
)

print(
    executa(
        lambda *args: sum(args),
        1, 2, 3, 4, 5, 6, 7
    )
)


# List Comprehension - Uma forma rápida para criar listas a partir de interávies
Ex:
lista = [numero for numero in range(10)]
print(lista) - *[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]*

*E possível realizar operações*

lista = [numero * 2 for numero in range(10)]
print(lista) - *[0, 2, 4, 6, 8, 10, 12, 14, 16, 18]*


**Mapeamento de dados em list comprehension**
*transformando uma lista mais mantendo a quantidade de índices*
*gerando um nova lista*

lista = [numero for numero in range(10)]
            |-> PASSA A CONDIÇÃO ANTES
                podendo ser +, *, /, -, %   
print(lista) - *[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]*

Ex:
produtos = [
    {'nome': 'p1', 'preco': 20, },
    {'nome': 'p2', 'preco': 10, },
    {'nome': 'p3', 'preco': 30, },
]
novos_produtos = [
    {**produto, 'preco': produto['preco'] * 1.05}
    if produto['preco'] > 20 else {**produto}
    for produto in produtos
]

print(*novos_produtos, sep='\n') - *{'nome': 'p1', 'preco': 20} / {'nome': 'p2', 'preco': 10} / {'nome': 'p3', 'preco': 31.5}*

**Pode ter um filtro com if sendo adicionado depois do for**

produtos = [
    {'nome': 'p1', 'preco': 20, },
    {'nome': 'p2', 'preco': 10, },
    {'nome': 'p3', 'preco': 30, },
]
novos_produtos = [
    {**produto, 'preco': produto['preco'] * 1.05}
    if produto['preco'] > 20 else {**produto}
    for produto in produtos
]


novos_produtos = [
    {**produto, 'preco': produto['preco'] * 1.05}
    if produto['preco'] > 20 else {**produto}
    for produto in produtos
    if (produto['preco'] >= 20 and produto['preco'] * 1.05) > 10
]
print(novos_produtos, sep="\n") *[{'nome': 'p1', 'preco': 20}, {'nome': 'p3', 'preco': 31.5}*

# Dictionary Comprehension 
Ex:
produto = {
    'nome': 'Caneta Azul',
    'preco': 2.5,
    'categoria': 'Escritório',
}

dc = {
    chave: valor.upper()
    if isinstance(valor, str) else valor
    for chave, valor
    in produto.items()
    if chave != 'categoria'
}
       
print(dc) - *{'nome': 'CANETA AZUL', 'preco': 2.5}*
        
# Valores Truthy e Falsy, Tipos Mutáveis e Imutáveis
**Todos os valroes Falsy**
lista = [] 
dicionario = {} 
conjunto = set()   
tupla = ()  
string = '' 
inteito = 0 
flutuante = 0.0  
nada = None 
falso = False  
intervalo = range(0) 

# Dir  getattr em Python
- Serve para chegar os métodos(nomes) dentro de uma string
- Usa-se o debugger no Terminal acessa o "Debub Console"
e digita dir(variável) assim vai mostrar todos os métodos dentro da sua string

# Hasattr
- Serve para checar um determinado objeto tem determinado nome lá dentro
Ex:
string = 'leo'
if hasattr(string, 'upper'):
             |        |-> passa o método me forma de string
             |-> passa a variável
print(string) - *Existe upper aqui*

# Getattr
- Permite que acesse o método com um variável armazenando uma string
com o nome do método
Ex:
string = 'leo'
metodo = 'upper'
 
if hasattr(string, metodo):
    print('Existe upper aqui') - *Existe upper aqui*
    print(getattr(string, metodo)()) - *LEO*
                    |       |-> a variável com método guardado em string
                    |-> passa a variável

else:
    print('Não existe o método', metodo)

# Interator
-Trabalha semelhante ao for acessando valores um a um
Ex:
    |->*É RESPONSÁVEL POR ARMAZENAR OS VALORES*
iterable = iterable = ['Eu', 'Estou', 'Cansado'] 
iterator = iter(iterable)  # tem __iter__ e __next__    sendo iterator = iterable.__iter__
|   |-> *É RESPONSÁVEL E ENTREGAR UM VALOR POR VEZ*
|
|-> **NÃO SABE O TAMANHO DA SUA INTERABLE**
|-> **NÃO SABE SEU VALOR ANTERIOR**
|-> **NÃO SABE SEU ÚLTIMO VALOR**
        *Sendo assim ele não possui índices*


print(next(iterator)) - *Eu*
print(next(iterator)) - *Estou*
print(next(iterator)) - *Cansado*
**Se der mais next além dos itens da variável ele da uma exceção no código(erro)**

# Generator expression:
- São funções que sabem pausar em determinada ocasião
- Os generator aguardam o comando next, assim ele economiza memória, esperando o comando
- Geralmente usa-se para navegar sequencialmente
|-> **NÃO SABE-SE O SEU TAMANHO**
|-> **NÃO SABE-SE SEU VALOR ANTERIOR**
|-> **NÃO SABE SEU ÚLTIMO VALOR**
    *Sendo assim ele não possui índices*
Ex:
generator = (n for n in range (3))
            |-> Usa-se () para referenciar a um generator

print(next(generator)) - *0*
print(next(generator)) - *1*
print(next(generator)) - *2*

# Yield
- usa dentro de uma função generator ao invés de usar return, usa-se *yield* para pausar
sendo executado *com next*

Ex:
def generator(n=0):
    yield 1 # Pausar
    yield 2 # Pausar

gen = generator(n=0)
print(next(gen)) - *1*
print(next(gen)) - *2*

Ex2:
def generator(n=0, maximum=10):
    while True:
        yield n
        n += 1
        
        if n >= maximum:
            return

gen = generator(maximum=1000000)
for n in gen:
    print(n)

**Há como dar continuidade com um yield dentro de uma função**

def g1(n=0):
    yield 1 # Pausar
    yield 2 # Pausar

def g2 (gen):
    yield from gen() *importa a outra função para ela*
    yield 4
    yield 5
    yield 6

generator = g2(g1)
for num in generator:
    print(num)


# Raise
Usa-se para lançar exceções (erros)
Ex:
Criei uma exceção que mostra uma mensagem no erro
print(123)
raise ValueError('Deu erro meno') - *raise ValueError('Deu erro meno')*
                                        *ValueError: Deu erro meno*


# Import
Importa um biblioteca por inteira
Ex:
import math
raiz = 4
math.sqrt(raiz) - *2.0*

**sendo necessário chamar o nome do modulo sempre quie for usar algum método**

# From
Importa Apenas um modulo especifico da biblioteca
Ex:
from math import sqrt
num = 16
raiz = sqrt(num)
print(raiz) - *4.0*

# As
Nomea a biblioteca com outro nome como especie de apelido
import math as *mat* -> nomeou como MAT, sendo possivel usar todos os   
                        métodos de MATH
num = 25
raiz = mat.sqrt(num)
print(raiz)

# Modularização
É possível importar um módulo em python ou seja sendo possivel trazer funções, prints e etc 
de outro arquivo(módulo) mas *não reconhece as pastas e arquivos acimado do __main__ principal
Ex:
*Cria os arquivos*
- Python_mod
- Python_main

Dentro do modulo e passado tudo que você deseja inserir                 
**Python_mod**
 ________________________
 |                      |
 |  def soma(n1, n2):   |
 |    return n1 + n2    |
 |______________________|

**Python_main**
 _______________________________
 |import Python_mod             | -> Importa o modulo todo sendo necessário chamar o nome |  Python_mod.soma()
 |import soma from Python_mod   | -> Importa apenas uma parte especifica do módulo
 |                              |
 | resultado = soma(10, 10)     | -> chamando a função do módulo e passando os valores
 | print(resultado)             | -> *20*
 |______________________________|


# Singleton
Um módulo deste so permite haver uma estancia do módulo no programa, ou seja so importa o módulo apenas uma vez
**E PADRÃO IMPORTAR APENAS UMA VEZ EM PYTHON**

# ImportLib
Permite recarrer um módulo novamente dentro de um programa
Ex:
import app_mod
*import importlib*

for i  in range(6):
    *importlib.reload(app_mod)* -> permite recaregar 
     print(i)                      o módulo


# Variáveis Livres
def fora(x):
    a = x          | Seria o a uma variável livre
    def dentro():  | pois ela não está definida dentro
        return a   | do escopo de *def dentro()* sendo possível
    return dentro  | acessá-la dentro da função *dentro*

# Locals                                            Globals
Mostra as variáveis locais do código | Mostra as variáveis globais do código
    *print(locals())*                             *print(globals())*


# Nonlocal
Define que a variável livre não e local que está no escopo podendo ser alterada no escopo da função
Ex:
def concatenar(string_inicial):
    valor_final = string_inicial

    def interna(valor_a_concatenar=''):
        nonlocal valor_final -------> *define a que não e local* 
        valor_final += valor_a_concatenar
        return valor_final
    return interna

c = concatenar('a')
print(c('b')) *ab*
print(c('c')) *abc*
print(c('d')) *abcd*

# Decorator
Este meio permite Adicionar / Remover / Restringir / Alterar
Ex:                                       *Está função e decoradora*
________________________________________
|def create_fuction(func):               | -> recebe uma função
|def execute(*args,**kwargs ):           | -> Cria uma função interna(closure)
|        for arg in args:                |(está função não será executada será
|            is_string(arg)              |        retornada sem execução)
|        result = func(*args, **kwargs)  |
|        return result                   | -> Sendo possível alterar algo antes 
|    return execute                      |       ou depois do resultado como:
|                                        | *Adicionar/Remover/Restringir/Alterar*
|________________________________________|

def invert_string(string): -> *inverte a frase da função*
    return string[::-1] -> *pega desde o primeiro índice até o último e inverte*

def is_string(param): -> *Recebe um paramêtro*
    if not isinstance(param, str): -> *Verifica se é string*
        raise TypeError('paramêtro deve ser uma string')-> *Se não lança uma exceção*


invert_string_arriving_param = create_fuction(invert_string)
inverted = invert_string_arriving_param('123')
print(inverted) *321*






# ESTRUTURA TRY - PERMITE TESTAR UM BLOCO DE CÓDIGO QUANTO A ERRO
# EXCEPT - Permite que você lide com o erro
# ELSE - Permite executar código quando não há erro
# FINALLY - Permite que você execute código, indepedente do resultado dos blocos try e except
*Para mitigar erros no código*

Ex:
try:
    0/0
    print('Deu certo meu script!')
except:
    print('Não deu certo')
finally:
    print('Vai ser executado da mesma forma!!!')

# ESTRUTURA DE CLASSES/OBJETOS - UMA CLASSE É COMO UM CONSTRUTOR DE OBJETOS, OU UM 'PROJETO' PARA CRIAR OBJETOS

__init__ = *serve para inicializar os atributos do objeto ou seja, definir as propriedades e valores inicias*

- self =  *É uma convenção de nomenclatura que se refere à instância atual da classe*

Ex:

class Pessoa:

#Metodo Construtor
    def __init__(self, Nome, Idade):
        self.Nome = Nome
        self.Idade = Idade

    def Boas_Vindas(self):
        print('Olá Seja Bem Vindo! {}'.format(self.Nome))

    def Recusado(self):
        print('Seu acesso foi negado!!')


#Função
    def Maior_Idade(self):

        if self.Idade >=18:
            print('Usuário é maior de Idade')
            self.Boas_Vindas()

        else:   
            print('Usuário é menor de Idade')
            self.Recusado()
            
dados = Pessoa ('Claudio', 19)
dados.Maior_Idade()

# PIP INSTALL - para instalar bibliotecas
*pip install - biblioteca *

# COMANDO AROUND - para arrendondar números
**round()**
Ex:
Valor_exemplo = 123.999
r = round(Valor_exemplo)
print(r)


#  Dicionários (tipo dict) 
são estruturas de dados do tipo par de "chave" e "valor". Chaves podem ser consideradas como o "índice",como: str, int, float, bool, tuple, etc.
*Usamos as chaves - {} - ou a classe dict para criar dicionários*
**Mutável: dict, list**
EX: 
pessoa = {
     'nome': 'Luiz Otávio',
     'sobrenome': 'Miranda',
     'idade': 18,     'altura': 1.8,
     'endereços': [
        {'rua': 'tal tal', 'número': 123},#         {'rua': 'outra rua', 'número': 321},
      ]
}
 pessoa = dict(nome='Luiz Otávio', sobrenome='Miranda')

*Mètodos dentro de dicionário*
.get - Ele tenta obter uma chave,busando pela chave ou variável
Ex:
pessoa['Nome'] = 'José'
pessoa.get('Nome') - José
**se chave não existir retorna None, sendo possível alterar**
pessoa['Nome'] = 'José'
del pessoa['Nome']
print(pessoa.get('Nome', None))
                          |-> ou 'NÃO EXISTE'

 # CORES NO TERMINAL

ANSI - escape sequence
#  \033[m

         style               back
#   \033[estilo   texto     fundo     m
                   text

STYLE - COMPORTAMENTO -normal, negrito, sublinhada
0 - nada (None)
1 - negrito (Bold)
4 - sublinhado (Underline)
7 - inverte ás conf (Negative) ex: \033[7;30m - letra preta, fundo branco

TEXT - TEXTO - cor do texto
30 - branco
31 - vermelho
32 - verde
33 - amarelo
34 - azul
35 - roxo
36 - ciano
37 - cinza

BACK - COR DO FUNDO
40 - branco
41 - vermelho
42 - verde
43 - amarelo
44 - azul 
45 - roxo
46 - ciano
47 - cinza

ex1:
print('\033[1;31;43mOlá mundo!\033[m')

ex2:
a = 3
b = 5
print('\033[mOs valores são \033[32m{}\033[m e \033[31m{}\033[m!!'.format(a,b))

ex3:
nome = 'Leozin'
print('Muito prazer em te conhecer, {}{}{}!'.format('\033[4;32m', nome, '\033[m'))

ex4:
nome = 'Leozin'
cores = {'limpa': '\033[m', 
         'Azul': '\033[34m', 
         'Verde': '\033[32m', 
         'Cinza': '\033[37m'}
print('Muito prazer em te conhecer, {}{}{}!'.format(cores['Verde'],nome,cores['limpa']))
