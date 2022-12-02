#include "member.h"
#include <iostream>

using namespace std;

void inputData(member &MB){
    int k;
    cout <<"Tuliskan IDNumber: ";
    cin>>MB.IDNumber;
    k = 0;
    while (k < Max){
        cout<<"Poin Bulan ke-"<<k+1<<": ";
        cin>>MB.Poin[k];
        k = k+1;
    };
};

float ratarata(member MB){
    float rata2 = 0;
    for (int i=0; i < Max; i++){
        rata2 = rata2 + MB.Poin[i];
    };
    rata2 = rata2 / Max;
    return rata2;
};

void showData(member MB){
    cout << "Data Member:" << "\n";
    cout << "IDNumber:" << MB.IDNumber << "\n";
    cout << "Poin:";
    for (int i=0;i<Max;i++){
        cout << MB.Poin[i] << " ";
    };
    cout << "\n";

};
