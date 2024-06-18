
// GUIA 2 CONDICIONALES

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

/* EJERCCIO 5
Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.

#include <iostream>

using namespace std;

int main()
{
    int Precio;

    cout << "Ingrese el importe: ";
    cin >> Precio;

    if (Precio < 100){
        int Descuento = Precio - (Precio * 0.5);
        cout << "El precio final es del: " << Descuento;
    }else if (Precio>=100 && Precio<=500){
        int Descuento = Precio - (Precio * 0.10);
        cout << "El precio final es del: " << Descuento;
    }else {
        int Descuento= Precio - (Precio*0.15);
        cout << "El importe total es del: " << Descuento;
    }
    return 0;
}*/
/* EJERCICIO6:
Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.

#include <iostream>

using namespace std;

int main()
{
    int Num1,Num2,Num3;
    cout << "Ingrese 3 numeros: ";
    cout << "Primer numero: ";
    cin >> Num1;
    cout << "Segundo numero: ";
    cin >> Num2;
    cout << "Tercer numero: ";
    cin >> Num3;

    if(Num1 == Num2 && Num2 == Num3){
       cout << "Los tres numeros ingresados son iguales entre si";
    }

    return 0;
}*/

/*EJERCICIO 7:
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.

#include <iostream>

using namespace std;

int main()
{
    int Num1, Num2, Num3;
    cout << "Ingrese tres numeros : ";
    cout << "Numero 1: ";
    cin >> Num1;
    cout << "Numero 2: ";
    cin >> Num2;
    cout << "Numero 3: ";
    cin >> Num3;

    if (Num1 != Num2 && Num2 != Num3 && Num1 != Num3) {
        cout << "Los tres numeros son diferentes entre si";
    }

    return 0;
}*/
/* EJERCICIO 8:
8. Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.

#include <iostream>
using namespace std;

int main() {
int Lado1, Lado2, Lado3;
cout << "Ingrese los lados del triangulo: " << endl;
cout << "Lado 1: ";
cin >> Lado1;
cout << "Lado 2: ";
cin >> Lado2;
cout << "Lado 3: ";
cin >> Lado3;

if (Lado1 == Lado2 && Lado2 == Lado3){
cout << "Es un Equilatero";
}else if (Lado1 == Lado2 || Lado2 == Lado3 || Lado1 == Lado3){
cout << "Es un Isoseles";
}else {
cout << "Es un Escaleno";
}

return 0;
}
*/
/* EJERCICIO 9:
Hacer un programa para ingresar tres números y listar el máximo de ellos. 40

#include <iostream>
using namespace std;

int main() {
int Num1, Num2, Num3;
cout << "Ingrese tres numeros diferentes: " << endl;
cout << "Primer numero: ";
cin >> Num1;
cout << "Numero 2: ";
cin >> Num2;
cout <<  "Numero 3: ";
cin >> Num3;

if (Num1>Num2 && Num2>Num3){
cout << "El numero " << Num1 << " es mayor que el resto";
}else if (Num2>Num3){
cout << "El numero " << Num2 << " es mayor que el resto";
}else {
cout << "El numero " << Num3 << " es mayor que le resto";
}

return 0;
}*/

/*EJERCICIO 10:
 Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos

#include <iostream>
using namespace std;

int main() {
	int Num1, Num2, Num3, Num4, Num5;
	cout << "Ingrese 5 numeros: " << endl;
	cout << "Primer numero: ";
	cin >> Num1;
	cout << "Segundo numero: ";
	cin >> Num2;
	cout <<  "Tercer numero: ";
	cin >> Num3;
	cout <<  "Cuarto numero: ";
	cin >> Num4;
	cout <<  "Quinto numero: ";
	cin >> Num5;

	int Maximo = Num1;
	int Minimo = Num1;

	if(Num2 > Maximo){
		Maximo=Num2;
	}
	if(Num2<Maximo){
		Minimo = Num2;
	}
	if(Num3 > Maximo){
		Maximo=Num3;
	}
	if(Num3<Maximo){
		Minimo = Num3;
	}
	if(Num4 > Maximo){
		Maximo=Num4;
	}
	if(Num4<Maximo){
		Minimo = Num4;
	}
	if(Num5 > Maximo){
		Maximo=Num5;
	}
	if(Num5<Maximo){
		Minimo = Num5;
	}
	cout << "El maximo de los cinco numeros es: " << Maximo << endl;
	cout << "El minumo de los cinco numero es: " << Minimo;

	return 0;
}.*/

/*  EJERCCICIO 11
Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.
#include <iostream>
using namespace std;

int main() {
	int n1, n2,n3, n4, n5;
	cout << "Ingrese 5 numeros: " << endl;
	cout << "Numero 1: ";
	cin >> n1;
	cout << "Numero 2: ";
	cin >> n2;
	cout << "Numero 3: ";
	cin >> n3;
	cout << "Numero 4: ";
	cin >> n4;
	cout << "Numero 5: ";
	cin >> n5;

	int Positivo = 0;
	int Negativo = 0;

	if (n1 > Positivo){
		cout << n1 << " Es positivo" << endl;
	} else if (n1 < Negativo){
		cout << n1 << " Es negativo" << endl;
	}else {
		cout << n1 << " Es igual a 0" << endl;
	}

	if (n2 > Positivo){
		cout << n2 << " Es positivo" << endl;
	} else if (n2 < Negativo){
		cout << n2 << " Es negativo" << endl;
	}else {
		cout << n2 << " Es igual a 0" << endl;
	}

	if (n3 > Positivo){
		cout << n3 << " Es positivo" << endl;
	} else if (n3 < Negativo){
		cout << n3 << " Es negativo" << endl;
	}else {
		cout << n3 << " Es igual a 0" << endl;
	}

	if (n4 > Positivo){
		cout << n4 << " Es positivo" << endl;
	} else if (n4 < Negativo){
		cout << n4 << " Es negativo" << endl;
	}else {
		cout << n4 << " Es igual a 0" << endl;
	}

	if (n5 > Positivo){
		cout << n5 << " Es positivo" << endl;
	} else if (n5 < Negativo){
		cout << n5 << " Es negativo" << endl;
	}else {
		cout << n5 << " Es igual a 0" << endl;
	}

	return 0;
}*/

