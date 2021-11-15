#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;

    auto aDeviner(0); //variable contenant le chiffre que l'utilisateur doit deviner
    auto nombre(0); // variable contenant le chiffre que l'utilisateur rentre

    cout <<"Rentrez le chiffre a deviner :";

    cin >> aDeviner;

    cout << "Devinez le nombre : ";
    cin >> nombre;

    while (nombre != aDeviner){

         if (nombre < aDeviner){
            cout <<"C'est plus !";
            cout << "Devinez le nombre : ";
            cin >> nombre;
        }
        else if (nombre > aDeviner){
            cout <<"C'est moins !";
            cout << "Devinez le nombre : ";
            cin >> nombre;
        }

    }

    cout << "Vous avez gagne !";



    return 0;


}
