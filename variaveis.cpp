# include <iostream>
 
 int main(){
    //declara e inicia variaveis

    int numero = 10;
    
    float pi = 3.14159;

    char letra =  'A';

    std::string nome = "Ana";

    bool isTrue = true;

    // Usando printf para formata e imprimir os valores das variáveis

    printf("Numero: %d\n", numero);

    printf("pi: %.2f\n", pi);

    printf("letra: %c\n", letra);

    printf("nome: %s\n", nome.c_str());

    printf("isTrue: %d\n", isTrue);

    // Retora 0 para indicar sucesso

    return 0; 

 }