#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;


    int aDeviner[3] = {25, 34, 34};

    for(int i : aDeviner){


    auto proposition(0);
    int nombreTentative = 0;

        do {
            cout << "Devinez le nombre : ";
            cin >> proposition;

            if(proposition < 9999 || proposition > 0){
             if (proposition < i){
                nombreTentative++;
                cout <<"C'est plus !"<<endl << "Devinez le nombre :";
                cin >> proposition;
            }
            else if (proposition > i){
                nombreTentative++;
                cout <<"C'est moins !" <<endl<<"Devinez le nombre :";
                cin >> proposition;
            }
            }
            else{
               cout<< "Veuillez rentrez un chiffre situer entre 0 et 10000";
            }

        }while (proposition != i);

        i++;
        cout << "Vous avez gagne" << endl<< "Nombre de tentatives : " << nombreTentative <<endl;
        proposition = 0;
        nombreTentative = 0;
    }

    cout << "Partie termine"<<endl;


    return 0;


}
