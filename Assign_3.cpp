#include<bits/stdc++.h>
using namespace std;

class publication{
    public:
        string title;
        float price;

        void getdata(){
            try{
                cout<<"Enter the Title of the Book : ";
                cin>>title;

                cout<<"Enter the Price of the Book : ";
                cin>>price;
                if(price<=0){
                    throw 0;
                }
            }

            catch(int num){
                cout<<"Invalid Input !!! "<<endl;
            }
        }
};

class Book : virtual public publication{
    public:
        int pgcnt = 0;

        void page(){
            try{
                cout<<"Enter the page count of the book : ";
                cin>>pgcnt;
                if(pgcnt<=0){
                    throw 0;
                }
            }
            catch(int num1){
                cout<<"Please Enter valid page count !!!"<<endl;
            }
        }
};

class Tape : virtual public publication{
    public:
        float time;

        void playTime(){
            try{
                cout<<"Enter the Playing time of the Tape : ";
                cin>>time;
                if(time<=0){
                    throw 0;
                }
            }
            catch(int num2){
                cout<<"Enter valid play time !!!"<<endl;
            }
        }
};

class display : public Book, public Tape{
    public:
    void show(){
        cout<<endl;
        cout<<"Title of Book : "<<title<<endl;
        cout<<"Price of Book : "<<price<<endl;
        cout<<"Page count of Book : "<<pgcnt<<endl;
        cout<<"Playing time of Tape : "<<time<<endl;

    }
};
int main(){

    display obj;
    obj.getdata();
    obj.page();
    obj.playTime();
    obj.show();

    return 0;
}