#include <iostream>
using namespace std;

int64_t sum_of_natural_numbers(int64_t n){
    return (n*n+n)/2;
}

int main(){
   int n = 1000;
   auto ans = sum_of_natural_numbers((n-1)/3)*3 + sum_of_natural_numbers((n-1)/5)*5 - sum_of_natural_numbers((n-1)/15)*15;
   cout << ans << endl;
}