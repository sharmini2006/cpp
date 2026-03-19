#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0)
        cout<<"Positive number\n";


    if(num%2==0)
        cout<<"Even number\n";
    else
        cout<<"Odd number\n";


    if(num>= 90)
        cout<< "Grade A\n";
    else if(num >= 75)
        cout<<"Grade B\n";
    else if(num >= 50)
        cout<<"Grade C\n";
    else
        cout<<"Fail\n";

    int choice;
    cout<<"\nchoice: ";
    cin>>choice;
    switch(choice) {
        case 1:
            cout<< "monday";
            break;
        case 2:
            cout <<"tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
}