#include<bits/stdc++.h>
using namespace std;
void solve(){
  int x0,y0,x1,y1;
  cout<<"Bresenham's Line"<<endl;
  cout<<"Enter the co-ordinates of starting point: ";
  cin>>x0>>y0;
  cout<<"Enter the co-ordinates of ending point: ";
  cin>>x1>>y1;
  cout<<endl;
  int dx,dy,p,x,y;
  dx = x1 - x0;
  dy = y1 - y0;
  x = x0, y = y0;

  map<pair<int,int>,int>m;

  if(dy<dx){

  p = 2*dy - dx;

  while(x <x1){

  if(p>=0){

    m[{x,y}] = 1;
    cout<<"("<<x<<","<<y<<")"<<endl;
    y = y+1;
    p = p +2*dy-2*dx;
  }
  else{

    m[{x,y}] = 1;

    cout<<"("<<x<<","<<y<<")"<<endl;

    p = p + 2*dy;
  }
  x = x+1;  
  } 
  }
  else{
      p = 2*dx - dy;
  while(y <y1){
  if(p>=0){

    m[{x,y}] = 1;

    cout<<"("<<x<<","<<y<<")"<<endl;

    x = x+1;

    p = p +2*dx-2*dy;
  }
  else{

    m[{x,y}] = 1;

    cout<<"("<<x<<","<<y<<")"<<endl;

    p = p + 2*dx;
  }
  y = y+1;  
  }   
  }
  m[{x1,y1}] = 1;

    cout<<"("<<x1<<","<<y1<<")"<<endl;

  for(int i = 0;i<=x1;i++){

    for(int j = 0;j<=y1;j++){

      if(m[{i,j}]){
        cout<<"#";
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
  
  
}
int main(){
    
    solve();
 
  return 0;
  
}