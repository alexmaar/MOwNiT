#include<iostream>
#include<cmath>
using namespace std;

const float e = exp(1);
const float yo=e-1;


float calc_instable(int n){
  if (n==0) return yo;
  return e - ((n) * calc_instable(n-1));
}


float calc_stable(int n){
  if (n>=99) return 0; // lim =0
  return (e-calc_stable(n+1))/(n+1);
}



int main(){

  for(int i=20; i>=0; i--) {
    cout<<calc_stable(i)<<" "<<calc_instable(abs(i))<<endl;



}
}
