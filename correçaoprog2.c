
 #include <stdio.h>

 void converte(int *num)
{
int resto, bin[10],i=0,j=0;

while(*num!=1)
{
resto = *num % 2;
*num = *num / 2;
bin[i] = resto;
i++;
}
bin[i] = *num;
for(j=i;j>=0;j--)
{
printf("%d", bin[j]);
}
printf("\n\n\n");
}
int main(){

int  num=0;

printf("Entre com um numero: ");
scanf("%d" ,&num);
converte(&num);
  return 0;
}
