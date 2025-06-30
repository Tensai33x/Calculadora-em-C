#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
float num1, nu, res;
char ex;
    system("cls");
	num1:
    printf("Digite o Primeiro Número: ");
        if (scanf("%f", &num1) != 1) {
            printf("\n\nEntrada inválida! Digite apenas Números\n");
            fflush(stdin);
            goto num1;} 
        fflush(stdin);
    fator:
    printf("Digite o Operador: ");
        if (scanf(" %c",&ex)!=1 || (ex != '+' && ex != '-' && ex != '*' && ex != '/')){
            printf("\n\nOperador inválido! Digite: +, -, * ou /.\n");
            fflush(stdin);
            goto fator;}
        fflush(stdin);
    num2:
    printf("Digite o Segundo Número: ");
        if (scanf("%f", &nu) != 1){
            printf("\n\nEntrada inválida! Digite apenas Números\n");
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
    printf("Pressione ENTER para reiniciar a calculadora.");
    getchar();
    system("cls");
    main();
}

