#include<string.h>
int main()
{
char nome1[10];
char nome2[10];
char conca[20]="\0";
int compara;
int tam,tam2;


printf("\nDigite seu Nome:\n");
scanf("%s",nome1);
printf("\nDigite o Segundo Nome:\n");
scanf("%s",nome2);

compara=strncmp(nome1,nome2,10);
if(compara>0)
{
    printf("\n%s e maior que %s Alfabeticamente",nome2,nome1);
}
else if(compara<0)
{
printf("\n%s e maior que %s Alfabeticamente",nome1,nome2);
}
else
{
printf("\n %s e Igual a %s Alfabeticamente",nome1,nome2);
}
tam=strlen (nome1);
tam2=strlen (nome2);
printf("\nO tamanho de %s é:%d\n\nO tamanho de %s e:%d",nome1,tam,nome2,tam2);
strcat(conca ," ");
strcat(conca,nome1);
strcat(conca,nome2);
printf("\n%s",conca);

return 0;
}
