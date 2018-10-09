#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int Q1(){
    printf("1. Questao 2 da prova");
    printf("\n2. Questao 3 da prova");
    printf("\nInsira a opçao desejada: ");
    scanf("%d",&n);

    switch(n){
        case 1:
            system("cls");
            Q2();
            break;
        case 2:
            system("cls");
            Q3();
            break;
        default:
            printf("\nInsira um numero válido\n");
            system("pause");
            system("cls");
            Q1();
    }
}


int Q2(){
    int qtdv;
    float pu,ptotal;
    printf("\nInsira a quantidade vendida: ");
    scanf("%d", &qtdv);
    printf("\nInsira preço unitário: ");
    scanf("%f", &pu);
    ptotal = qtdv*pu;
    if((ptotal>100)&&(ptotal<=1000)){
        ptotal = ptotal*(0.95);
    }
    if(ptotal>1000){
        ptotal = ptotal*(0.90);
    }
    printf("\n Valor a pagar = $%.2f", ptotal);
    return 0;
}

int Q3(){
    int idade,qtdhomens=0,qtdmulheres=0,sexo;
    int cpf;
    float media=0,salario,salariom=0;
    printf("\nInsira o CPF: ");
    scanf("%d", &cpf);
    while(cpf>0){
        printf("\nInsira a idade: ");
        scanf("%d", &idade);
        while((idade<18)||(idade>100)){
            printf("\nInsira uma idade válida\n");
            scanf("%d", &idade);
        }
        printf("\n1. Homem");
        printf("\n2. Mulher");
        printf("\nInsira o sexo: ");
        scanf("%d", &sexo);
        if(sexo==1){
            printf("\nInsira o salário: ");
            scanf("%f", &salario);
            if(salario<=2000.0){
                qtdhomens=qtdhomens+1;
            }
        }
        if(sexo==2){
            printf("\nInsira o salário: ");
            scanf("%f", &salario);
            salariom=salariom+salario;
            qtdmulheres++;
        }
        system("cls");
        printf("\nInsira o CPF: ");
        scanf("%d", &cpf);
    }
    salariom=salariom/qtdmulheres;
    printf("\nA media do salário das mulheres é: %.2f", salariom);
    printf("\nA quantidade de homens com salário menor que $2000,00 é: %d", qtdhomens);
    return 0;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int n=0;
    Q1();
    do{
        printf("\nDeseja executar outro programa?");
        printf("\n1.Sim");
        printf("\n2.Nao\n");
        scanf("%d",&n);
        system("cls");
        if(n==1){
            Q1();
        }else{
            printf("Fim do programa");
            return 0;
        }
    }while(n!=2);
}

