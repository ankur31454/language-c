#include <iostream>
using namespace std;
double sum(double a,double b){
 double s=a+b;
 return s;
}
// caal min of 2 no 
int min(int a,int b){
    if(a<b)
    {
        return a;
    }
    else
    return b;
}
int main(){
  
    cout<<"min="<<min(5,3)<<endl;
    return 0;
}