
//GUIA 4 CICLO INEXACTO

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
//EJERCICIO 6
//Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
//Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
//Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.
/*#include <iostream>

using namespace std;

int main(){

    int num=1, contPos=0,contNeg=0;
    cout << "ingrese los numeros que quiera (ingrese 0 para finalizar)" << endl;
    while (num != 0){
        cin >> num;

        if (num>0){
            contPos++;
        }else if (num<0){
            contNeg++;
        }
    }

    cout << "positivos: " << contPos << " Negativos: " << contNeg;
    return 0;
}*/


/* EJERCICIO 7
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� M�ximo -5.
#include <iostream>

using namespace std;

int main(){

    int num, numMayor;
    cout << "ingrese los numeros que quiera (ingrese 0 para finalizar)" << endl;
    cin >> num;
    numMayor=num;
    while (num != 0){
        cin >> num;

        if (num>numMayor && num!=0){
            numMayor=num;
        }
    }

    cout << "El numero mayor es: " << numMayor;
    return 0;
}*/

/*EJERCICIO 8
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listar� M�ximo -3 Posici�n 4.
#include <iostream>

using namespace std;

int main()
{

    int num, numMayor,conttDeIngresos=0, ubiDelMayor;
    cout << "ingrese los numeros que quiera (ingrese 0 para finalizar)" << endl;
    cin >> num;
    numMayor=num;
    while (num != 0)
    {
        conttDeIngresos++;
        cin >> num;
        if (num>numMayor && num!=0)
        {
            numMayor=num;
            ubiDelMayor=conttDeIngresos;
        }
    }

    cout << "El numero mayor es: " << numMayor << " ubicado en la posicion: " << ubiDelMayor+1;
    return 0;
}
*/

//EJERCICIO 9
//Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo de los pares.
//
//Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listar� M�ximo 36.
//Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listar� M�ximo 4.
//Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listar� M�ximo -8.
/*
#include <iostream>

using namespace std;

int main()
{

    int num, numMayor;
    cout << "ingrese los numeros que quiera (ingrese 0 para finalizar)" << endl;
    cin >> num;
    numMayor=num;
    while (num != 0)
    {
        cin >> num;

        if (num % 2 ==0)
        {
            if (num>numMayor && num != 0 )
            {
                numMayor=num;
            }
        }
    }

    cout << "El numero mayor de los pares es: " << numMayor ;
    return 0;
}
*/

/* EJERCICIO 10
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y el m�nimo.

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listar� M�ximo 42 M�nimo -15.

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listar� M�ximo 42 M�nimo 5.

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listar� M�ximo -5 M�nimo -42.

Observe que los ejemplos B y C dejan en claro que la suposici�n de que el m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un negativo, es incorrecta.


#include <iostream>

using namespace std;

int main()
{

    int num, numMayor, numMenor;
    cout << "ingrese los numeros que quiera (ingrese 0 para finalizar)" << endl;
    cin >> num;
    numMayor=num;
    numMenor=num;
    while (num != 0)
    {
        cin >> num;

        if (num>numMayor && num != 0)
        {
            numMayor=num;
        }
        else if (num<numMenor && num != 0)
        {
            numMenor = num;
        }


    }

    cout << "El numero mayor es: " << numMayor << " y el numero menor es: " << numMenor;
    return 0;
}


/* EJERCICIO 11
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, informar el m�ximo de los negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
M�ximo Negativo: -3.
M�nimo Positivo: 2.
*/


