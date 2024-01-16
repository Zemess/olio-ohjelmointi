#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void game();

int main()
{
    game();
    return 0;
}

void game(int maxnum){
    int tulos=0;
    cout << "Anna luku katto random generaattorille" << endl;
    cin >> maxnum;
    srand(time(0));
    int rnum = rand() % maxnum;

    while (tulos != rnum){
        cout << "arvaa numeroa" << endl;
        cin >> tulos;

        if(tulos == rnum){
            cout << endl;
            cout << "Oikea vastaus, voitit omenan :)" << endl;
            cout << endl;
        }
        else if(tulos < rnum){
            cout << "annoit luvun: " << tulos << endl;
            cout << "Luku on PIENEMPI kuin mita haen, kokeile uudelleen" << endl;
        }
        else if(tulos > rnum){
            cout << "annoit luvun: " << tulos << endl;
            cout << "Luku on SUUREMPI kuin mita haen, kokeile uudelleen" << endl;
        }
    }
}
