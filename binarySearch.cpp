#include <iostream>
using namespace std;

string iterativeBinarySearch(int arr[],int target, int low,int high){

    while(high>=low){
        int mid = low + ( high - low ) / 2;

        if(arr[mid]==target){
            return "present";
        }

        if(arr[mid]>target){
            high = mid - 1;
        }

        if(arr[mid]<target){
            low = mid + 1;
        }

    }
}

string recursiveBinarySearch(int arr[], int target, int low,int high){
    if(high>=low){
        int mid = low + (high - low)/2;

        if(arr[mid]==target){
            return "present";
        }

        if(arr[mid]>target){
            recursiveBinarySearch(arr,target,low,mid-1);
        }

        if(arr[mid]<target){
            recursiveBinarySearch(arr,target,mid+1,high);
        }
    }
}



int main(){
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int low = 0;
    int high = 9;
    iterativeBinarySearch(arr,target,low,high); 
    recursiveBinarySearch(arr,target,low,high);
    return 0;
}