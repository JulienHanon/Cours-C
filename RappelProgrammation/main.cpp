#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;

    auto aDeviner(0);
    auto proposition(0);
    int i = 0;




    for (int j =  1; j < 4; j++){
        cout <<"Partie numero " << j <<endl;
        cout <<"Rentrez le chiffre a deviner :";
        cin >> aDeviner;
        cout << "Devinez le nombre : ";
        cin >> proposition;
        do {

             if (proposition < aDeviner){
                i++;
                cout <<"C'est plus !"<<endl;
                cout << "Devinez le nombre : ";
                cin >> proposition;
                if(proposition > 9999 || proposition < 0){
                    cout << "Veuillez rentrer un nombre compris entre 10000 et 0 :";
                    cin >> proposition;

                }

            }
            else if (proposition > aDeviner){
                i++;
                cout <<"C'est moins !" <<endl;
                cout << "Devinez le nombre : ";
                cin >> proposition;
                if(proposition > 9999 || proposition < 0){
                    cout << "Veuillez rentrer un nombre compris entre 10000 et 0 :";
                    cin >> proposition;

                }
            }

        }while (proposition != aDeviner);

        i++;
        cout << "Vous avez gagne" << endl;
        cout << "Nombre de tentatives : " << i <<endl;
        proposition = 0;
        i = 0;
    }

    cout << "Partie termine"<<endl;


    return 0;


}
