#include <iostream>
using namespace std;

int main() 
{
    //Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква.
    char c;
    cout<<"Vnesi golema bukva"<<endl;
    cin>>c;
    cout<<"Nejzinata mala bukva e "<< char (c+('a'-'A'))<<endl;
    return 0;
}