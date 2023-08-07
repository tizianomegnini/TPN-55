#include <iostream>
#include <string>
using namespace std;

string InvertirPalabra(string palabra) {
    string palabraInvertida = "";
    for (int i = palabra.length() - 1; i >= 0; i--) {
        palabraInvertida += palabra[i];
    }
    return palabraInvertida;
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    getline(cin,palabra);
   
    string palabraInvertida = InvertirPalabra(palabra);
    cout << "Palabra invertida: " << palabraInvertida << endl;

    return 0;
}
