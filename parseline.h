
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 25 
#define CMD_MAX 512 
#define MAX_ARGS 10
#define MAX_PIPE 10
#define TRUE 1
#define KNRM "\x1B[0m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"

typedef struct arguments arguments;
struct arg_list {
	char *args[MAX_ARGS];
};

void parse_stdin(FILE *fin, int interactive, int *pflag);
int redir_in(char *command); 
int redir_out(char *command); 
int parse_space(char *command, char **line_args, char *tmp); 
char *read_command(FILE *fin); 
int count_char(char *s, char c); 
int tokenize(char *command, char **piped_cmds);
