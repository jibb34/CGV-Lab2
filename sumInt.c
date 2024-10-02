#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
int main(int argc, char **argv) {
  // loop variable
  int i;

  // variable to store the sum of integers
  int sum;

  // Initialize sum
  sum = 0;
  // struct
  struct timeval startTime, stopTime;
  long totalTime;

  gettimeofday(&startTime, NULL);

  for (i = 0; i < 100000; i++) {
    sum = sum + i;
  }

  printf("The sum is %d\n", sum);
  gettimeofday(&stopTime, NULL);

  totalTime = (stopTime.tv_sec * 1000000 + stopTime.tv_usec) -
              (startTime.tv_sec * 1000000 + startTime.tv_usec);
  printf("%ld\n", totalTime);
}
