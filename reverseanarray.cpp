#include<iostream>
using namespace std;

void reverseArray( int arr[], int sz){
    int start = 0 , end = sz-1;

    while(start< end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4,2,7,9,1,2,5};
    int sz = 7;

    reverseArray(arr, sz);

    for(int i =0; i<sz; i++){  //for printing the array elments the loop is
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}