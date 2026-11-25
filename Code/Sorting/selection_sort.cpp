#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {11,44,33,23,13,343,23};
    int i,j;
    int mini;
    int n=7;

    for(i=0;i<=n-2;i++){
        mini=i;

        for(j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }

        swap(arr[mini],arr[i]);
    }

    cout<<"Sorted Array:"<<endl;

    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}