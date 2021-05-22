#include <iostream>
using namespace std;

void perfect(int i){
    int fact_sum = 0;
    for(int j = 1; j <= i / 2; j++){
        if(i % j == 0){
            fact_sum += j;
        }
    }
    if(fact_sum == i){
        cout << i << " ";
    }
}

int main(){
    for(int i = 1; i <= 1000; i++){
        perfect(i);
    }

    return 0;
}