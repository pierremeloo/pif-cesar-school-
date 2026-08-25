#include <stdio.h> /*cabeçalho para utilizar o printf()*/

int main ()
{/*Inicio da função main*/

int valor1 = 50; /*Declarando uma variável do tipo inteiro e atribuindo um valor a ela*/
int valor2 = 19; /*Declarando uma segunda variável do tipo inteiro e atribuindo um valor a ela*/
int soma; /*Declarando uma variavel do tipo inteiro que irá armazenar o valor da soma das duas variaveis declaradas antes*/

soma = valor1 + valor2; /*Atribuindo o valor da soma dos dois valores na minha variável soma*/

printf ("A soma dos dois numeros eh igual a: %d",soma); /*Uma saida que mostra o valor da soma dos dois números, utilizei o especificador %d pelo fato da variável soma ser um inteiro*/

return 0;

}/*Fim da função main*/