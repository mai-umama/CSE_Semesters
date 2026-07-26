#include<iostream>
using namespace std;
int main(){
    int i,j,n,key;
    cout<<"Enter the number of elements: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the unsortd elements\n";
    for(i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =1;i<n;i++){
        key=arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]= key;
    }
    cout<<" the sorted elements\n";
    for(i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}