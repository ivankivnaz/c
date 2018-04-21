#include <stdio.h>

#define N 20
#define DELTA_TC 1

double Cels_to_Fahr(int tC);

int main(void) {
  int n, tmin, tCels;
  double tFahr;
  
  printf("\n Initial temperature value - ");
  scanf("%d", &tmin);
  
  printf("\n\t Temperature table\n tC (by Cels)"
    "     tF (by Fahr)\n");
  
  for(tCels=tmin, n=1; n <=N; n++) {
    tFahr = Cels_to_Fahr(tCels);
    printf("%10d %21.1f \n", tCels, tFahr);
    tCels += DELTA_TC;
  }
  
  return 0;
}

double Cels_to_Fahr(int tC) {
  return (double)tC * 1.8 + 32.0;
}
