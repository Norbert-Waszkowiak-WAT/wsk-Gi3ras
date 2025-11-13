#include<iostream>
using namespace std;
class Point {
public:
    int x;
    int y;
void print(){ 
    cout<<"("<<x<<","<<y<<")"<<endl;     

}
int main(){
  Point pl;
  pl.x = 1;
  pl.y = 2; 
  pl.print();
  Point p2;
  p2.x=9;
  p2.y=6;
  p2.print();
  Point p3;
  p3.x=6;
  p3.y=2;
  p3.print();
}
}
