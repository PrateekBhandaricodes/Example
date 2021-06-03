#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream wowfile;
    char data[100];

    wowfile.open("123.dat",ios::out);
    cout << "Writing to the file" << endl;
    cout << "Enter content : ";
    cin.getline(data,100);
    wowfile<<data;
    wowfile.close();


    char data1[100];
    wowfile.open("123.dat",ios::in);
    cout << "Reading from the file" << endl;
    wowfile>>data1;
    cout<<data1;
    wowfile.close();
}
