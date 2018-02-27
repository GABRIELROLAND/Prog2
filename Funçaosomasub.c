#include<stdio.h>

int menu(){
int opc;
do
{
printf("\nCalculadora\n**************\n1-soma\n2-subtracao\n3-sair\n");
scanf("%d",&opc);
}
while(opc<1 || opc>3);
return opc;
}

int soma(int a, int b){
return (a+b);
}
int sub(int a,int b){
return (a-b);
}
int main(){

    int num1=0,num2=0,r=0;
    int x;

    printf("\nEntre com um Numero para A\n");
    scanf("%d",&num1);
    printf("\nEntre com um Numero para B\n");
    scanf("%d",&num2);
    x=menu();
    if(x==1)
    {
     r=soma(num1,num2);
     printf("\nO Resultado eh:%d\n",r);
    }
    if(x==2)
    {
       r=sub(num1,num2);
       printf("\nO Resultado eh:%d\n",r);
    }
    else
    {
        printf("\nAte mais!!");
    }

return 0;
}
