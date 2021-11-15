#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;

    auto aDeviner(2456); //variable contenant le chiffre que l'utilisateur doit deviner
    auto nombre(0); // variable contenant le chiffre que l'utilisateur rentre
    int i = 0;

    //cout <<"Rentrez le chiffre a deviner :";

    //cin >> aDeviner;

    cout << "Devinez le nombre : ";
    cin >> nombre;

    do {
        if (nombre == aDeviner){
            i++;
            cout << "Vous avez gagne";
            cout << "Nombre de tentatives : ";
            cout << i;
        }
        else if (nombre < aDeviner){
            i++;
            cout <<"C'est plus !"<<endl;
            cout << "Devinez le nombre : ";
            cin >> nombre;
        }
        else if (nombre > aDeviner){
            i++;
            cout <<"C'est moins !" <<endl;
            cout << "Devinez le nombre : ";
            cin >> nombre;
        }

    }while (nombre != aDeviner);


    i++;
    cout << "Vous avez gagne" << endl;
    cout << "Nombre de tentatives : ";
    cout << i;


    return 0;


}
