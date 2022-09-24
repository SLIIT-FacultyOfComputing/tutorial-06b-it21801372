#include "Box.h"
#include <iostream>
using namespace std;


// Implement setters and getters
void Box::setlength(int l){
  length = l;
  
};
void Box::setwidth(int w){
   width = w;     
      }
      void Box::setheigth(int h){
        heigth = h;
      }
       // write prototypes of getters for length, width and height
      int Box::getlength(){
        cout<< length;
      }
      int Box::getwidth(){
        cout<< width;
      }
      int Box::getheigth(){
        cout<< heigth;
      }
// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  return length * width * heigth;
}
