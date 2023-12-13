#include<bits/stdc++.h>
using namespace std;

class Person{
    string name, dob, bg, tele, addr, lic;
    static int count;

    public:
        int cls,div,roll;

        Person(){                               // Default Constructor
            cout<<"Default Constructor"<<endl;
    
        }

        Person(int cls,int div,int roll){       // Parametrized Constructor 
            
            cout<<"Parametrized Constructor"<<endl;

            cout<<"Class : "<<cls<<endl;
            cout<<"Division : "<<div<<endl;
            cout<<"Roll No. : "<<roll<<endl;

        }

        Person(Person &obj){                    // Copy Constructor
            this->cls = obj.cls;
            this->div = obj.div;
            this->roll = obj.roll;
        }

        static int getCount(){
            return count;
        }

        void getdata(){
            cout<<"Enter Your Name : ";
            cin>>name;
            cout<<"Enter Your Date of Birth : ";
            cin>>dob;
            cout<<"Enter Your Blood Group : ";
            cin>>bg;
            try{
                cout<<"Enter Class : ";
                cin>>cls;
                if(cls<=0){
                    throw 0;
                }
                cout<<"Enter Division : ";
                cin>>div;
                if(div<=0){
                    throw 0;
                }
                cout<<"Enter Roll No. : ";
                cin>>roll;
                if(roll<=0){
                    throw 0;
                }

            }

            catch(int ex){
                cout<<"Invalid Input"<<endl;
            }
            count++;
        }

        void contact(){

            cout<<"Enter Address : ";
            cin>>addr;
            cout<<"Enter Telephone number : ";
            cin>>tele;
            cout<<"Enter License Number : ";
            cin>>lic;
            cout<<endl;
            
        }



    friend class Details;             // Friend Class Syntax/Signature

};

class Details{ 
    public:                             // Friend Class
        void display(Person &obj){

            cout<<"Name : "<<obj.name<<endl;
            cout<<"Class : "<<obj.cls<<endl;
            cout<<"Division : "<<obj.div<<endl;
            cout<<"Roll No. : "<<obj.roll<<endl;
            cout<<"DOB : "<<obj.dob<<endl;
            cout<<"Blood Group : "<<obj.bg<<endl;
            cout<<"Address  : "<<obj.addr<<endl;
            cout<<"Telephone No. : "<<obj.tele<<endl;
            cout<<"License No. : "<<obj.lic<<endl;
            cout<<endl;


        }

        ~Details(){
            // cout<<"Destructor is Called "<<endl;
            cout<<"Details have been Saved Successfully !!!"<<endl;
        }

};
    int Person::count= 0;


int main(){
    Person p , para(1,1,68);

    Person ob = para;
	cout<<"Details from copy constructor "<<endl;
	cout<<"Class="<<ob.cls<<endl;

    int n;
    cout<<"Enter the Number of Persons : ";
    cin>>n;

    Person *arr = new Person[n];

    for(int i=0; i<n;i++){
        cout<<"Enter Student "<<i+1<<" Details : "<<endl;
        arr[i].getdata();
        arr[i].contact();
    }

    cout << "Total Students: " << Person::getCount() << endl;


    Details obj;
    for(int i=0; i<n ; i++){
        cout<<"Student"<<i+1<<"Details : "<<endl;
        obj.display(arr[i]);
    }

    delete[] arr;

    // Person p;
    // p.getdata();
    // p.contact();

    // Person obj = p;
	// cout<<"Details from copy constructor "<<endl;
	// cout<<"Class="<<obj.cls<<endl;

    // Details d;

    // d.display(p);


    return 0;
}