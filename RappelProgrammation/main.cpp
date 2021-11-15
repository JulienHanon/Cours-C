#include <iostream>

using namespace std;

enum class choixmenu {

//    JOUER = 'j';
   // QUITTER = 'q';
};


int main(){

cout << "Bienvenue au juste prix" << endl;
cout << "j: jouer" << endl;
cout << "q: quitter" << endl;

const auto NOMBRE_MAX (10'000);
const auto NOMBRE_MIN (0);


auto choix{'j'}; // autre type, apostrophe simple caractère

cin >> choix;

switch (choix)
    {
    case 'j':
        cout << "C'est parti ! " << endl;
        for (auto aDeviner : {208, 42, 1984})
        {
            auto proposition{0};
            auto nombreTentatives{0};
            do
            {
                cin >> proposition;
                if (proposition >= NOMBRE_MIN && proposition < NOMBRE_MAX)
                {
                    nombreTentatives++;
                if (proposition == aDeviner)
                {
                    cout << "Bravo! " << endl;
                }
                else if (proposition > aDeviner)
                {
                    cout << "C'est moins ! " << endl;
                }
                else
                {
                    cout << "C'est plus ! " << endl;
                }
                }
            } while (proposition != aDeviner);

                if (proposition == aDeviner)
                {
                    cout << "partie terminée! "<< "en " << nombreTentatives << " tentatives" << endl;
                }
                else
                {
                    cout << "partie abandonnée ";
                }
        }
    break;
    default :
        cout << "Au revoir " << endl;
    break;
    }
}

