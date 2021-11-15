#include <iostream>

using namespace std;
int main(){


    int aDeviner[3] = {25, 34, 34};
    int n = 0;
    cout << "Selectionner un jeu :"<< "1 - Juste Prix";
    cin >> n;

       switch (n)
    {

    case 1:
        cout << "Bienvenue au juste prix " << endl;
            for(int i : aDeviner){


    auto proposition(0);
    int nombreTentative = 0;


        do {

            cout << "Devinez le nombre : ";
            cin >> proposition;

            if(proposition < 10000 || proposition > 0){

                if (proposition < i){
                    nombreTentative++;
                    cout <<"C'est plus !"<<endl;
                }
                else if (proposition > i){
                    nombreTentative++;
                    cout <<"C'est moins !" <<endl;
                }
            }
            else{
               cout<< "Veuillez rentrez un chiffre situer entre 0 et 10000";
            }

        }while (proposition != i);


        cout << "Vous avez gagne" << endl<< "Nombre de tentatives : " << nombreTentative <<endl;
        proposition = 0;
        nombreTentative = 0;
    }

    cout << "Partie termine"<<endl;

    case 2:
       cout <<"non";
        break;
    }




    return 0;


}
