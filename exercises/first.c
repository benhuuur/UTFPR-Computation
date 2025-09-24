#include <stdio.h>
#include <math.h>

int main(void)
{
  float first[2], second[2];
  float distance;

  printf("Enter the coordinates of the first point:\n");
  printf("X: ");
  scanf("%f", &first[0]);
  printf("Y: ");
  scanf("%f", &first[1]);

  printf("Enter the coordinates of the second point:\n");
  printf("X: ");
  scanf("%f", &second[0]);
  printf("Y: ");
  scanf("%f", &second[1]);

  distance = sqrt(pow((second[0] - first[0]), 2) + pow((second[1] - first[1]), 2));
  printf("\nDistance between the two points: %.2f", distance);

  return 0;
}