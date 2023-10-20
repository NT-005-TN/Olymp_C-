#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   long long n, a, b;
   cin >> n >> a >> b;

   if ((n < a) || (n < b)){
    cout << -1;
   }else{

    long long k = 0, k1;
    for(long long i = 0; i < n; i++){
       string s = to_string(i);
       k1 = count(s.begin(), s.end(), '1') + count(s.begin(), s.end(), '4');
       if (k1 == s.size()){
         k += 1;
       }
    }

    cout << k;
   }
}
