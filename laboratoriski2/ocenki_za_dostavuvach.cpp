#include <iostream>
using namespace std;

int main() {
    int n,ignored=0,top=0;
    double vkupno=0, valid=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int ocenka;
        cin>>ocenka;
        if (ocenka<1 || ocenka>5)
        {
            ignored++;
            continue;
        }
        else
        {
            if (ocenka==5)
                top++;
            vkupno+=ocenka;
            valid++;
        }
    }
    if (valid==0) {
        cout<<"No valid ratings"<<endl;
        return 0;
    }
    else
    {
        double ar=0;
        ar=vkupno/valid;
        cout<<"Valid ratings: "<<valid<<endl;
        cout<<"Ignored: "<<ignored<<endl;
        cout<<"Five-star ratings: "<<top<<endl;
        cout<<"Average: "<<ar<<endl;
        return 0;
    }
}