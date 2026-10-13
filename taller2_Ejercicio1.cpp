#include<iostream>
#include<string>
using namespace std;
// Aqui puse las librerias
int main() {
    int segundos;
    cout << "Ingrese un numero entero en segundos:";
    cin >> segundos;
    /* luego defini la variable segundos y con cout puse para 
    que se pudiera ingresar los segundos y con un con lo guarde en la variable de nuevo */
    if (segundos< 0){
        cout << "ERROR\n";
    }
    /* puse un if para que cumpliera la condicion de  que si el valor es negativo, muestra un
    mensaje de error*/
    else{
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        int segundosRestantes = segundos % 60;

        cout << segundos << " segundos equivalen a :  "<< horas << " hora , " << minutos << " minutos y "<<segundosRestantes<< " Segundos ";
        
        
    }

    return 0;
    /* Y por ultimo puse un else por si no se cumple la condicion de arriba y defini las variables horas
    minutos y los segundos restantes y lo ultimo fue imprimir esos valores y poner el return para
    que el programa se retorne en 0*/

    



}