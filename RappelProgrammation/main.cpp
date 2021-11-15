#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;

    auto aDeviner(0);
    auto nombre(0);
    int i = 0;




    for (int j =  1; j < 4; j++){
        cout <<"Partie numero " << j <<endl;
        cout <<"Rentrez le chiffre a deviner :";
        cin >> aDeviner;
        cout << "Devinez le nombre : ";
        cin >> nombre;
        do {

             if (nombre < aDeviner){
                i++;
                cout <<"C'est plus !"<<endl;
                cout << "Devinez le nombre : ";
                cin >> nombre;
                if(nombre > 9999){
                    cout << "Veuillez rentrer un nombre inferieur a 10000 :";
                    cin >> nombre;

                }

            }
            else if (nombre > aDeviner){
                i++;
                cout <<"C'est moins !" <<endl;
                cout << "Devinez le nombre : ";
                cin >> nombre;
                if(nombre > 9999){
                    cout << "Veuillez rentrer un nombre inferieur a 10000 :"<<endl;
                    cin >> nombre;

                }
            }

        }while (nombre != aDeviner);

        i++;
        cout << "Vous avez gagne" << endl;
        cout << "Nombre de tentatives : " << i <<endl;
        nombre = 0;
        i = 0;
    }

    cout << "Partie termine"<<endl;


    return 0;


}
