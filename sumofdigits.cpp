#include<iostream>
using namespace std;

int sumofDigits(int num){
    int digSum = 0;
     while(num>0){
        int lastDig = num % 10;
        num = num /10;

        digSum += lastDig;
     }
      return digSum;
}

int main(){
    cout<<"sum = "<< sumofDigits(23)<<endl;

    return 0;
}