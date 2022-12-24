#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    int temp;
    for(int i=0; i<n; i++){
        temp= arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > temp )
        {
            arr[j+1]= arr[j];
            j -= 1;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[50];
    int n; 
    cout<<"Enter the number of element to be present in an array:";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<< endl;
    insertionsort(arr, n);

    cout<<"Sorted array are:"<< endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< "  ";
    }
    cout<< endl;
    return 0;
}