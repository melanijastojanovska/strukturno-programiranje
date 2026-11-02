#include <iostream>
using namespace std;

int main() {
    /*Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е
    мала или голема буква печати 1 или 0, соодветно.
    ПОМОШ: Користете логички и релациски оператори за тестирање на ASCII вредноста на знакот.
    Бонус: Направете проверка дали знакот е цифра*/
    char bukva;
    int odgovor;
    cout<<"Vnesi znak";
    cin>>bukva;
    odgovor=(bukva>='a')&&(bukva<='z');
    cout<<odgovor<<endl;
    if ((bukva>='0')&&(bukva <='9'))
    cout<<"Znakot ne e cifra";
    return 0;
}