/* EJERCICIO 12:
Hacer un programa para leer tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8

#include <iostream>
using namespace std;

int main() {
	int N1, N2, N3;

	cout << "Ingrese tres numeros: " << endl;
	cout << "El primer numero: ";
	cin >> N1;
	cout << "El segundo numero: ";
	cin >> N2;
	cout << "El tercer numero: ";
	cin >> N3;

	if (N1>N2 && N1<N3 || N1<N2 && N1>N3) {
		cout << "El valor del medio es: " << N1;
	}else if (N2>N1 && N2<N3 || N2<N1 && N2>N3){
		cout << "El valor del medio es: " << N2;
	}else {
		cout << "El valor del medio es: " << N3;
	}
	return 0;
}*/
/*EJERCICIO 13:
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.


#include <iostream>
using namespace std;

int main() {
    int N1, N2, N3, Menor, Medio, Mayor;
    cout << "Ingrese tres numeros: " << endl;
	cout << "El primer numero: ";
	cin >> N1;
	cout << "El segundo numero: ";
	cin >> N2;
	cout << "El tercer numero: ";
	cin >> N3;
	if (N1<N2 && N1<N3){
        Menor = N1;
        if (N2<N3){
                Medio = N2;
                Mayor = N3;
        }else {
            Medio = N3;
			Mayor = N2;
        }
	} else if(N2<N1 && N2<N3){
	    Menor = N2;
	    if(N1<N3){
			 Medio = N1;
			 Mayor = N3;
	}else{
	    Medio = N3;
	    Mayor = N1;
	}}else {
	    Menor = N3;
		if (N1<N2){
			 Medio = N1;
			 Mayor = N2;

		}else{
			 Medio = N2;
			 Mayor = N1;
		}
	}
	cout << "El numero menor es: " << Menor << endl;
	cout << "El del medio es: " << Medio << endl;
	cout << "El mayor es: " << Mayor;
	return 0;
}*/
/*
//hacer programa que permita calcular el costo total de un proyecto. pedir cantidad de horas (int), tipo de lenguaje (char) y urgente o no (bool)
#include <iostream>

using namespace std;

int main(){


    int horas, precio;
    char lenguaje;
    bool esUrgente;

    cout << "cuantas horas vas a contratar? ";
    cin >> horas;
    cout << "para c++ ingresa 1. Para c hashtag ingresa 2. Para python ingresa 3. Para go ingresa 4";
    cin >> lenguaje;

    switch(lenguaje){
    case '1':
        cout << "seleccionaste c++" << endl;
        precio = horas * 7500;
        break;

    case '2':
        cout << "seleccionaste c hashtag" << endl;
        precio = horas * 6100;
        break;
    case '3':
        cout << "seleccionaste Python" << endl;
        precio = horas * 5400;
        break;
    case '4':
        cout << "seleccionaste go" << endl;
        precio = horas * 5000;
        break;
    default:
        cout << "opcion invalida" << endl;
        break;
    }


    cout << "es urgente? si es urgente selecciona 1, sino 0";
    cin >> esUrgente;
    if (esUrgente){
        cout << "el trabajo es urgente. " << endl;
        precio = precio * 1.20;
    }
    else {
        cout << "el trabajo no es urgente. " << endl;
    }

    cout << "el precio final es de " << precio;


    return 0;
}
*/
/* EJERCICIO 17:
Hacer un programa para ingresar por teclado cuatro números. Si los valores que se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.
#include <iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4;
    cout << "ingrese un numero: ";
    cin >> n1;
    cout << "ingrese otro: ";
    cin >> n2;
    cout << "otro: ";
    cin >> n3;
    cout << "ultimo: ";
    cin >> n4;

    if ((n1 < n2 && n2 < n3 && n3 < n4) || (n4 < n3 && n3 < n2 && n2 < n1)){
        cout << "están ordenados";
    }
    else{
        cout << "están desordenados";
    }

    return 0;
}*/

/* EJERCICIO 18:
Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x 50 = $2950.*/

#include <iostream>

using namespace std;

int main(){

    int kw, precio;
    //Solicita al usuario el ingreso de kilovatios
    cout << "ingrese kw: " << endl;
    cin >> kw;

    //Realiza las preguntas de, dependiendo el ingreso de kilovatios utilizados, es la cuenta que hace
    //para calcular el total a pagar
    if(kw <= 100){
        precio = kw * 10;
    }
    else{
        if(kw >= 101 && kw <=200){
            precio = (100 * 10) + (kw - 100) * 12;
        }
        else{
        if(kw >= 201){
            precio = (100 * 10 + 100 * 12) + (kw - 200) * 15;
        }
    }
    }
    // Muestra por pantalla el total a pagar
    cout << "el precio final es de " << precio;

    return 0;
}
