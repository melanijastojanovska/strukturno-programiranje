#include <iostream>
using namespace std;

int main() {
    //Да се напише програма што за внесен број на поени од
    //испит ќе генерира соодветна оценка
    //vidi dali e + ili -
    int poeni, ocenka=0;
    cout<<"Vnesi gi tvoite poeni:";
    cin>>poeni;
    if (poeni<0 || poeni>100)
        cout<<"Vnesovte nevalidni poeni!";
    else if (poeni<=50)
        ocenka=5;
    else if (poeni>50 && poeni<=60)
        ocenka=6;
    else if (poeni>60 && poeni<=70)
        ocenka=7;
    else if (poeni>70 && poeni<=80)
        ocenka=8;
    else if (poeni>80 && poeni<=90)
        ocenka=9;
    else if (poeni>90 && poeni<=100)
        ocenka=10;
    if (poeni>=0 && poeni<=100)
    cout<<"Spored vashite poeni, vashata ocenka e "<<ocenka;
    if (ocenka !=5 && poeni<94)
    {
        if (poeni%10>0 && poeni%10<4)
            cout<<"-";
        else if (poeni%10>7 && poeni%10<10)
            cout<<"+";
    }
    return 0;
}