#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    
int i,j;int curr;int next;int n=6;
int arr[n]={11,34,1,99,34,12};
for(j=n-1;j>=1;j--){
    bool swapped = false;
   for(i=1;i<=j;i++){
      next=i;
      curr=i-1;
      if(arr[curr]>arr[next]){
        swap(arr[curr],arr[next]);
        swapped = true;
      }
   }
    if(!swapped){
        break;
    }
    
}
cout<<"Sorted Array"<<endl;
for(int k = 0;k<n;k++){
    cout<<arr[k]<<endl;
}

}