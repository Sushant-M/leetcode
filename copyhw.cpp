#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size; 
    cin >> size;
    int arr[size];
    vector<int> vec;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    vec.push_back(arr[size-1]);
    for( int z=0; z<size-1; z++){
        vec.push_back(arr[z]);
    }

    for(auto x:vec){
        cout << x << " ";
    }

    return 0;
}