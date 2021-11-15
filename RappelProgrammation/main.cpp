#include <iostream>

using namespace std;
int main(){

    cout << "Bienvenue au juste prix " << endl;

    auto aDeviner(0);
    auto nombre(0);

    cin >> aDeviner;

    cout << "Devinez le nombre : ";
    cin >> nombre;

    if (nombre == aDeviner){
        cout << "Vous avez gagné !";
    }
    else if (nombre < aDeviner || nombre > aDeviner){
        cout << "Vous avez perdu";
    }



    return 0;


}
