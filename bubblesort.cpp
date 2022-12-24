#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]> arr[j+1])
            swap(arr[j], arr[j+1]);
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
    bubblesort(arr, n);

    cout<<"Sorted array are:"<< endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< "  ";
    }
    cout<< endl;
    return 0;
}