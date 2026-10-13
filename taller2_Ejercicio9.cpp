#include <iostream>
#include <string>
using namespace std;
// Puse las libreria
int main (){

    int saldoInicial;
    cout << "Ingresa tu saldo inicial: ";
    cin >> saldoInicial;
    /* Defini las variable saldo inicial  puse un cout para que se pudieran ingresar y por ultimo
    un cin para que lo ingresado se guardara en  la variable*/
    if (saldoInicial <= 0){
        cout << "#ERROR, su saldo debe ser mayor a 0"; 
    }else {
    /* puse este condicional para si se ingresa un saldo menor o igual a 0 arroje el error*/
        cout << "\n--- MENU ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Consignar dinero\n";
        /* puse cout para que en la pantalla aparecieran estas opciones*/
        int menu;
        cout << "Ingrese la opcion que prefiera: ";
        cin >> menu;
        /* y aqui para que las personas pudieran ingresar la opciones que quisieran*/
        switch (menu) {
        /* aqui utilice un switch para los casos */
            case 1:
            cout << "Su saldo es: " << saldoInicial;
            break;

            case 2:
            int monto;
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;

            if (monto <= 0) {
                cout << "Error: el monto debe ser positivo";
            } 
            else if (monto > saldoInicial) {
                cout << "Error: saldo insuficiente";
            } 
            else {
                saldoInicial = saldoInicial - monto;
                cout << "Nuevo saldo: " << saldoInicial;
            }
                break;

            case 3:
                cout << "Ingrese el monto a consignar: ";
                cin >> monto;

            if (monto <= 0) {
                cout << "Error: el monto debe ser positivo";
            } 
            else {
                saldoInicial = saldoInicial + monto;
                cout << "Nuevo saldo: " << saldoInicial;
            }
                break;

            default:
                cout << "La opcion no es valida";
        }
    }

    return 0;
}

