#include <iostream>
#include <string>
using namespace std;
// Puse las libreria
int main (){

    int diasMes = 0;

    int dia;
    cout << "Ingrese un dia: ";
    cin >> dia;

    int mes;
    cout << "Ingrese el numero de un mes: ";
    cin >> mes;

    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;
    /* Defini las variables mes, dia y año  puse un cout para que se pudieran ingresar y por ultimo
    un cin para que lo ingresado se guardara en  las variables*/

    if (anio <= 0) {
        cout << "Fecha no valida: el año debe ser positivo.";
    }
    /* puse este if para que midiera que si el año ingresado es menor o igual a 0 
    pusiera en pantalla fecha no valida*/
    else if (mes < 1 or mes > 12) {
        cout << "Fecha no valida: el mes no existe.";
    }
    /* puse otro condicional para si ingrsar un mes 0 o mayor a 12 
    ponga que el mes no existe*/
    else {
        string nombreMes;
    /* Designe la variable nombreMes para que guardara en ella el nombre del mes que se requiere*/  
        switch (mes) {
            case 1:
            nombreMes = "Enero";
            diasMes = 31;
            break;
            case 3:
            nombreMes = "Marzo";
            diasMes = 31;
            break;
            case 5:
            nombreMes = "Mayo";
            diasMes = 31;
            break;
            case 7:
            nombreMes = "julio";
            diasMes = 31;
            break;
            case 8:
            nombreMes = "Agosto";
            diasMes = 31;
            break;
            case 10:
            nombreMes = "octubre";
            diasMes = 31;
            break;
            case 12:
            nombreMes = "Diciembre";
            diasMes = 31;
            break;
        /* Puse un switch para que se pudiera abrir los casos de cada mes y asi poder decir cuantos dias tiene*/
            case 4:
            nombreMes = "Abril";
            diasMes = 30;
            break;
            case 6:
            nombreMes = "junio";
            diasMes = 30;
            break;
            case 9:
            nombreMes = "Septiembre";
            diasMes = 30;
            break;
            case 11:
            nombreMes = "Noviembre";
            diasMes = 31;
            break;

            case 2:
                if ((anio % 4 == 0 and  anio % 100 != 0) or
                    anio % 400 == 0) {
                    diasMes = 29;
                }
                else {
                    diasMes = 28;
                }
                break;
        
        }
        /* En el caso dos se mide si el año es bisiesto para asi saber si tiene 28 o 29 dias*/
        if (dia >= 1 and dia <= diasMes) {
            cout << "La fecha es valida. \n";
            cout << " El mes de " << nombreMes << " tiene " << diasMes << " dias. \n";
        }
        /* Este if determina si el dia es mayor o igual a 1 y si el dia es menor o igual al los dias
        del mes y asi determinar si la fecha es valida o no y imprimir la informacion*/
        else {
            cout << "Fecha no valida: el dia no existe en ese mes.";
        }
         /* En el caso en el que no se cumpla esta concicion imprimira fecga no valida */
    }
    
    // y el return para  que el programa retorne a 0
    return 0;


}