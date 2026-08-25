#include <stdio.h>

int main()
{
/*Primeira versão*/
printf("Treinamento em programacao.\nLinguagem C.");

printf("\n\n"); /*separando a primeira versão da segunda*/

/*Segunda versão*/
printf("Treinamento em programacao.\n");
printf("Linguagem C.");

printf("\n\n"); /*separando a segunda versão da segunda*/


/*Terceira versão*/
printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
printf("\xBATreinamento em programacao.\xBA\n\xBA%-27s\xBA\n","Linguagem C.");
printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");

return 0;
}
