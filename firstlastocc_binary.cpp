#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
    int s= 0;
    int e= n-1;
    int mid= (s+e)/2;
    int out= -1;
    while(s<=e){
        if(key==arr[mid]){
            out= mid;
            e= mid-1;
        }
        else if(key<arr[mid]){
            e= mid-1;

        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        mid= (s+e)/2;
    }
    return(out);

}
int lastocc(int arr[], int n, int key){
    int s= 0;
    int e= n-1;
    int mid= (s+e)/2;
    int out= -1;
    while(s<=e){
        if(key==arr[mid]){
            out= mid;
            s= mid+1;
        }
        else if(key<arr[mid]){
            e= mid-1;

        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        mid= (s+e)/2;
    }
    return(out);

}
int main(){
    int arr[5]={0,1,1,1,1};
    int ans= lastocc(arr,5,2);
    cout<<ans<<endl;

}