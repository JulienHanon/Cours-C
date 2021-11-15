#include <iostream>

using namespace std;

int main()
{
    auto maVariable(42), maVariable2(43), maVariable3(44);

    int &maReference(maVariable3),&maReference2(maVariable3) ; // permet de declarer maVariable3 dans une reference (ne jamais utiliser auto)

    //cout << maReference<<endl; // renvoie la valeur de la variable

    maReference2 = 57;

    cout << maVariable3<<endl;

    auto maVariable4(45);

    int *monPointeur(&maVariable4);

    cout << monPointeur <<endl;
    cout << *monPointeur <<endl; // acceder a la valeur pointée





}

