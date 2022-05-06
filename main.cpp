#include <iostream>
#include "lib.h"
using namespace std;

int main(){
   int y;
    cin >> y;
    float x [y];
    for (int j=0; j<y; j++) {
        cin >> x [j];
    }
    cout << calcolo (x, y ) << endl;
  return 0;
}
