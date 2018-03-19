#include<stdio.h>

int main()
{
int a,b,funcao(int,int,char);
char op ='S';
a=b=10;
printf("%d",funcao(a,++b,op));
return 0;
}
int funcao(int x, int y , char c)
{
    int teste (char);
    if(teste(c))
    return x*y;
    else
        return 0;
}
int teste (char op)
{
    if(op=='S' || op=='s')
        return 10;
    return 0;
}
