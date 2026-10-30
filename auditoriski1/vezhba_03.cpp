#include <iostream>
using namespace std;
int main()
{
    /*
     Да се напише програма која за дадени страни на еден разностран триаголник ќе ги отпечати на
     екран периметарот и квадратот од плоштината (нека се работи со a = 5, b = 7.5, c = 10.2).
    */
    float a=5;
    float b=7.5;
    float c=10.2;
    float l=a+b+c;
    float s=l/2;
    float p=s*(s-a)*(s-b)*(s-c);
    cout<<"Perimetarot e "<<l<<endl;
    cout<<"Kvadratot od ploshtinata e "<<p<<endl;
    return 0;

}