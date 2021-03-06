#include <iostream>
#include <cmath>

using namespace std;

//Write prototype of  sg() here.
float sg(float , float);


int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

//Write function definition of  sg() here.
float sg(float a , float b){
    float c = a*b;
    float max,min;
    if(a > b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }

    if(a <= 0 || b <= 0){
        return  0;
    }else if(max/min <= 10){
        return  sqrt(c);
    }else{
        return sg(a,sqrt(c))+sg(b,sqrt(c));
    }
}