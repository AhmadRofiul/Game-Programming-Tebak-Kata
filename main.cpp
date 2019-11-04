#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string kata, tebak, jawab;
int jumlah, i, acak, nyawa = 2, menang =0;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    kata = "salatiga";

    cout << "Cheat Kata : "<< kata << endl ;
    //cin >> kata;


    jawab = kata;
    jumlah = kata.size();

    for (i=0;i<jumlah;i++){
        acak = rand() % jumlah;


            char temp = kata[i];
            kata[i] = kata[acak];
            kata[acak]=temp;


    }

    cout << "Kata Acak  : " << kata ;

    while (nyawa >= 0){
        cout << "\n\nMasukkan Tebakan : " ;
        cin >> tebak;
        if(tebak==jawab){
            menang=1;
            break;
        }else{
            cout << "\nTebakan anda Salah \nNyawa anda : "<< nyawa ;
            nyawa--;
        }
    }

    if(menang ==1){
        cout << "\n\nTebakan anda Benar \nAnda menang" << endl;
    }else{
        cout << "\n\nGame Over \nAnda kalah" << endl ;
    }


    return 0;
}
