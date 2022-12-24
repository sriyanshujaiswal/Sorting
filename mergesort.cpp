#include<iostream>
using namespace std;

void mergesort(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i=0, j=0 , k=0;
    while((i<m) && (j<n))
    {
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        if(i>=m){
            while(j<n){
                arr3[k]= arr2[j];
                j++;
                k++;
            }
        }
        if(j>=n){
            while(i<m){
                arr3[k]= arr1[i];
                i++;
                k++;
            }
        }
    }
}

int main(){
    
    int arr1[50], arr2[50], arr3[100];
    
    int m,n; 

    cout<<"Enter the number of element to be present in first array:";
    cin>>m;
    cout<< endl;
    
    cout<<"Enter the number of element to be present in second array:";
    cin>>n;
    cout<< endl;
    
    cout<<"Enter the elements of first array: ";
    for(int i=0; i<m; i++){
        cin>> arr1[i];
    }
    cout<< endl;
    
    cout<<"Enter the elements of second array: ";
    for(int i=0; i<n; i++){
        cin>> arr2[i];
    }
    cout<< endl;
    
    mergesort(arr1, m, arr2, n, arr3);

    cout<<"Sorted array are:"<< endl;
    for(int i=0; i<(m+n); i++){
        cout<<arr3[i]<< "  ";
    }
    cout<< endl;
    return 0;
}