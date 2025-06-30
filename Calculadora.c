#include  <stdio.h>
#include <stdlib.h>

int main(){
int num1, nu, res;
char ex;
    printf("numero 1: ");
        if (scanf("%d", &num1) != 1) {
            printf("Entrada invalida! Digite apenas: numeros\n");
            fflush(stdin);
            system("pause");
            system("cls");
            main();} 
        fflush(stdin);
    printf("\nfator: ");
        if (scanf(" %c",&ex)!=1 || (ex != '+' && ex != '-' && ex != '*' && ex != '/')){
            printf("Entrada invalida! Digite apenas +, -, * ou /.\n");
            fflush(stdin);
            system("pause");
            system("cls");
            main();}
        fflush(stdin);
    printf("\nnumero 2: ");
        if (scanf("%d", &nu) != 1){
            printf("Entrada invalida! Digite apenas: numeros\n");
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
    printf("\nResultado:%d\n",res);
    system("pause");
    system("cls");
    main();
}