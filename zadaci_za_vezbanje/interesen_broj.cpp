#include <iostream>
using namespace std;

int main() {
    /*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
     Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е
     обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
     Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
     Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).*/
    int a,i;
    cin>>a;
    if (a<=9)
    {
        cout<<"Brojot ne e validen"<<endl;
        return 0;
    }
    for (i=a-1; i>=1; i--)
    {
        int x=i, reverse=0, cifri=0;
        while (x>0)
        {
            reverse=reverse*10+x%10;
            x/=10;
            cifri++;
        }
        if (reverse%cifri==0)
        {
            cout<<i<<endl;
            break;
        }

    }

    return 0;
}