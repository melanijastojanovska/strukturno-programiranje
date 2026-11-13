#include <iostream>
using namespace std;

int main() {
    int sostojba, transakcii,deposits=0,withdrawals=0,rejected=0;
    cin>>sostojba>>transakcii;
    int krajnas=sostojba;
    if (transakcii<=0)
    {
        cout<<"No transactions"<<endl;
        return 0;
    }
    for (int i=0;i<transakcii;i++) {
        int transakcija;
        cin>>transakcija;
        if (transakcija<0 && -transakcija>krajnas)
            rejected++;
        else if (transakcija<0)
        {
            withdrawals++;
            krajnas+=transakcija;
        }
        else if (transakcija>0)
        {
            deposits++;
            krajnas+=transakcija;
        }
    }
    cout<<"Final balance: "<<krajnas<<endl;
    cout<<"Deposits: "<<deposits<<endl;
    cout<<"Withdrawals: "<<withdrawals<<endl;
    cout<<"Rejected: "<<rejected<<endl;

    return 0;
}