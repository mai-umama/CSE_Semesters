#include<iostream>
using namespace std;
int main(){
    int n,val;
    cout<<"enter the number of elements: \n";
    cin>>n;
    int arr[n];
    cout<<"enter the sorted elements\n";
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value you search: \n";
    cin>>val;
    int low = 0, high = n-1,mid;
    
    int found = 0;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==val){
            found = 1;
            break;
        }
        else if(arr[mid]<val){
            low = mid +1;
        }
        else if(arr[mid]>val){
            high = mid - 1;
        }

    }
    if(found == 1){
        cout<< "element found at "<< mid+1<< endl;
    }
    else{
        cout<<"not found\n";
    }
}