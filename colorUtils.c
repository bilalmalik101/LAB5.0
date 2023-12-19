
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!

  return (r + g + b) / 3;

}
// using lightness technique from read.me
int toGrayScalelightness(int r, int g, int b){
  int max = 0 , min = 0;
  if(r>g && r>b){
    max = r;
  }
}
