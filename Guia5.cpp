
//GUIA 5 CILOS COMBINADOS

/*EJERCICIO 1
Hacer un programa para ingresar una lista de 10 números y luego informar cuántos de los números ingresados son perfectos. Se informa 1 resultado al final.

#include <iostream>
using namespace std;

int main() {

    int numero;
    int contadorPerfectos = 0;

    // Ingresar y verificar 10 números uno por uno
    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numero;

        int suma = 0;
        for (int j = 1; j <= numero / 2; j++) {
            if (numero % j == 0) {
                suma += j;
            }
        }
        if (suma == numero) {
            contadorPerfectos++;
        }
    }

    // Informar el resultado
    cout << "Cantidad de numeros perfectos ingresados: " << contadorPerfectos << endl;

    return 0;
}*/
