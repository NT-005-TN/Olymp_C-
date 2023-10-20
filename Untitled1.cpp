#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
   int j = 0;
   while (j <= 8){
        j += 1;
   long long h, m, a, b, n;
   cin >> h >> m >> a >> b;

   int exit = 0;
   long long time = h*60 + m;
   if ((8*60 <= time) && (22*60 >= time)){

        if ((time % a == 0) || (time % b == 0)){
            cout << 0;
        }else{
            int i = 0;
            while ((time % a != 0) && (time % b != 0)){
                i += 1;
                time += 1;

                if (time > 22*60){
                    cout << -1;
                    exit = 1;
                    break;
                }
            }
            if (exit == 0){
                cout << i;
            }
        }

   } else {
        cout << -1;
   }

cout << endl;
}
cout << endl;
}
