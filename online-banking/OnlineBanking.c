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
  char filename[40], phone[40], pword[40], cont;

  int opt, choice;

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
    fp = fopen(strcat(filename, ".dat"), "w");
    fwrite(&usr, sizeof(struct user), 1, fp);

    if (fwrite != 0)
    {
      printf("\n\nAccount succesfully registered");
    }
    else
    {
      printf("\n\nSomething went wrong please try again");
    }

    fclose(fp);

  case 2:
    system("clear");
    printf("Enter your phone number:");
    scanf("%s", phone);
    printf("Password:\t");
    scanf("%s", pword);
    strcpy(filename, phone);

    fp = fopen(strcat(filename, ".dat"), "r");
    fread(&usr, sizeof(struct user), 1, fp);
    fclose(fp);

    if (!strcmp(pword, usr.password))
    {
      while (cont == "y")
      {
        system("clear");
        printf("\nPress 1 for balance inquiry");
        printf("\nPress 2 for depositing cash");
        printf("\nPress 3 for cash withdraw");
        printf("\nPress 4 for online transfer");
        printf("\nPress 5 for password change");

        printf("\n\nYour choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
          printf("\nYour current balance is %.2f:", usr.balance);
        }

        printf("\n Do you want to continue the transaction [y/n]");
        scanf("%s", &cont);
      }
    }
    else
    {
      printf("\nInvalid password");
    }
  default:
    printf("\nYou have to select one of the options");
  }

  return 0;
}
