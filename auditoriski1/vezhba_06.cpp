#include <iostream>
using namespace std;

int main()
{
    /*
     Да се напише програма за пресметување и печатење на плоштината и
     периметарот на круг. Радиусот на кругот се чита од стандарден влез (тастатура) како децимален број.
    */
    float radius;
    cout<<"vnesi radius na krug:"<<endl;
    cin>>radius;
    float perimetar=2*radius*3.14;
    float ploshtina=radius*radius*3.14;
    cout<<"Perimetarot iznesuva "<<perimetar<<" a ploshtinata "<<ploshtina<<endl;





    return 0;
}