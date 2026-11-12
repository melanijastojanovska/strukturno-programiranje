#include <iostream>
using namespace std;
/*Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број
или 0 треба да се печати „Invalid input“. Треба да се определи дали помалиот број “е парен
еквивалент” од поголемиот број.Еден број “е парен еквивалент” на друг број, ако и само ако
неговите цифри се наоѓаатна парните позиции од другиот број, во истиот редослед. Соодветно да
се испечатат пораки „PAREN“ и „NE“. Позициите треба да се сметаат оддесно-налево
(најмалку значајната цифра е на позиција 1)*/
int main() {
    int a,b;
    cin>>a>>b;
    if (a<=0||b<=0)
    {
    cout<<"Invalid input"<<endl;
    return 0;
    }
    int golem=a, mal=b;
    if (b>a)
    {
        golem=b;
        mal=a;
    }
    int pozicija=1;
    int mnozitel=1;
    int nov=0;
    while (golem>0)
    {
        int cifra=golem%10;
        if (pozicija%2==0)
        {
            nov+=cifra*mnozitel;
            mnozitel*=10;
        }
        golem=golem/10;
        pozicija++;
    }
    if (nov==mal)
        cout<<"PAREN"<<endl;
    else
        cout<<"NE"<<endl;

    return 0;
}