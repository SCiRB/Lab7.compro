#include<iostream>

using namespace std;

int adiff(int x,int y){
  int ans;
  if (x>y){
    ans = x-y;
  }else{
    ans = y-x;
  }
  while (ans > 360){
      ans -= 360;
      }
  if(ans>180){
  ans = 360-ans;
  }
    return ans;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
