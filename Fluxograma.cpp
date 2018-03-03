#include<stdio.h>
int main()
{
int opc,conta,agencia,cartao;
int tentativas=0;
int senha,valor;
int opc2=0;
do
{
printf("\nMenu Principal\n***************\n1-Sacar dinheiro\n2-Voltar ao Menu\n");
scanf("%d",&opc);
if(opc==1)
{
do
{
printf("Digite Agencia:****\n");
scanf("%d",&agencia);
printf("Digite Conta:****\n");
scanf("%d",&conta);
printf("\nNumero do cartao:****\n");
scanf("%d",&cartao);
}
while(opc==2);
}
}
while(agencia!=12345 || conta!=12345 || cartao!=12345 || agencia==0 && conta==0 && cartao==0);//Condiçao para saber se conta agencia e cartao estao com mais de 4 digitos e sao diferentes de nulo//

again:
printf("\nPorfavor Digite a Sua Senha:****\n");
scanf("%d",&senha);
if(senha!=12345)
{
    printf("\nSenha Invalida!");
    tentativas++;
    if(tentativas<4)
    goto again;
    else
    printf("\nSenha Bloqueada!!!");
}
else
{
start:
printf("\nDigite o valor a ser sacado\n");
scanf("%d",&valor);
}

if(valor>0 && valor<=500)
{
printf("\nValor Sacado com Sucesso!");
}
else{
printf("\n Saldo Indisponivel para esse valor de Saque!!\nDeseja Sacar outro Valor?\n1-sim\n2-nao");
scanf("%d",&opc2);
}
if(opc2==1)
{
goto start;
}
if(opc2==2)
{
printf("\nSessao Finalizada\n");
}
return 0;
}
