#include <iostream>
using namespace std;

int main()
{
    /*Да се напише програма каде од тастатура ќе се внесе
    трицифрен цел број. Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот*/
    int broj;
    cout<<"Vnesi tricifren cel broj";
    cin>>broj;
    cout<<"Najmnogu znacajna cifra e "<<broj/100<<endl;
    cout<<"Najmalku znacajna cifra e "<<broj%10<<endl;



    return 0;
}