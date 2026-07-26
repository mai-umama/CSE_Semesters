#include<iostream>
using namespace std;
int main(){
    int n,val;
    cout<<"Enter the number of element : ";
    cin >>n;
    int arr[n];
    cout<<"enter the elements: \n";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the specific element: \n";
    cin>>val;
    int found =0;
    for(int i=0; i<n;i++){
        if(arr[i]==val){
            found =1;
            cout<<"Found the element at position "<< i+1 <<endl;
            break;
        }
    }
    if(found == 0){
        cout<<"Not found\n";
    }
    return 0;
}