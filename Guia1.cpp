

//GUIA NUMERO 1 Estructuras Secuenciales

// EJERCICIO 1:
// Hacer un programa para ingresar por teclado la cantidad de
// horas trabajadas por un operario y el valor que se le paga por
// hora trabajada y listar por pantalla el sueldo que le corresponda.
/*#include <iostream>

using namespace std;

int main(){
    int HS, PG, SU;
    cout << "ingrese la cantidad de horas trabajadas: ";
    cin >> HS;
    cout << "Ingrese valor por hora: ";
    cin >> PG;
    SU= HS * PG;

    cout << "El sueldo correspondiente es de: " << SU;


   return 0;

}*/

/*EJERCICIO 2:
Hacer un programa que solicite por teclado que se ingresen dos n�meros y luego guardarlos en dos variables distintas. A continuaci�n se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.

Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

OPCION 1:

#include <iostream>

using namespace std;

int main(){
	int Num1, Num2;

	cout << "Ingrese un numero: ";
	cin >> Num1;
	cout << "Ingrese otro numero: ";
	cin >> Num2;

	int Num3 = Num1;
	Num1 = Num2;
	Num2 = Num3;

	cout << "Los nuevos valores serian: " << Num1 << " y " << Num2;

	return 0;
}

OPCION 2:

#include <iostream>

using namespace std;

int main(){
	int Num1, Num2;

	cout << "Ingrese un numero: ";
	cin >> Num1;
	cout << "Ingrese otro numero: ";
	cin >> Num2;

	Num1 = Num1 + Num2;
	Num2 = Num1 - Num2;
	Num1 = Num1 - Num2;

	cout << "La ubicacion nueva seria: " << Num1 << " y " << Num2;
	return 0;
}
*/
// EJERCICIO 3:

// Una concesionaria de autos paga a los vendedores un sueldo fijo
// de $5000 m�s $700 de premio por cada auto vendido. Hacer un programa
// que permita ingresar por teclado la cantidad de autos vendidos por un
// vendedor y luego informar por pantalla el sueldo total a pagar.
// Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.
/*#include <iostream>

using namespace std;

int main(){
    int AV, SU;
    cout << "Cantidad de autos vendidos por el vendedor: ";
    cin >> AV;

    SU = AV * 700 + 5000;
    cout << "Sueldo total a pagar: " << SU;

   return 0;

}*/

// EJERCICIO 4:

// Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avi�n y la cantidad de pasajes ocupados y luego
// calcular e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
// Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.

/*#include <iostream>

using namespace std;

int main(){
    float AsientosTotales, CantPasajeros, PorcentajeOcupa, PorcentajeNoOcupa;

    cout << "Ingrese la cantidad de asientos que hay en el avion: ";
    cin >>  AsientosTotales;

    cout << "Ingrese la cantidad de pasajeros: ";
    cin >> CantPasajeros;

    PorcentajeOcupa = CantPasajeros/ AsientosTotales*100;

    PorcentajeNoOcupa = 100 - PorcentajeOcupa;

    cout << "El porcentaje de ocupacion que se informara sera de un: " << PorcentajeOcupa << "% " << "y el porcentaje de no ocupacion sera de un: " << PorcentajeNoOcupa << "%";
   return 0;

}*/

// EJERCICIO 5:
// Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la
// cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
// Ejemplo. Si se ingresa 100, 25 y 75  como cantidades vendidas entonces el programa calcular� e informar� A: 50%, B: 12,50% y C: 37,50%.

/*#include <iostream>

using namespace std;


int main(){
    float A, B, C, VentaTotal, VentaA, VentaB, VentaC;
    cout << "Ingresa la cantidad de alfajores vendidos de la marca A: ";
    cin >> A;
    cout <<"Ingresa la cantidad de alfajores vendidos de la marca B: ";
    cin >> B;
    cout << "Ingresa la cantidad de alfajores vendidos de la marca C: ";
    cin >> C;

    VentaTotal = A + B + C;
    VentaA = A / VentaTotal * 100;
    VentaB = B / VentaTotal * 100;
    VentaC = C / VentaTotal * 100;

    cout << "A:" << VentaA << "% "<< "B:" << VentaB << "% " << "C:" << VentaC << "%";

   return 0;

}*/

// EJERCICIO 6:
// Hacer un programa para que un comercio ingrese por teclado la recaudaci�n en pesos para cada
// una de las cuatro semanas del mes. El programa debe listar la recaudaci�n promedio por semana
// y el porcentaje de recaudaci�n por semana.

// Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listar� como recaudaci�n promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
/*#include <iostream>

using namespace std;

int main(){
    int s1, s2, s3, s4, TT, PromSem, Sem1, Sem2, Sem3, Sem4;
    cout << "ingrese lo recaudado en la primera semana: ";
    cin >> s1;
    cout << "ingrese lo recaudado en la segunda semana: ";
    cin >> s2;
    cout << "ingrese lo recaudado en la tercer semana: ";
    cin >> s3;
    cout << "ingrese lo recaudado en la cuarta semana: ";
    cin >> s4;
    TT = s1 + s2 + s3 + s4 ; // 8000

    PromSem = TT/4; // 2000

    Sem1 = s1/TT*100; // 20
    Sem2 = s2/TT*100; // 15
    Sem3 = s3/TT*100; // 60
    Sem4 = s4/TT*100; // 5
    cout << "Se listara como recaudacion promedio $" << PromSem << " y como porcentajes por semana: " <<  Sem1 <<"%, " << Sem2 << "%, " << Sem3 << "%, "<< Sem4 << "%";

   return 0;

}*/

// EERCICIO 7:
// Hacer un programa para ingresar por teclado el importe de una venta y el
// porcentaje de descuento aplicada a la misma y luego informar por pantalla el importe a pagar.
// Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar ser� de $1020.
// Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar ser� de $800.
/*#include <iostream>

using namespace std;

int main(){
    float ImportVenta, PorcentDesc, TotalImp;
    cout << "Ingrese el importe de la venta: ";
    cin >> ImportVenta;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> PorcentDesc;

    TotalImp = ImportVenta - (PorcentDesc / 100 * ImportVenta);

    cout << "El total a pagar sera de: $" << TotalImp;


   return 0;

}*/

// EJERCICIO 8:
// Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma
// venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
// Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.
// Importante: Le sugerimos que haga una prueba con este ejemplo, ya que muchos lo resuelven y concluyen que el descuento es el 80%. Eso NO es el descuento. Si el descuento fuera de 80% entonces una venta de $1500 se cobrar�a tan solo $300.
// Ejemplo B. Si el importe de la venta sin descuento es $500 y el importe de la venta con descuento es $500 entonces el porcentaje de descuento aplicado fue el 0%.

/*#include <iostream>

using namespace std;

int main(){
    float ImpVenta, ImpDesc, Sum, Desc;
    cout <<"Ingrese el importe de la venta: ";
    cin >> ImpVenta;
    cout << "Ingrese el importe de la venta con descuento: ";
    cin >> ImpDesc;

    Sum = ImpVenta - ImpDesc;
    Desc = (Sum/ImpVenta) * 100;

    cout << "El porcentaje de descuento aplicado fue del: " << Desc << "%";


   return 0;

}*/

// Ejercicio 9:
// Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar
// por pantalla a cuantas horas y minutos equivalen.
// Ejemplo A: si se ingresan 380 minutos el programa mostrar� por pantalla que equivalen a 6 horas y 20 minutos.
// Ejemplo B: si se ingresan 720 minutos el programa mostrar� por pantalla que equivalen a 12 horas y 0 minutos.
// Ejemplo C: si se ingresan 50 minutos el programa mostrar� por pantalla que equivalen a 0 horas y 50 minutos

/*#include <iostream>

using namespace std;

int main(){
    int CantMin, Hs, Minut;
    cout << "Inguesa la cantidad de minutos: ";
    cin >> CantMin;

    Hs = CantMin / 60;
    Minut = CantMin % 60;

    cout << "Hora: " << Hs << " Minuto: " << Minut;

   return 0;

}*/
// EJERCICIO 10:
// Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos d�as y horas equivalen.
// Ejemplo A: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y 2 horas.
// Ejemplo B: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y 0 horas.
// Ejemplo C: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y 20 horas.

/*#include <iostream>

using namespace std;

int main(){
    int CantHs, Dias, Hs;
    cout << "Inguesa la cantidad de Horas: ";
    cin >> CantHs;

    Dias = CantHs / 24;
    Hs = CantHs % 24;

    cout << Dias  << " dias " << Hs  << " horas ";

   return 0;

}*/

// EJERCICIO 11
// Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
// Ejemplo A: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1 d�a, 1 hora y 20 minutos.
// Ejemplo B: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0 d�a, 8 horas y 0 minutos.

/*#include <iostream>

using namespace std;

int main(){
    int CantMin, Dias, Hs, Minut;
    cout << "Inguesa la cantidad de minutos: ";
    cin >> CantMin;

    Dias =  CantMin/ (24 * 60);
    Hs = (CantMin % (24 * 60)) / 60;
    Minut = CantMin % 60;

    cout << "Dias: "<< Dias << " Hora: " << Hs << " Minuto: " << Minut;

   return 0;

}*/

