
/*  ONDE OS CÓDIGOS SÃO FEITOS */
#include "MathFunc.h"

int fatorial(int x){
    int fat = 1;
    while (x !=1 )
    {
        fat*=x;
        x--;
    }
    
}

int somatorio(int x){
    int res = 0;
    for(int i = 0; i<=x; i++){
        res += i;
    }

    return res;
}

int soma(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int multi(int x, int y){
    return x*y;
}

int div(int x, int y){
    if (x == 0) x = 1;
    if (y == 0) y = 1;
    return x/y;
}


int potencia(int x, int y){
    if (y == 0) return 1;
    int pot = 1;
    for(y; y>0; y--){
        pot *= x;
    }
    return pot;
}


double porcentagem(int x, int y){
    double porcent = (x/100)*y;
    return porcent;
}

