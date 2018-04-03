#include<stdio.h>
int main()
{
int a,b,resul=0;
printf("Entre com o primeiro numero inteiro\n");
scanf("%d",&a);
printf("Entre com o segundo numero inteiro\n");
scanf("%d",&b);
resul=maior(a,b);
printf("\nO maior numero eh: %d",resul);

return 0;
}
int maior(int a,int b)
{
    if(a>b)
{
  return a;
}
    else
    {
    return b;
    }
}
