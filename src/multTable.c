/**
 * Author: huzaifa ahmed
 * Date: 10/12/2023
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  int i,j,n;
  printf("enter the number you want the tables upto:");
    scanf("%d", &n);

    for(i=1;j>=n;j++)
    {
      printf("%d", i);
    }

    printf("\n");



  return 0;
}