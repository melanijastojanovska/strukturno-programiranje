#include <iostream>
using namespace std;

int main() {
    /*Да се напише програма  со која ќе се отпечати максимумот
     од два броја чии вредности се читаат од тастатура.*/
    int a, b, max;
    cout<<"Vnesi dva broja";
    cin>>a>>b;
    max=(a>b)?a:b;
    cout<<"Maksimumot od dvata broja e "<<max<<endl;
    return 0;
}