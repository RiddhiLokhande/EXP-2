//RIDDHI LOKHANDE
//ENTC B2
//23070123107
#include <iostream> 
using namespace std;

int main() {
    int a;
    cout<<"enter any interger: ";
    cin>>a;
    cout<<"\ninteger = "<<a<<" and size is "<<sizeof(a)<<" bytes";
    int register b;
    cout<<"\nenter a number: ";
    cin>>b;
    cout<<"\nREGISTER = "<<b<<" and size is "<<sizeof(b)<<" bytes";
    int auto c;
    cout<<"\nenter an interger: ";
    cin>> c;
    cout<<"\nAuto ="<<c<<" and size is "<<sizeof(c)<<" bytes";
    return 0;
}