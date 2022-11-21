#include <iostream>
using namespace std;


int main() {
    float areat=0,areaq,arear,a,b;
    int opzione;

    cin>>a>>b>>opzione;
    switch (opzione) {

        case 0:
            areat=(a*b)/2;
            cout<<areat<<endl;
            break;

        case 1:
            areaq=a*a;
            cout<<areaq<<endl;
            break;

        case 2:
            arear=a*b;
            cout<<arear<<endl;
            break;


            default:
            cout<<"opzione non valida"<<endl;

    }
    return 0;
}
