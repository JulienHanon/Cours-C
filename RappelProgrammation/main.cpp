#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;

    auto aDeviner(0); //variable contenant le chiffre que l'utilisateur doit deviner
    auto nombre(0); // variable contenant le chiffre que l'utilisateur rentre

    cin >> aDeviner;

    cout << "Devinez le nombre : ";
    cin >> nombre;

    if (nombre == aDeviner){ // si le nombre rentrer est egal au nombre a deviner affiche vous avez gagne
        cout << "Vous avez gagne";
    }
    else { // si le nombre rentrer est inferieur ou supérieur au nombre a deviner affiche vous avez perdu
        cout << "Vous avez perdu";
    }



    return 0;


}
