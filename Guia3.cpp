/* EJERCICIO 1:
Hacer un programa para mostrar por pantalla los números del 1 al 10.
Importante: El programa no tiene ningún ingreso de datos.

#include <iostream>

using namespace std;

int main()
{
   for(int i=1; i<11; i++){
        cout << i << endl;
}
    return 0;
}*/
/* EJERCICIO 2:
Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 valores. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ningún ingreso de datos.

#include <iostream>

using namespace std;

int main(){
    for (int i = 1; i <21; i+=3){
        cout << i << endl;
}
    return 0;
}*/

/*
for(i=inicio; i<fin; i++){
  //Cuerpo del ciclo (instrucciones a repetir)
}
#include <iostream>

using namespace std;

int main(){
    int Pos = 0;
    int Neg = 0;
    int cero = 0;
    int N;

    for (int i=0; i<5; i++){
        cin >> N;
        if (N>0){
            Pos ++;
        }else if (N == 0){
            cero ++ ;
        }else {
            Neg ++;
        }
    }
        cout << "Negativos: " << Neg << endl;
        cout << "Positivos: " << Pos << endl;
        cout << "Ceros: " << cero;


    return 0;
}*/

/* EJERCICIO 3
Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden decreciente.
Importante: El programa no tiene ningún ingreso de datos.

#include <iostream>

using namespace std;

int main(){
    for (int i = 20; i>0 ; i--){
        cout << i << endl;
}
    return 0;
}*/

/* EJERCICIO 3:
Hacer un programa para que el usuario ingrese un número positivo y luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.

#include <iostream>

using namespace std;

int main(){
    int NumP;
    cout << "Ingrese un numero positivo: ";
    cin >> NumP;

    for (int i=1; i<NumP ; i++){
        cout << i << endl;
}
    return 0;
}
*/

/* EJERCICIO 4:
Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los
números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si el
usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.

#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cout << "Ingrese un numero: ";
    cin >> N1;
    cout << "Ingrese otro numero: ";
    cin >> N2;

    if (N1 > N2) {
        for (int i = N2 + 1; i < N1; i++) {
            cout << i << endl;
        }
    } else {
        for (int i = N1 + 1; i < N2; i++) {
            cout << i << endl;
        }
    }

    return 0;
}*/

/* EJERCICIO 6:
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
 y luego solicitar que se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:
 Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
Se listará: Cantidad de Positivos: 0

#include <iostream>
using namespace std;

int main() {
    int N, Num;
    int Pos=0;
    cout << "Ingrese la cantidad de numeros que desea agregar: ";
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> Num;
        if (0<Num){
            Pos++;
        }
    }
    cout << "Los numeros positivos son: "<< Pos;
    return 0;
}*/

/* EJERCICIO 7:
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos,
cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.

#include <iostream>
using namespace std;

int main() {
    int Num;
    int Pos=0;
    int Neg=0;
    int Cero=0;

    for (int i=0; i<10; i++){
        cin >> Num;
        if (0<Num){
            Pos++;
        }else if (0>Num){
            Neg++;
        }else{
            Cero++;
        }
    }
    cout << "Los numeros positivos son: "<< Pos << endl;
    cout << "Los numeros positivos son: "<< Cero << endl;
    cout << "Los numeros positivos son: "<< Neg;

    return 0;
}*/

/*EJERCICIO 8:
Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de
positivos, negativos, y  ceros.

#include <iostream>
using namespace std;

int main() {
    int positivo = 0;
    int negativo = 0;
    int cero = 0;
    for(int i=0; i<10; i++){
        int n;
        cout << "ingresa un numero: " << endl;
        cin >> n;
        if(n>0){
            positivo++;
        }
        else if (n<0){
            negativo++;
        }
        else{
            cero++;
        }
    }
    int total = positivo + negativo + cero;
    positivo = (positivo / total) * 100;
    negativo = (negativo / total) * 100;
    cero = (cero / total) * 100;

    cout << "el porcentaje de positivos es de: "<< positivo << "%. el porcentaje de negativos es de: " << negativo << "&. el de ceros es : " << cero;

    return 0;
}*/

/* EJERCICIO 9:
Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y  ceros.
*/
/*
#include <iostream>
//Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.

using namespace std;

int main(){

    int n;
    int maximo;

    for(int i=0; i<4; i++){
        cout << "ingresa un numero: ";
        cin >> n;
        if(maximo<n){
            maximo = n;
        }
    }
    cout << maximo;

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    float n;
    cout << "Ingresa 10 numeros: ";
    cin >> n;
    float maximo = n;

    for (int i = 0; i < 4; i++) {
        cin >> n;
        if (maximo < n) {
            maximo = n;
        }
    }
    cout << "El maximo es: " << maximo;

    return 0;
}*/
