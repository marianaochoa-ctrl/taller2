
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a;
    cout << "Ingrese el coeficiente a: ";
    cin >> a;

    double b;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;


    double c;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    if (a == 0 and b == 0) {
        cout << "No es una ecuacion de primer ni de segundo grado";
    }
    else if (a == 0) {
        double x = -c / b;
        cout << "Es una ecuacion lineal \n";
        cout << "El valor de x es: " << x << "\n";
    }
    else {
        double discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);

            cout << "Tiene dos raices reales \n";
            cout << "La primera raiz es: " << x1 << "\n";
            cout << "\nLa segunda raiz es: " << x2 << "\n";
        }
        else if (discriminante == 0) {
            double x = -b / (2 * a);

            cout << "Tiene una unica raiz real \n";
            cout << "El valor de x es: " << x << "\n";
        }
        else {
            cout << "Las raices son complejas";
        }
    }

    return 0;
}