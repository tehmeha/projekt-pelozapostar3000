#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generiraj_broj()
{
    srand(time(0));
    return rand()%3 ;
}

int main()
{
    int oznaka_susreta[10]={7119,7117,7123,7122,7125,7126,7124,7118,1186,7143};
    string naziv[10]={"Mancester utd.-Benfica", "Atletico Madrid-Qarabakh", "Celtic-Bayern", "PSG-Anderlecht", "Sporting L.-Juventus", "Olympiakos-Barcelona", "Roma-Chelsea", "Basel-CSKA Moskva", "Leeds-Derby", "KSV 1919-FAC Bec" };
    double koef_pobjeda1[10]={1.4, 1.12, 9, 1.1, 4.2, 12.5, 2.8, 1.8, 2.45, 1.7 };
    double koef_nerijesenoX[10]={5, 9, 5, 10, 3.6, 5.4, 3.5, 3.45, 3.05, 3.4,};
    double koef_pobjeda2[10]={12, 21, 1.35, 23, 2.1, 1.27, 2.8, 4.85, 2.65, 4.35};


    for( int i=0;i<10;i++)
    {
      cout << oznaka_susreta[i]<<"\t"  << koef_pobjeda1[i] <<"\t" <<koef_nerijesenoX[i] << "\t" << koef_pobjeda2[i]<< "\t" <<  naziv[i] << endl;
    }
    int oznaka_kladjenja;
    cout << "Upisite broj oznake: ";
    cin >> oznaka_kladjenja;

    int mogucnost;
    cout << "Odaberite jednu od mogucnosti (1-pobjedujuje prvi tim, 0-nerijeseno, 2-pobjeduje drugi tim):  ";
    cin >> mogucnost;

    double novac;
    cout << "Odaberite svotu novaca kojeg zelite ulozit:" ;
    cin >> novac;

    double dobitak;
    for(int i=0; i<10; i++)
        if(oznaka_kladjenja==oznaka_susreta[i])
        {
            if(mogucnost==1)
            {
                dobitak = novac*koef_pobjeda1[i];
                cout<<"Vas moguci dobitak je:" << dobitak << "kn" << endl;
            break;
            }
            else if(mogucnost==0)
            {
                dobitak = novac*koef_nerijesenoX[i];
                cout<<"Vas moguci dobitak je:" << dobitak << "kn" << endl;
            }
            else if(mogucnost==2)
            {
                dobitak =novac*koef_pobjeda2[i];
                cout << "Vas moguci dobitak je:" << dobitak << "kn" << endl;
            }
        }
        cout << endl;
        int odigrana_tekma = generiraj_broj();
        if(odigrana_tekma==mogucnost)
        {
        cout << "Listic je dobitan"<< endl;
        cout << "Vas dobitak je: " << dobitak << "kn";
        }
        else
        {
            cout << "Aaaaa glupanneeeee haaahahahahhaha, nisi nista dobio!!" << endl;
        }

return 0;
    }





