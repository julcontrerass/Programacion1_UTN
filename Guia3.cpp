
//GUIA 3 CICLO EXACTO

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

/* EJERCICIO 4:
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

/* EJERCICIO 5:
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
//EJERCICIO 9
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
/* EJERCICIO 10
#include <iostream>

using namespace std;

int main() {

    float n;
    cout << "Ingresa 10 numeros: ";
    cin >> n;// 0
    float maximo = n;
    //int Ubi;
    int Ubi = 0 //inicia desde uno porque ya se solicito un numero al inicio

    for (int i = 0; i < 4; i++) {
        cin >> n;
        if (maximo < n) {
            maximo = n;
            //Ubi = i + 1;
            Ubi ++ // 1
        }
    }
    cout << "El maximo es: " << maximo << endl;
    cout << "La ubicacion es: " << Ubi;

    return 0;
}*/

/* EJERCICIO 11:
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo
“seguramente” es un negativo, queda totalmente descartada.



#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingresa 10 numeros: ";
    cin >> N;

    int Max = N;
    int Min = N;
    for (int i=0; i<4; i++){
        cout << "Ingrese un numero: ";
        cin >> N;

        if (N>Max){
            Max=N;
        }else if(N<Min){
            Min=N;
        }
    }
    cout << "El maximo es el: "<< Max << endl;
    cout << "El minimo es el: "<< Min;
    return 0;
}
/*EJERCICIO 12:
Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    int MinPos = num;
    int MaxNeg = num;

    for (int i = 1; i<10; i++){
        cin >> num;
        if (num>0){
            if(num<MinPos){
                MinPos = num;
            }
        }else{
            MaxNeg = num;
        }
    }


    cout << "Minimo Positivo: "<< MinPos << endl;
    cout << "Maximo Negativo: "<<MaxNeg;

    return 0;
}*/
/* EJERCICIO 13:
Dada una lista de 10 números informar cual es el máximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    int Max = num;

    for (int i=1; i<10; i++){
        cin >> num;

        if (num % 2 == 0){
            if(num>Max){
                    Max = num;
            }
        }
    }
    cout << "EL numero par mayo es: " << Max;
    return 0;
}*/
/* EJERCICIO 14
Dada una lista de 7 números informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.


#include <iostream>

using namespace std;

int main() {
    int num;
    int prim = 0, seg = 0, ante = 0, ultimo = 0;
    int contador = 0;

    for (int i = 0; i < 7; i++) {
        cin >> num;
        if (num % 2 != 0) {
            contador++;
            if (contador == 1) {
                prim = num;
            } else if (contador == 2) {
                seg = num;
            }else{
                int temp = ante;
                ante = num;
                if(contador > 3){
                    ultimo = temp;
                }
            }
        }
    }

    if(contador >= 3){
        cout << "el primer impar es: " << prim << endl;
        cout << "el segundo impar es: " << seg << endl;
        cout << "el ante último impar es: " << ultimo << endl;
        cout << "el ultimo impar es: " << ante << endl;
    }
    else{
        cout << "no se ingresaron suficientes impares";
    }

    return 0;
}*/

/* EJERCICIO 15:
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado” Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel:
“Conjunto Ordenado” Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”


#include <iostream>

using namespace std;

int main()  {
    int num, Numi, cont =0;
    cout << "Ingrese 8 numeros: " << endl;
    cin >> Numi;
    for (int i=0;i<7;i++){
        cin >> num;
        if (num>=Numi){
           Numi = num;
           cont++;
        }
    }
    if (cont == 7){
        cout << "Conjunto Ordenado" << endl;
    }else  {
        cout << "Conjunto No Ordenado" ;
    }

    return 0;
}*/
/* EJERCICIO 16:
Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados,
 aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -2 el resultado será -2 y -4
Ejemplo D: 100, 20, 5, - 15, 70, el resultado será 100 y 70


#include <iostream>

using namespace std;

int main()  {
    int num, max1, max2;
    cout << "Ingrese el primer número: ";
    cin >> num;
    max1 = num;
    max2 = num;

    for (int i = 1; i < 5; ++i) {
            cout << "Ingrese el siguiente número: ";
            cin >> num;

        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }
    cout << " El numero maximo es: " << max1 << " El siguiente es: " << max2;
    return 0;
}*/

/* EJERCICIO 17:
Hacer un programa para ingresar un número y luego informar todos los divisores de ese número.
Ejemplo A. Si se ingresa 6 se listarán: 1, 2, 3 y 6
Ejemplo B. Si se ingresa 9 se listarán: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.


#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    cout << "Los divisores de " << num << " son: " << endl;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}*/
/*EJERCICIO 18:
Hacer un programa para ingresar un número y luego informar todos los divisores pares de ese número.
Ejemplo A. Si se ingresa 6 se listará: 2 y 6
Ejemplo B. Si se ingresa 8 se listará: 2 y 4.
Ejemplo C. Si se ingresa 11 no se listará nada.

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Ingrese un numero: " endl;
    cin >> n;

    cout << "Los divisores pares del numero: " << n << " son: ";

    for (int i=1; i<= n; i++){
        if (n % i == 0 && i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}*/
/*EJERCICIO 19:
Hacer un programa para ingresar un número y luego informar la cantidad de divisores de ese número.
Ejemplo A. Si se ingresa 6 se listará: 4 divisores.
Ejemplo B. Si se ingresa 9 se listará: 3 divisores.
Ejemplo C. Si se ingresa 11 se listará: 2 divisores.

#include <iostream>

using namespace std;

int main(){
    int n, divisores = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    cout << "La cantidad de dividores del numero: " << n << " es de: ";

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divisores++;
        }
    }

    cout << divisores;

    return 0;
}*/
/* EJERCICIO 20:
Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Hacer un programa para ingresar un número y luego informar con un cartel
aclaratorio si el mismo es un número primo o es número no primo.


#include <iostream>

using namespace std;

int main(){
    int n, divisores = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divisores++;
        }
    }
    if (divisores == 2){
        cout << "El numero " << n << " es un numero primo";
    }else {
        cout << "El numero " << n << " no es un numero primo";
    }
    return 0;
}*/
/*EJERCICIO 21:
Se define como divisores propios de un número a aquellos que son sus divisores excluyendo al número en sí mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.
Se define a un número como perfecto cuando la suma de todos sus divisores propios coincide con el número en sí mismo.
Ejemplo A: 6 es número perfecto pues 1+2+3=6
Ejemplo B: 28 es número perfecto pues 1+2+4+7+14=28
Ejemplo C: 12 no es número perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número perfecto o
no es número perfecto

#include <iostream>

using namespace std;

int main(){
    int n, divisores = 0, acumulador = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            divisores++;
            acumulador += i;
        }
    }
    if (acumulador == n){
        cout << "El numero " << n << " es perfecto";
    }else {
        cout << "El numero " << n << " es imperfecto";
    }
    return 0;
}*/

