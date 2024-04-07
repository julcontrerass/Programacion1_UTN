

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
// EJERCICIO 2:

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
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    a++;
    int b += a;
    int r = b / 2;
    b += r;

    cout << r << a << b;
    return 0;
}
