#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char *_get_random_char(void);
char *_get_random_password(int length);

char *_get_random_char(void)
{
  char *chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  int random_index = rand() % strlen(chars);
  return chars + random_index;
}

char *_get_random_password(int length)
{
  char *password = malloc(sizeof(char) * (length + 1));
  for (int i = 0; i < length; i++) {
    password[i] = *_get_random_char();
  }
  password[length] = '\0';
  return password;
}

int main(void)
{
  srand(time(NULL));
  int length = 8;
  char *password;
  password = _get_random_password(length);
  printf("%s\n", password);
  free(password);

  // The following code checks if the password generated by the program is valid.

  int checksum = 0;
  for (int i = 0; i < length; i++) {
    checksum += password[i];
  }
  if (checksum == 2772) {
    printf("Tada! Congrats\n");
  } else {
    printf("Invalid password\n");
  }

  return (0);
}
