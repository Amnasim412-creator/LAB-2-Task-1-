#include<iostream>
using namespace std;

void binary_search(int arr[],int n ,int val){
    int low = 0;
    int high = n-1;

    while (low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == val){
            cout<<val <<" is found at index "<<mid<<endl;
           return;
        }
        else if(val>arr[mid]){
            low = mid+1;
        }
        else
            high = mid-1;


    }
      cout<<val<<" is not found!"<<endl;

}

int main(){
    int brr[7] = {101,105,110,120,135,150,170};
    int a = 7;
    int key[2]={112,135};

    for(int i = 0;i<2;i++){
        binary_search(brr,a,key[i]);

    }
    return 0;

}
