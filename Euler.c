#include <stdio.h>

void problemSix();
void problemNine();

int main() {
  problemSix();
  problemNine();
}

void problemSix() {
  int total = 0;

  int i, j;
  for (i = 1; i <= 100; i++)
    for (j = 1; j <= 100; j++)
      if (i != j)
	total += i * j;

  printf("%d\n", total);
}

void problemNine() {
  int a, b, c;
  for (a = 1; a <= 998; a++)
    for (b = 1; a + b <= 999; b++) {
      int c = 1000 - (a + b);
      if ((a * a) + (b * b) == (c * c)) {
	printf("%d\n", a * b * c);
	return;
      }
    }
}



/*#include <stdlib.h>

float epsilon = 0.001;

float next(float a, float b) {
  float c = 1 - ((a * b) / (1.0 - b));
  printf("a: %f, b: %f, yields: %f\n", a, b, c);

  if (c < epsilon)
    return 0;
  else
    return c;
}

int numHits(float start) {
  float a = 1;
  float b = start;
  float c;
  int k = 1;
  
  while ((c = next(a, b)) != 0) {
    a = b;
    b = c;
    k++;
  }

  return k;
}

float incHits(float x) {
*/
