#include<bits/stdc++.h>
using namespace std;

void display(map<string,int> mp){
    if(mp.empty()){
        cout<<"No Record Yet !"<<endl;
        return;
    }
    
    for(auto ele : mp){
        cout<<ele.first<<" : "<<ele.second<<endl;
    }
}

int main(){

    string state="";
    long population = 0;
    map<string,int> mp;

    int ch;
    // bool my_ch;
    string temp_state = "";

    do{
        cout<<"MENU : \n 1. To Enter a New Record \n 2. To Print Current record \n 3. To Search Population"<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;

        switch(ch){
            
            case 1:
                cout<<"Enter the State name : ";
                cin>>state;
                cout<<"Enter the Population : ";
                cin>>population;

                if(mp.find(state)==mp.end()){

                    mp[state] = population;
                    cout<<"RECORD HAS BEEN SAVED SUCCESSFULLY !"<<endl;
                }
                else{
                    cout<<"RECORD ALREADY PRESENT !"<<endl;
                }
                break;
            
            case 2:
                cout<<"*** CURRENT RECORDS ***"<<endl;
                display(mp);
                break;
            
            case 3:
                cout<<"Enter the desired State name : ";
                cin>>temp_state;

                if(mp.find(temp_state) != mp.end()){
                    cout<<"POPULATION : "<<mp[temp_state]<<endl;
                }
                else{
                    cout<<"NOT FOUND !"<<endl;
                }
                break;

            default:
                cout<<"INVALID INPUT !!!"<<endl;
                break;

        }

    }while(ch>0 && ch<4);

    return 0;
}