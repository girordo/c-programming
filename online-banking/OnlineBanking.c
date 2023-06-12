#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user
{
  char phone[40];
  char ac[40];
  char password[40];
  float balance;
};

int main()
{
  struct user usr;

  printf("\nWhat do you want to do?");
  printf("\n\n1. Register an account");
  printf("\n2. Login to account");

  return 0;
}