// EJERCICIO 12:
// 12:Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.

// Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
// Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.
// Ejemplo A. Si la cantidad ingresada son 15 huevos, el programa calcular� 1 caja y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
// Ejemplo B. Si la cantidad ingresada son 28 huevos el programa calcular� 2 cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
// Ejemplo C. Si la cantidad ingresada son 8 huevos, el programa calcular�: 0 cajas y 8 sueltos, es decir $120 x 8 = $960.
// Ejemplo D. Si la cantidad ingresada son 200 huevos, el programa calcular�: 16 cajas y 8 sueltos, es decir $1000 x 16 + $120 x 8 = $16960.

/*#include <iostream>

using namespace std;

int main(){
    int CantHuevos, Cajas, Sueltos, Total, TTSueltos;
    cout << "Inguesa la cantidad de huevos comprados : ";
    cin >> CantHuevos;

    Cajas = CantHuevos / 12;
    Sueltos = CantHuevos % 12;

    Total = 1000 * Cajas + 120 * Sueltos;

    cout << "Importe total: " << Total << "$";

   return 0;

}*/

/*EJERCICIO 13:
Hacer un programa para un cajero autom�tico para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.

Ejemplo A: Si el importe a retirar es $2500 se mostrar� por pantalla que se deber�n entregar 2 billetes de $1.000, 1 billete de $500,� 0 billetes de $200 y 0 billetes de $100.

Ejemplo B: Si el importe a retirar es $3400 se mostrar� por pantalla que se deber�n entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.

Ejemplo C: Si el importe a retirar es $300 se mostrar� por pantalla que se deber�n entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.

Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos m�ltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.

#include <iostream>

using namespace std;

int main(){
	int Importe;
	cout << "Ingrese el importe a retirar: ";
	cin >> Importe;

	int Cantidad1000 = Importe/1000;
	Importe = Importe % 1000;

	int Cantidad500= Importe/500;
	Importe = Importe % 500;

	int Cantidad200 = Importe/200;
	Importe = Importe % 200;

	int Cantidad100 = Importe/100;

	cout << "Se debera entregar: " << endl;
	cout << Cantidad1000 << " billetes de 1000" << endl;
	cout << Cantidad500 << " billetes de 500" << endl;
	cout << Cantidad200 << " billetes de 200" << endl;
	cout << Cantidad100 << " billetes de 100";
	return 0;

}*/
/*
EJERCICIO 14:
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.

Ejemplo: se ingresa importe 4500, descuento 40; se deber� mostrar

Importe: 4500, Descuento: 1800, total: 2700.

#include <iostream>

using namespace std;

int main(){
	int Importe, Descuento;
	cout << "Ingrese el importe de la compra: ";
	cin >> Importe;

	cout << "Ingrese el descuento a aplicar: ";
	cin >> Descuento;

	int DescuentoCalculado = (Importe * Descuento) / 100;
	int Total = Importe - DescuentoCalculado;

	cout << "Importe: " << Importe << endl;
	cout << "Descuento: " << DescuentoCalculado << endl;
	cout << "Precio Final: " << Total;
	return 0;

}*/

/* EJERCICIO 15:
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado. Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.

NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.

#include <iostream>

using namespace std;

int main(){
	int TempMaxima, TempMinima;

	cout << "Ingrese la temperatura maxima: ";
	cin >> TempMaxima;

	cout << "Ingrese la temperatura minima: ";
	cin >> TempMinima;

	int AmplitudTermica = TempMaxima - TempMinima;

	cout << "La amplitud termica es: " << AmplitudTermica;

	return 0;

}*/

/* EJERCICIO 16:
El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.


#include <iostream>

using namespace std;

int main(){
	int cantidadDeFrascos, cantPildoras, betamol, micilina, acidoSinitico;

	cout << "Ingrese la cantidad de frascos " << endl;
	cin >> cantidadDeFrascos;


	cantPildoras = cantidadDeFrascos * 75;

	betamol = 45 * cantPildoras;
	micilina = 2 * cantPildoras;
	acidoSinitico = 7 * cantPildoras;

	cout << "Para realizar " << cantidadDeFrascos << " de frascos Se nececita: " << endl;
	cout << betamol << " mg de Betamol" << endl;
	cout << micilina << " grs de micilina" << endl;
	cout << acidoSinitico << " mg de Acido Sinitico";

	return 0;

}
*/
