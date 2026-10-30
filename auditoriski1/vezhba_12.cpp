#include <iostream>
using namespace std;

int main() {
    //Да се напише програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg).
    // Програмата на компјутерскиот екран ќе го испечати денот и месецот на раѓање.
    cout<<"Vnesi data na ragjanje vo format (ggmmgggg) \n";
    int data, mesec,den;
    cin>>data;
    den= data / 1000000;
    mesec=(data/10000)%100;
    cout<<"Vashata data na ragjanje e "<<den<<"."<<mesec<<endl;
    return 0;
}