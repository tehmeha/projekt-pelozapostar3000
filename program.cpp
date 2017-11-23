#include<iostream>
using namespace std;
int main ()
{
    int oznaka_susreta [10] = {7119, 7117, 7123, 7122, 7125, 7126, 7124, 7118,1186, 7143};

    string naziv [10] = {"Mancester utd.-Benfica", "Atletico Madrid-Qarabakh", "Celtic-Bayern", "PSG-Anderlecht", "Sporting L.-Juventus", "Olympiakos-Barcelona", "Roma-Chelsea", "Basel-CSKA Moskva", "Leeds-Derby", "KSV 1919-FAC Bec"};
    double koef_pobjeda1[10]={1.4, 1.12, 9, 1.1, 4.2, 12.5, 2.8, 1.8, 2.45, 1.7 };
    double koef_nerijesenoX[10]={5, 9, 5, 10, 3.6, 5.4, 3.5, 3.45, 3.05, 3.4 };
    double koef_pobjeda2[10]={12, 21, 1.35, 23, 2.1, 1.27, 2.8, 4.85, 2.65, 4.35};

    for (int i=0; i< 10; i++)
    {
        cout << oznaka_susreta[i]<<"\t" << koef_pobjeda1[i] <<"\t" <<koef_nerijesenoX[i] << "\t" << koef_pobjeda2[i]<< "\t" << naziv[i]<<   endl;

    }
    int oznaka_kladjena;
    cout << "upisite broj oznake:";
    cin >> oznaka_kladjena;

    int mogucnost;
    cout << "Odaberite jednu od mogucnosti: 1-pobjeduje prvi tim, 0-nerijeseno, 2- pobijeduje drugi tim ";
    cin >> mogucnost;

    double novac;
    cout << "Odaberite svotu novaca kojeg zelite ulozit:";
    cin >> novac;


     for(int i=0; i<10; i++)
        if(oznaka_kladjena==oznaka_susreta[i])
        {
            if(mogucnost==1)
            {
            cout<<"Vas dobitak je:" << novac*koef_pobjeda1[i];
            break;
            }
            else if(mogucnost==0)
            {
                cout<<"Vas dobitak je:" << novac*koef_nerijesenoX[i];
            }
            else if(mogucnost==2)
            {
                cout << "Vas dobitak je:" << novac*koef_pobjeda2[i];
            }
        }
return 0;
    }





