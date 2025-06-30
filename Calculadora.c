#include  <stdio.h>
#include <stdlib.h>

int main(){
<<<<<<< HEAD
<<<<<<< HEAD
setlocale(LC_ALL,"portuguese");
float num1, nu, res;
char ex;
    system("cls");
	num1:
    printf("Digite o Primeiro N�mero: ");
        if (scanf("%f", &num1) != 1) {
            printf("\n\nEntrada inv�lida! Digite apenas n�meros\n");
=======
int num1, nu, res;
char ex;
    printf("numero 1: ");
        if (scanf("%d", &num1) != 1) {
            printf("Entrada invalida! Digite apenas: numeros\n");
>>>>>>> parent of 1c9d913 (versão 3.0)
            fflush(stdin);
            system("pause");
            system("cls");
            main();} 
        fflush(stdin);
<<<<<<< HEAD
    fator:
    printf("Digite o Operador: ");
        if (scanf(" %c",&ex)!=1 || (ex != '+' && ex != '-' && ex != '*' && ex != '/')){
            printf("\n\nOperador inv�lido! Digite: +, -, * ou /.\n");
=======
    printf("\nfator: ");
        if (scanf(" %c",&ex)!=1 || (ex != '+' && ex != '-' && ex != '*' && ex != '/')){
            printf("Entrada invalida! Digite apenas +, -, * ou /.\n");
>>>>>>> parent of 1c9d913 (versão 3.0)
            fflush(stdin);
            system("pause");
            system("cls");
            main();}
        fflush(stdin);
<<<<<<< HEAD
    num2:
    printf("Digite o Segundo N�mero: ");
        if (scanf("%f", &nu) != 1){
            printf("\n\nEntrada inv�lida! Digite apenas n�meros\n");
=======
    printf("\nnumero 2: ");
        if (scanf("%d", &nu) != 1){
            printf("Entrada invalida! Digite apenas: numeros\n");
>>>>>>> parent of 1c9d913 (versão 3.0)
            fflush(stdin);
            system("pause");
            system("cls");
            main();} 
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
<<<<<<< HEAD
    printf("\nResultado:%.2f\n",res);
    printf("Pressione ENTER para reiniciar a calculadora.");
    getchar();
    system("cls");
    main();
}
=======



    
}
>>>>>>> parent of e82f3b3 (Revert "test")
=======
    printf("\nResultado:%d\n",res);
    system("pause");
    system("cls");
    main();
}
>>>>>>> parent of 1c9d913 (versão 3.0)
