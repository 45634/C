#include <stdio.h>

int suma(); //Declaración de función

int main() {
    printf("El resultado de la suma es:  %d\n", suma());
    return 0;
}

int suma(){ //Implementación de función
    int entero1 = 3;
    int entero2 = 30;
    int resultado = 0;
    resultado = entero1 + entero2;
    return resultado;
}



