#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}
monte carlo
A GUEST
JUN 3RD, 2021
10
NEVER
Not a member of Pastebin yet? Sign Up, it unlocks many cool features!
0.18 KB
  
float mc_pi(int n) 
{float c=0.0;
float ans; 
 
for(int i=1;i<=n;i++) 
{ 
float x= frandom(); 
float y= frandom(); 
if(sqrt(x*x+y*y)<1) 
c++; 
} 
 
ans = 4*c/n;
return ans; 
}

