#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Provide a filename\n");
        return 1;
    }

    FILE *file;

    file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("Error open file\n");
        return 2;
    }

    char line[256];
    unsigned int linenum = 1;

    while (fgets(line, 256, file)) {
        printf("%-3d %s", linenum++, line);
    }
}
