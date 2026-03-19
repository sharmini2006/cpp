#include <iostream>
using namespace std;
void inputArray(int arr[],int n){
    for(int i=0;i<n;i++)
        cin>>arr[i];
}


void displayArray(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}


int sumArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}


int maxArray(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max) max=arr[i];
    return max;
}


int searchArray(int arr[],int n,int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key) return i;
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    displayArray(arr,n);
    cout<<sumArray(arr,n)<<endl;
    cout<<maxArray(arr,n)<<endl;
    
    int key;
    cin>>key;
    int pos=searchArray(arr,n,key);
    if(pos!=-1) cout<<key<<" found at index "<<pos<<endl;
    else cout<<key<<" not found"<<endl;
    return 0;
}