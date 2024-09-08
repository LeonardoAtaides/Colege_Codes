

# Try e Except:
**try** -> tenta executar o código
**execept** -> ocorreu algum erro ao tentar executar

# ID -- Identidade
Ex:
v1 ="a"
print(id(v1)) -- *140712393133280*

# None = Não valor

# Operadores de atribuição
= += -= *= /= //= **= %=

contador = 10

contador /= 5
print(contador)

# Iterável -> str, range, etc (__iter__)
*Iterador*-> quem sabe entregar um valor por vez
*next* -> me entregue o próximo valor
*iter* -> me entregue seu iterador

# Listas em Python
**Tipo list - Mutável** -Suporta vários valores de qualquer tipo
*Métodos úteis*:
    append, insert, pop, del, clear, extend, +
Create Read Update   Delete
Criar, ler, alterar, apagar = lista[i] (CRUD)

# Empacotamento e Desempacotamento
_  -> pode servir para se atribuir algum valor
*_ -> serve para aderir o resto de valores
ex:
_, _, nome, *resto = ['Maria', 'Helena', 'Luiz']
print(nome)

Ex:
string = 'ABCD'
lista = ['Maria', 'Helena', 1, 2, 3, 'Eduarda']
tupla = 'Python', 'é', 'legal'

p, b, *_, ap, u = lista
print(p, u, ap)

**PARA DAR UM PRINT NO DESEMPACOTAMENTO**
# print(*lista) - *Maria Helena 1 2 3 Eduarda*

# Enumerate - enumerador
enumera uma iteráveis (índices)
Ex:

lista = ['Maria', 'Helena', 'Luiz']
lista_enumerada = enumerate(lista)

print(next(lista_enumerada))

for item in lista_enumerada:
    print(item)

"""
# [(0, 'Maria'), (1, 'Helena'), (2, 'Luiz'), (3, 'João')]
lista = ['Maria', 'Helena', 'Luiz']
lista.append('João')

for indice, nome in enumerate(lista):
    print(indice, nome, lista[indice])

# for item in enumerate(lista):
#     indice, nome = item
#     print(indice, nome)


# for tupla_enumerada in enumerate(lista):
#     print('FOR da tupla:')
#     for valor in tupla_enumerada:
#         print(f'\t{valor}')



# Operação ternária (condicional de uma linha)
<valor> if <condicao> else <outro valor>

# condicao = 10 == 11
# variavel = 'Valor' if condicao else 'Outro valor'
# print(variavel)
# digito = 9  # > 9 = 0
# novo_digito = digito if digito <= 9 else 0
# novo_digito = 0 if digito > 9 else digito
# print(novo_digito)
print('Valor' if False else 'Outro valor' if False else 'Fim')