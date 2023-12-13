#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int roll;

    public:

    void get(){
        cout<<"Enter the Name of Student : "<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the Roll No. of Student : "<<endl;
        cin>>roll;
    }

    void display(){
        cout<<"Name of Student : "<<name<<endl;
        cout<<"Roll No. of Student : "<<roll<<endl;
    }
};
int main(){
    Student s[10];
    fstream f;
    int n;

    f.open("ABC.txt",ios::out);
    cout<<"Enter the Total Number of Students : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the Student "<<i+1<<" Info : "<<endl<<endl;
        s[i].get();
        f.write((char*) &s[i], sizeof s[i]);
    }
    f.close();


    f.open("ABC.txt",ios::in);
    cout<<"The INFO of the Student is : "<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<" INFO : "<<endl;
        f.read((char*) &s[i] , sizeof s[i]);
        s[i].display();
    }

    f.close();
    return 0;
}