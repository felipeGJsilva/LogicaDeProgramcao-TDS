# include <iostream>

int main(){

    //definindo os numeros para as operações

    int num1 = 10;
    int num2 = 5;

    // realizando as operações matemmáticas

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    int resto = num1 % num2; //resto da divisão

    // imprimindo os resultados
    
    printf("Soma: %d + %d = %d\n", num1,num2, soma);
    printf("Subtração: %d - %d = %d\n", num1,num2, subtracao);
    printf("Multiplicação: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("Divisão: %d / %d =%d (Quiociente), resto: %d\n", num1, num2, divisao, resto);

    return 0;
}