#include<iostream>
using namespace std;

void selsort(int arr[] , int n){
    int small, pos;
    for(int i=0; i<n-1; i++){
        small= arr[i];
        pos= i;
        for(int j= i+1; j<n ; j++){
            if(small>arr[j]){
                small=arr[j];
                pos= j;
            }
            swap(arr[i], arr[pos]);
        }
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
    selsort(arr, n);

    cout<<"Sorted array are:"<< endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< "  ";
    }
    cout<< endl;
    return 0;
}