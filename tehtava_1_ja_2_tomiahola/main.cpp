#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum){
    int tries=0;
    int tulos=0;
    srand(time(0));
    int rnum = rand() % maxnum +1;

    while (tulos != rnum){
        cout << "arvaa numeroa" << endl;
        cin >> tulos;

        if(tulos == rnum){
            cout << endl;
            cout << "Oikea vastaus Oli: "<< tulos << endl;
            ++tries;
            cout << endl;
        }
        else if(tulos < rnum){
            cout << "annoit luvun: " << tulos << endl;
            cout << "Luku on PIENEMPI kuin mita haen, kokeile uudelleen" << endl;
            ++tries;
        }
        else if(tulos > rnum){
            cout << "annoit luvun: " << tulos << endl;
            cout << "Luku on SUUREMPI kuin mita haen, kokeile uudelleen" << endl;
            ++tries;
        }
    }
    return tries;
}

int main()
{
    int playernum=0;
    cout << "Anna lukukatto pelille!" << endl;
    cin >> playernum;
    int yritykset = game(playernum);
    cout << "Arvasit: " << yritykset << " Kertaa!" << endl;
    cout << endl;
    return 0;
}
