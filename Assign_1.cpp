#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Complex{

    double real;
    double img;

    public:
        Complex(){
            real = 0.0;
            img = 0.0;
        }

        Complex(double r, double i){
            real = r;
            img = i;
        }

        Complex operator+(Complex &other){
            // return Complex(real + other.real , img + other.img);
            Complex temp;
            temp.real = real + other.real;     // Here the "real" is just for num1 and "other.real" is for num2
            temp.img = img + other.img;        // Here the "img" is just for num1 and "other.img" is for num2
            return temp;

        }

        Complex operator*(Complex &other){
            
            double newReal = real*other.real - img*other.img;
            double newImg = real*other.img + img*other.real;
            return Complex(newReal,newImg);

        }


        friend ostream &operator<<(ostream &os , Complex &num){
            os<<num.real;

            if(num.img>=0){
                os<<" + "<<num.img<<"i";
            }
            else{
                os<<" - "<<-num.img<<"i";

            }
            return os;
        }


        friend istream &operator>>(istream &is , Complex &num){
            cout<<"Enter the Real Part : ";
            is>>num.real;

            cout<<"Enter the Imaginary Part : ";
            is>>num.img;

            return is;
        }



};
int main(){
    Complex num1,num2;

    cout<<"Enter the first complex number : "<<endl;
    cin>>num1;

    cout<<"Enter the second complex number : "<<endl;
    cin>>num2;

    Complex sum = num1+num2;
    Complex product = num1*num2;

   cout<<"SUM : "<<sum<<endl;
   cout<<"PRODUCT : "<<product<<endl;

    return 0;
}