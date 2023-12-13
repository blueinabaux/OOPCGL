#include<bits/stdc++.h>
using namespace std;

template<typename T> void insertionSort(T arr[], int n){
    float key;
    int i,j;
    T temp;
    for(int i=1;i<n;i++){
        key = arr[i];

        j=i-1;

        while(j>=0 && key<arr[j]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            j--;
        }
        arr[j+1] = key;
    }
}

template<typename a> void selectionSort(a arr[], int n){

    int mini;
    a temp;

    for(int i=0;i<n-1;i++){
        mini = i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;

    }
}

template<typename D> void display(D arr[], int n){
    cout<<"The Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}




int main(){
    int arr[5] = {2,5,3,1,4};
    float arr1[5] = {2.3,5.7,3.1,1.2,4.6};

    cout<<"INSERTION SORT"<<endl;

    cout << "Insertion Sort for int array: " << endl;
    insertionSort<int>(arr, 5);
    display<int>(arr, 5);

    cout << "Insertion Sort for float array: " << endl;
    insertionSort<float>(arr1, 5);
    display<float>(arr1, 5);

    cout<<endl;


    cout<<"SELECTION SORT"<<endl;

    cout << "Selection Sort for int array: " << endl;
    selectionSort<int>(arr, 5);
    display<int>(arr, 5);

    cout << "Selection Sort for float array: " << endl;
    selectionSort<float>(arr1, 5);
    display<float>(arr1, 5);


    return 0;
}