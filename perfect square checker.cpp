#include <math.h>
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;
vector<int> xarr;

int main(int x) {
cout << "Please enter number to check up to" << endl;
cin >> x;
int counter = 100000000;
while ( x > 0 && counter <= 100000000 && counter >= 0) {
int sr = sqrt(x--);

if (sr * sr == x) {
 cout << "The square root of " << x << " is " << sr << endl;
 counter--;
 int change = 35000;
 while (change > 0) {
 
 int y = change--;
 int runner = y + y;
 if (runner == x) {
 int counter = 0;
 cout << x << " is a perfect square" << endl;
 } else {
     static bool runOnce = true;
     if(runOnce) {
    // cout << x << " is not a perfect square" << endl;
     runOnce = false;
}


}
}
} else {
   // cout << x << " is not square" << endl;
    counter--;
}
}
}
