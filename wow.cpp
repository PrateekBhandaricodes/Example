#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream wowfile;
    string data;
    wowfile.open("123.dat",ios::out);
    cout<<"Writing to the file"<<endl;
    cout<<"Enter content : ";
    getline(cin,data);
    cout<<data<<endl;
    wowfile<<data;
    wowfile.close();
    string data1;
    wowfile.open("123.dat",ios::in);
    cout << "Reading from the file" << endl;
    while(getline(wowfile,data1)){
         cout<<data1;
    }
    wowfile.close();
}
