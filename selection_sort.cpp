#include<iostream>
 using namespace std;
 int main(){
    int i,j,k,n;
    int min;
    int temp;
    cout<<"Enter the number of element: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements \n";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(i = 0;i<n;i++){
        min = i;
        for(j =i+1;j<=n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
    cout<<"sorted elements\n";
    for(int i =0;i<n;i++){
        cout<< arr[i] << " " ;
    }
 }
