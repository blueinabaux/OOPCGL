#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    char arr[100];
    cout<<"Enter Name and Age : "<<endl;
    cin.getline(arr,100);   // cin.getline is used to take input of the entire line, if we give space separated inputs cin.getline takes all of it

    ofstream myfile("xyz.txt",ios::app);  // Here by default file gets opened and myfile here is like a variable ("name of file .txt")
    // To open the file in append mode , we use another parameter i.e ios::app
    // ("file_name.txt",ios::app)

    myfile<<arr;  // this writes all the contents of arr into the file 

    myfile.close();
    cout<<"Operation Successfull"<<endl<<endl;;

    cout<<"FILE READ OPERATION : "<<endl;
    char arr1[100];

    ifstream obj("xyz.txt");

    obj.getline(arr1,100);

    cout<<"Array Components : "<<arr1<<endl;
    cout<<"File read operation complete !!!"<<endl;

    obj.close();
    return 0;
}