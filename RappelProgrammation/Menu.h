#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class ChoixMenu
{
    JOUER = 'a',
    JOUER_FACILE = 'b',
    JOUER_TROIS_PARTIES = 'c',
    QUITTER = 'q',
    SCORES = 's',
    INCORRECT
};

void afficherMenu();


ChoixMenu demanderChoixMenu();

#endif // MENU_H_INCLUDED
