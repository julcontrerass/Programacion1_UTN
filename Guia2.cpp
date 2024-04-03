/*EJERCICIO 1:
Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL

#include <iostream>

using namespace std;

int main(Ejercicio1)
{
    float num;
    cout << "Ingrse un numero: ";
    cin >> num;
    if (num >= 0){
        cout << "el numero ingresado es positivo";
    } else {
        cout << "El numero ingresado es negativo ";

    };

    return 0;
}*/
/* EJERCICIO 2:
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.

#include <iostream>

using namespace std;

int main() {
    int Num1, Num2;

    // Solicitar al usuario que ingrese los dos números
    cout << "Ingrese el primer numero: ";
    cin >> Num1;
    cout << "Ingrese el segundo numero: ";
    cin >> Num2;

    // Verificar si el primer número es múltiplo del segundo
    if (Num1 % Num2 == 0) {
        cout << Num1 << " es multiplo de " << Num2 ;
    } else {
        cout << Num1 << " no es multiplo de " << Num2;
    }
    return 0;
}
*/

/*EJERCICIO 3
Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

#include <iostream>

using namespace std;

int main()
{
    int Num1;
    cout << "Ingrese un numero: ";
    cin >> Num1;

    if (Num1 % 2 == 0){
        cout << "Este numero es par ";
    } else {
        cout << "Este numero es impar ";
    }

    return 0;
}*/
/* EJERCICIO 4
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos.
Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.

#include <iostream>

using namespace std;

int main()
{
    int Num1, Num2;
    cout << "Ingrese un numero: ";
    cin >> Num1;
    cout << "Ingrese otro numero: ";
    cin >> Num2;
    if (Num1 >= Num2){
        int Resta = Num1 - Num2;
        cout << Resta;
    }else {
        int Resta = Num2 - Num1;
        cout << Resta;
    }

    return 0;
}*/
