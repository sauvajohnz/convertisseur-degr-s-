#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool continuer(true);
    int choixMenu, temperatureAConvertir, temperatureConvertie;
    cout << "**********************" << endl << "Conversion CELCIUS - FAHRENHEIT" << endl << "**********************" << endl;
    do{
        do{
            cout << "---Menu---" << endl << "1 - <Celcius a Fahrenheit>" << endl << "2 - <Fahrenheit a Celcius>" <<endl << "----------" << endl;
            cin >> choixMenu;

        }while (choixMenu!=1 && choixMenu!=2);

        cout << "Choisissez la temperature a convertir" << endl;
        cin >> temperatureAConvertir;

        if(choixMenu==1)
        {
            temperatureConvertie = temperatureAConvertir * 1.8 + 32;
            cout << temperatureAConvertir << "°C = " << temperatureConvertie << "°F" << endl;
            }
        else if (choixMenu==2)
        {
            temperatureConvertie = (temperatureAConvertir - 32) / 1.8;
             cout << temperatureAConvertir << "°F = " << temperatureConvertie << "°C" << endl;
            }


    }while (!continuer);
}
