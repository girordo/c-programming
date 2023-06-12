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

  FILE *fp;
  char filename[50];

  int opt;

  printf("\nWhat do you want to do?");
  printf("\n\n1. Register an account");
  printf("\n2. Login to an account");

  printf("\n\nYour choice: \n");
  scanf("%d", &opt);

  switch (opt)
  {
  case 1:
    system("clear");
    printf("Enter your account number:");
    scanf("%s", usr.ac);
    printf("\nEnter your phone number:");
    scanf("%s", usr.phone);
    printf("\nEnter your new password:");
    scanf("%s", usr.password);
    usr.balance = 0;
    strcpy(filename, usr.phone);
    fp = fopen(strcat(filename, "dat"), "w");
    fwrite(&usr, sizeof(struct user), 1, fp);

    if (fwrite != 0)
    {
      printf("\n\nAccount succesfully registered");
    }
    else
    {
      printf("\n\nSomething went wrong please try again");
    }

  case 2:
    system("clear");
    printf("Enter your account number:");
    scanf("%s", usr.ac);

  default:
    printf("You have to select one of the options");
  }

  return 0;
}
