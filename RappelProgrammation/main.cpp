#include <iostream>

using namespace std;

enum class CHOIXMENU {
    JOUER = 'j',
    QUITTER = 'q',
    INCORRECT
};


int main(){

cout << "Bienvenue au juste prix" << endl;
cout << static_cast<char>(CHOIXMENU::JOUER) <<" : jouer" << endl;
cout <<static_cast<char>(CHOIXMENU::QUITTER) <<" : quitter" << endl;


const auto NOMBRE_MAX (10'000);
const auto NOMBRE_MIN (0);


auto choix{CHOIXMENU::JOUER}; // autre type, apostrophe simple caractère

char saisieChoix;

cin >> saisieChoix;

if(saisieChoix == static_cast<char>(CHOIXMENU::JOUER) || static_cast<char>(CHOIXMENU::QUITTER))
{
    choix = static_cast<CHOIXMENU>(saisieChoix);
}
else
{
    choix = CHOIXMENU::INCORRECT;
}

switch (choix)
    {
    case CHOIXMENU::JOUER:
        cout << "C'est parti ! " << endl;
        for (auto aDeviner : {208, 42, 1984})
        {
            auto proposition{0};
            auto nombreTentatives{0};
            do
            {
                cin >> proposition;
                if (proposition >= NOMBRE_MIN && proposition < NOMBRE_MAX){
                    nombreTentatives++;
                    if (proposition == aDeviner){
                        cout << "Bravo! " << endl;
                    }
                    else if (proposition > aDeviner){
                        cout << "C'est moins ! " << endl;
                    }
                    else{
                        cout << "C'est plus ! " << endl;
                    }
                }
            } while (proposition != aDeviner);

                if (proposition == aDeviner){
                    cout << "partie terminée! "<< "en " << nombreTentatives << " tentatives" << endl;
                }
                else{
                    cout << "partie abandonnée ";
                }
        }
    break;
    case CHOIXMENU::QUITTER:
        cout << "Au revoir " << endl;
    break;
    case CHOIXMENU::INCORRECT:

    break;
    }
}

