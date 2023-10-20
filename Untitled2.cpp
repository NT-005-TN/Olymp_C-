#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   long long n;
   cin >> n;

   vector <long long> money;

   for(long long i = 0; i < n; i++){
    long long k;
    cin >> k;
    money.push_back(k);
   }

   sort(begin(money), end(money));
   reverse(begin(money), end(money));
   long long len = money.size();
   money[len-1] = 1;

   long long k = 0;

   for(long long i:money){
        k += i;
    }


    cout << k;
}
