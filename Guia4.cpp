/*EJERCIOCIO 1
Hacer un programa para mostrar por pantalla los n�meros del 1 al 10.
Importante: El programa no tiene ning�n ingreso de datos.

#include <iostream>

using namespace std;

int main(){
    int n =1;

    while (n<11){
        cout << n++ << endl;
    }
    return 0;

}*/
/*EJERCICIO 2
Hacer un programa para mostrar por pantalla los n�meros del 1 al 20 salteando
de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19. Importante: El programa no
tiene ning�n ingreso de datos.

#include <iostream>

using namespace std;

int main(){
    int n =1;

    while (n<21){
        cout << "La variabvle es: " << n << endl;
        n=+3
    }
    return 0;

}*/
/* EJERCICIO 3
Hacer un programa para mostrar por pantalla los n�meros del 20 al 1
en orden decreciente.
Importante: El programa no tiene ning�n ingreso de datos.


#include <iostream>

using namespace std;

int main(){
    int n = 20;

    while (n>0){
        cout << n-- << endl;
    }
    return 0;

}*/
/*EJERCICIO 4
Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se muestre por pantalla los n�meros
entre el 1 y el n�mero ingresado por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.


#include <iostream>

using namespace std;

int main(){
    int n, contador = 1;

    cout << "Ingrese un numero positivo: ";
    cin >> n;

    while (n>=contador){
        cout << contador++ <<endl;
    }
    return 0;

}*/
/* EJERCICIO 5
Hacer un programa para que el usuario ingrese dos n�meros y luego el programa muestre por pantalla los n�meros entre el menor
 y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15; y si el usuario ingresa 25 y 8,
 se mostrar�n los n�meros entre el 8 y el 25.

#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    while (n1<n2){
        cout << n1++ << endl;
    }
    while (n1>n2){
        cout << n2++ << endl;
    }
    return 0;

}*/
/*EJERCICIO 6
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.
#include <iostream>

using namespace std;

int main(){

    return 0;

}


/* EJERCICIO 7
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� M�ximo -5.
#include <iostream>

using namespace std;

int main(){

    return 0;

}
*/
/*EJERCICIO 8
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listar� M�ximo -3 Posici�n 4.
#include <iostream>

using namespace std;

int main(){

    return 0;

}
*/

