#include<iostream>
using namespace std;

int main(){

 long long x, y, z, a, b;

 cin >> x >> y >> z;

 if(x%z == 0){
    a = x / z;
 }
 
else if(x%z != 0){
    a = (x / z) + 1;
}

if(y%z == 0){
    b = y / z;
}

else if(y % z != 0){

    b = (y / z) + 1;
}


cout << a * b;

return 0;
 }
