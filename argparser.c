#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isOpt(char *str) {
    return str[0] == '-';
}

int main(int argc, char **argv)
{
    char curr_opt[32];
    char curr_arg[64];

    for (int i = 1; i < argc; i++)
    {
        char *opt = argv[i];

        if (isOpt(opt)) {
            strcpy(curr_opt, opt);

            if (!isOpt(argv[i + 1])) {
                strcpy(curr_arg, argv[i + 1]);
            }
        } else {
            strcpy(curr_opt, "");
            strcpy(curr_arg, "");
        }

        printf("%s = %s\n", curr_opt, curr_arg);
    }
}
