#include <iostream>
using namespace std;

int main() {
    int ucenici,vkupno=0, fm=0,bez=0;
    cin>>ucenici;
    for (int i=1; i<=ucenici; i++)
    {
        int ocenki;
        int brojach=0;
        while (true)
        {
            cin>>ocenki;
            if (ocenki==0)
                break;
            vkupno++;
            brojach++;
            if (ocenki==5)
                fm++;
        }
        if (brojach==0)
            bez++;
    }
    cout<<"Total marks: "<<vkupno<<endl;
    cout<<"Failing marks: "<<fm<<endl;
    cout<<"Students without marks: "<<bez<<endl;

    return 0;
}