 #include<iostream>
 using namespace std;
 int main(){
    int i,j,k,n;
    int temp;
    cout<<"Enter the number of element: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements \n";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n-1;i++){
        for(int k =0;k<n-i-1;k++){
            if(arr[k]>arr[k+1]){
                temp = arr[k];
                arr[k]= arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    cout<<"sorted elements\n";
    for(int i =0;i<n;i++){
        cout<< arr[i] << " " ;
    }
 }