#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
float num1, nu, res;
char ex;
	num1:
    printf("\nDigite o Primeiro N�mero: ");
        if (scanf("%f", &num1) != 1) {
            printf("\n\nEntrada inv�lida! Digite apenas n�meros\n");
            fflush(stdin);
            goto num1;} 
        fflush(stdin);
    fator:
    printf("\nfator: ");
        if (scanf(" %c",&ex)!=1 || (ex != '+' && ex != '-' && ex != '*' && ex != '/')){
            printf("\n\nOperador inv�lido! Digite: +, -, * ou /.\n");
            fflush(stdin);
            goto fator;}
        fflush(stdin);
    num2:
    printf("\nDigite o Segundo N�mero: ");
        if (scanf("%f", &nu) != 1){
            printf("\n\nEntrada inv�lida! Digite apenas n�meros\n");
            fflush(stdin);
            goto num2;} 
        fflush(stdin);
switch (ex){
    case '+':
        res = num1 + nu; 
        break;
    case '/':
        res = num1 / nu;    
        break;
    case '*':
        res = num1 * nu;       
        break;
    case '-':
        res = num1 - nu;       
        break;  
    default:   
        break;
    }
    printf("\nResultado:%.2f\n",res);
    system("pause");
    system("cls");
    main();
}
