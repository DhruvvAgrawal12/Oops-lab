#include<bits/stdc++.h>
using namespace std;
class Person{
    const long int aadhar;
    const string pan;
    string address;
    int mobNum;
    public:
    Person():aadhar(00000000000), pan(" "){//default
        address=" ";
        mobNum=0;
    }
    Person(long int a,string p,string ad, int m):aadhar(a), pan(p){//parametrize
        address=ad;
        mobNum=m;
    }
    long int getAdh() const{
        return aadhar;
    }
    string getPan() const{
        return pan;
    }
    string getAdd(){
        return address;
    }
    int getMob(){
        return mobNum;
    }
};
int main(){
    Person p1(352842270657,"abcdefgh","rajasthan",49999923);
    cout<<p1.getAdh()<<endl;
    cout<<p1.getPan()<<endl;
    cout<<p1.getAdd()<<endl;
    cout<<p1.getMob()<<endl;
}
