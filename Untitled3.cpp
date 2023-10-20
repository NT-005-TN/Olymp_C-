#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   long long n,a,b,c;
   cin >> n >> a >> b >> c;

   if ((a > n) || (b > n) || (c > n) or (b < a) || (c < a)){
    cout << -1;
   } else {

    long long k = a;
    long long n1 = b - a + c - a;
    k += n1;
    cout << n - k;
   }


}
