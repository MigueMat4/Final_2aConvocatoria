#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par " << endl;
        for (int i = numero - 2; i > 0; i = i - 2)
        {
            if (i > 2) 
            {
                cout << i << ", ";
            }
            else
            {
                cout << i << "." << endl;
            }  
        }
    }
    else
    {
        string numeroString = to_string(numero);
        string numeroAlrevez = "";
        for (int i = numeroString.length() -1; i > -1; i --)
        {
            numeroAlrevez.append(numeroString.substr(i, 1));

        }
        cout << numeroAlrevez;
    }
}