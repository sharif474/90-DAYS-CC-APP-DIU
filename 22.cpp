#include <bits/stdc++.h>
using namespace std;
int main(){
  int a;
  cout <<"enter the temp : " ;
  cin >> a ;

  if (a>20 && a<30 ){
    cout << "wather is good";}
    else if (a>30 && a<100){
        cout << "wather is bad" ;}
    else {cout << "invalid input input between 20 to 100  ";}
    
  
  return 0;
}