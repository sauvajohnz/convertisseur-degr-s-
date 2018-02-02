#include <iostream>
#include <string>

using namespace std;

int main()
{
    char continuerMenu('X');
    bool continuer(true);
    int choixMenu, temperatureAConvertir, temperatureConvertie;
    cout << "********************************************" << endl << endl << "Conversion CELSIUS - FAHRENHEIT" << endl << endl << "********************************************" << endl;
    do{
        do{
            cout << "---Menu---" << endl << "1 - <Celsius a Fahrenheit>" << endl << "2 - <Fahrenheit a Celsius>" <<endl << "----------" << endl;
            cin >> choixMenu;

        }while (choixMenu!=1 && choixMenu!=2);

        cout << "Choisissez la temperature a convertir" << endl;
        cin >> temperatureAConvertir;

        if(choixMenu==1)
        {
            temperatureConvertie = temperatureAConvertir * 1.8 + 32;
            cout << temperatureAConvertir << "Celsius = " << temperatureConvertie << "Fahrenheit" << endl;
        }
        else if (choixMenu==2)
        {
            temperatureConvertie = (temperatureAConvertir - 32) / 1.8;
            cout << temperatureAConvertir << "Celsius = " << temperatureConvertie << "Fahrenheit" << endl;
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
