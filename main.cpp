#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    char continuerMenu('X');
    bool continuer(true), continuerChoixMenu(true);
    string choixMenu;
    double temperatureAConvertir, temperatureConvertie;
    int i(0);
    do{
        do{
            if(i == 1)
                system("cls");
            i = 1;
            continuerChoixMenu = true;
            temperatureAConvertir = 0;
            cout << "********************************************" << endl << endl << "Conversion CELSIUS - FAHRENHEIT/KELVIN" << endl << endl << "********************************************" << endl;
            cout << "---Menu---" << endl << "1 - <Celsius a Fahrenheit>" << endl << "2 - <Fahrenheit a Celsius>" <<endl;
            cout << endl << "3 - <Celsius a Kelvin> " << endl << "4 - <Kelvin a Celsius> " << endl << "----------" << endl;
            cin >> choixMenu;
            if (choixMenu=="1" || choixMenu=="2" || choixMenu=="3" || choixMenu=="4")
                continuerChoixMenu = false;

        }while (continuerChoixMenu);

        cout << "Choisissez la temperature a convertir" << endl;
        cin >> temperatureAConvertir;

        if(choixMenu=="1")
        {
            temperatureConvertie = temperatureAConvertir * 1.8 + 32;
            cout << temperatureAConvertir << "Celsius = " << temperatureConvertie << "Fahrenheit" << endl;
        }
        else if (choixMenu=="2")
        {
            temperatureConvertie = (temperatureAConvertir - 32) / 1.8;
            cout << temperatureAConvertir << "Fahrenheit = " << temperatureConvertie << "Celsius" << endl;
        }
        else if (choixMenu=="3")
        {
            temperatureConvertie = temperatureAConvertir + 273.15;
            cout << temperatureAConvertir << "Celsius = " << temperatureConvertie << "Kelvin" << endl;
        }
        else if (choixMenu=="4")
        {
            temperatureConvertie = temperatureAConvertir - 273.15;
            cout << temperatureAConvertir << "Kelvin = " << temperatureConvertie << "Celsius" << endl;
        }
        do{
            cout << "Voulez vous continuer ? (O/N)" << endl;
            cin >> continuerMenu;

            if(continuerMenu=='O')
                cout << endl;
            else if(continuerMenu=='N')
                continuer = false;
            else
                cout << "Vous avez mal repondu " << endl;

        }while(continuerMenu!='O' && continuerMenu!='N');



    }while (continuer);
}
