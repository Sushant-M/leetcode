#include <iostream>
using namespace std;

int binary(int array[], int size,int target){
    int i = 0;
    int j = size-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(array[mid] == target){
            return mid;
        }
        if(array[mid] < target){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int isValid = binary(arr, 8 ,-4);
    cout << "The index is: " + isValid;
}