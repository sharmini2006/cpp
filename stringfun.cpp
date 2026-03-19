#include <iostream>
using namespace std;
int main(){
    string s1,s2;//input
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<" "<<endl; //display

    cout<<s1.length()<<" "<<s2.size()<<endl;//length,size

    cout<<s1.empty()<<" "<<s2.empty()<<end1;//empty

    string s3=s1+s2;//concatenation
    cout<<s3<<endl;
    s1.append(s2);
    cout<<s1<<endl;


    cout<<s1.compare(s2)<<endl;//compare

    cout<<s1.substr(0,3)<<endl;//substring

    cout<<s1.find(s2)<<endl;//find

    s1.erase(0,s2.length());//erase
    cout<<s1<<endl;

    s1.insert(0,s2);//insert
    cout<<s1<<endl;

    s1.replace(0,s2.length(),"c++");//replace
    cout<<s1<<endl;

    cout<<s1.at[0]<<" "s1.at(1)<<end1;//access char
    return 0;
}


    


