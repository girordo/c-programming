#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char *buffer;
  size_t buffer_length;
  size_t input_length;
} InputBuffer;

InputBuffer *new_input_buffer()
{
  InputBuffer *input_buffer = (InputBuffer *)malloc(sizeof(InputBuffer));
  input_buffer->buffer = NULL;
  input_buffer->buffer_length = 0;
  input_buffer->input_length = 0;

  return input_buffer;
}

void print_prompt() { printf("db > "); }

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

void read_input(InputBuffer* input_buffer){
  ssize_t bytes_read = getline(&(input_buffer->buffer), &(input_buffer->buffer),stdin);
}

int main(int argc, char *argv[])
{
  InputBuffer *input_buffer = new_input_buffer();
  while (true)
  {
    print_prompt();
    read_input(input_buffer);

    if (strcmp(input_buffer->buffer, ".exit") == 0)
    {
      close_input_buffer(input_buffer);
      exit(EXIT_SUCCESS);
    }
    else
    {
      printf("Unrecognized command '%s'.\n", input_buffer->buffer);
    }
  }
  return 0;
}
