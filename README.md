# Manual de Referência

## Introdução

Essa linguagem foi implementada como projeto da disciplina "Engenharia de Linguagens", do Bacharelado em Tecnologia da Informação da UFRN. Nossa proposta é criar uma linguagem simples que auxilie desenvolvedores iniciantes voltada para desenvolvimento web.

## Como buildar o compilador

No terminal, com as ferramentas Lex e Yacc instaladas, dentro da pasta **_lang_**, rode os comandos:

```c
$ flex lexer.l
$ yacc parser.y -d -v -g
$ gcc lex.yy.c y.tab.c record.c hash_table.c -o parser.exe
```

Tambem existe a possibilidade de usar esses comandos via make, rodando o comando:

```c
$ make clean
$ make
```

## Como usar o compilador

Com o executável do compilador, rode o seguinte comando seguido do programa desejado e o arquivo de saída.

```c
$ ./parser.exe exemplo.txt resultado.txt
```

## Tipos

| Tipo   | Descrição                                         |
| ------ | ------------------------------------------------- |
| int    | Tipo para números inteiros                        |
| real   | Tipo para números com ponto flutuante             |
| bool   | Tipo para valores booleanos (verdadeiro ou falso) |
| string | Tipo para cadeias de caracteres                   |
| char   | Tipo caracter                                     |

## Declaração de constantes e variáveis

Declare um tipo para a variável, seguido de um nome para identificação desta variável. Nomes precisam começar com uma letra, maiúscula ou minúscula, e também podem conter números. Além disso, também precisam ser distintos das palavras reservadas listadas na última seção deste documento. Exemplos com as possíveis formas de se declarar uma variável estão listadas abaixo.

```c
int num;
string palavra1, palavra2;
char exemplo = "a";
boolean verdade = true, falso = false;
real floating = 2.5;
```

Constantes podem ser declaradas da mesma forma que variáveis, com as mesmas regras e restrições, mas obrigatoriamente com a palavra "const" antes do tipo:

```c
const int constante;
const string imut = "Valor constante";
const boolean axioma = true;
```

## Declaração de Arrays multidimensionais

Um array é uma coleção de elementos do mesmo tipo que
podem ser acessados individualmente e referenciados usando um índice como identificador. Podendo ter múltiplas dimensões, tem como única restrição a regra que sua declaração siga o mesmo padrão para todas as dimensões.

### Estrutura de declaração

```c
int colecao[];
char quadrada[2][2];
```

### Como inserir elementos em um array

```c
int colecao[3];

for(int i = 0 ; i < 3 ; i++){
  colecao[i] = i + 1;
}

```

### Acessando itens do array

```c
int x = colecao[2];
print(x) //imprime 3
```

## Estruturas

| Tipo     | Descrição                              |
| -------- | -------------------------------------- |
| function | Estrutura de subprogramas da linguagem |

## Funções

### Declaração de funções

```c
fun string bye(){
  return "Bye";
}
//or
function int main(){
  return 0;
}
```

## I/O Streams

| Sintaxe  | Descrição                           |
| -------- | ----------------------------------- |
| print(x) | Imprime o conteúdo de x em tela     |
| read(y)  | Lê o valor da entrada e atribui a x |

## Laços de Repetição

### **for**

A instrução _for_ cria um loop que consiste em três expressões separadas por ponto e vírgula, seguidas por um bloco de instruções a serem executadas no loop.

```c
for (int i = 0; i < 7; i++) {
  print(i);
}
//0123456
```

### **while**

A instrução _while_ cria um loop que executa um bloco de instruções específicas desde que a condição de guarda seja verdadeira. A condição é avaliada antes de executar a instrução.

```c
int n = 0;

while (n < 5) {
  n++;
}
print(n) // 5
```

## Condicionais

### **if...else**

A instrução _if_ executa um bloco de instruções se uma condição especificada for verdadeira. Se a condição for falsa, o programa pode tanto executar outras instruções nas cláusulas opcionais _else if/else_ ou prosseguir sua execução.

```c
function string test(int num) {
  if (a % 2 == 0) {
    return "par";
  } else if (a % 2 != 0) {
    return "ímpar";
  } else {
    return "número inexistente...";
  }
}

print(test(7)); // output: "ímpar"
```

### **switch**

A instrução _switch_ avalia uma expressão, comparando o valor da expressão com uma série de cláusulas _case_ e executa um bloco de instruções após a primeira cláusula _case_ com um valor correspondente, até que uma instrução _break_ seja encontrada. A cláusula _default_ de uma instrução _switch_ será retornada se nenhum caso corresponder ao valor da expressão.

```c
string expression = 'World!';
switch (expression) {
  case 'Foo!':
    print('Hello, Foo!');
    break;
  case 'Brazil!':
  case 'World!':
    print('Hello, World!');
    // output: "Hello, World!"
    break;
  default:
   print("We are not going to say hello to " + expression + ".");
}
```

## Incremento & decremento

| Sintaxe | Descrição                    |
| ------- | ---------------------------- |
| ++      | Incrementa uma variável em 1 |
| --      | Decrementa uma variável em 1 |

## Operadores Lógicos

| Sintaxe | Descrição |
| ------- | --------- |
| &&      | AND       |
| \|\|    | OR        |
| ^^      | EOR       |
| !       | NOT       |

## Operadores aritméticos

| Sintaxe | Descrição                               | Exemplo      |
| ------- | --------------------------------------- | ------------ |
| +       | Soma expressões ou variáveis            | 1 + 1 = 2    |
| -       | Subtrai expressões ou variáveis         | 2 - 1 = 1    |
| \*      | Multiplica expressões ou variáveis      | 10 \* 2 = 20 |
| /       | Divide expressões ou variáveis          | 10 / 2 = 5   |
| \*\*    | Realiza a exponenciação de dois valores | 3 \*\* 2 = 9 |
| %       | Calcula o resto de uma divisão          | 7 % 2 = 1    |

## Operadores Relacionais

Retorna _true_ se a condição for satisfeita ou _false_ caso não seja.
| Sintaxe | Descrição | Exemplo | Resultado
|---------|-------------------------------------|-------------|-----|
| == | Compara dois valores | 1 == 1 | TRUE
| != | Compara se dois valores são diferentes | 2 != 1 | TRUE
| < | Compara se um valor é menor que outro | 10 < 5 | FALSE
| <= | Compara se um valor é menor ou igual a outro | 10 <= 2 | FALSE
| > | Compara se um valor é maior que outro | 7 > 2 | TRUE
| >= | Compara se um valor é menor ou igual a outro | 10 >= 2 | TRUE

## Operadores de atribuição

| Sintaxe | Descrição                        | Exemplo    | resultado |
| ------- | -------------------------------- | ---------- | --------- |
| =       | Variável = Expressão             | int a = 1; | // a = 1  |
| +=      | Variável = Variável + Expressão  | a += 11;   | // a = 12 |
| -=      | Variável = Variável - Expressão  | a -= 2;    | // a = 10 |
| \*=     | Variável = Variável \* Expressão | a \*= 2;   | // a = 20 |
| /=      | Variável = Variável / Expressão  | a /= 2;    | // a = 10 |
| %=      | Variável = Variável % Expressão  | a %= 2;    | // a = 0  |

---

## Lista de Palavras Reservadas

```
-> true
-> false
-> void
-> int
-> char
-> string
-> real
-> boolean
-> null
-> const
-> main
-> for
-> while
-> if
-> else if
-> else
-> switch
-> case
-> default
-> break
-> return
-> fun
-> function
```
