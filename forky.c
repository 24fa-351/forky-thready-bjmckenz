#include <stdio.h>

/*
    ./forky <pattern number> <number of processes>

    pattern number: 1,2,3
    number of processes: 1+

*/
int main(int argc, char* argv[])
{
    if (argc < 3) {
        printf("Usage: %s [123] <num>\n", argv[0]);
        return 1;
    }
    if (argv[1][0] != '1' && argv[1][0] != '2' && argv[1][0] != '3') {
        printf("Invalid pattern number. Gotta be 1/2/3\n");
        return 1;
    }
    int patternNum = argv[1][0] - '0';

    int numberOfProcesses;
    if (0 == sscanf(argv[2], "%d", &numberOfProcesses)
        || numberOfProcesses < 1) {
        printf("Invalid number of processes (1+)\n");
        return 1;
    }

    printf("Hello, World! pattern: %d, processes: %d\n", patternNum,
        numberOfProcesses);
    return 0;
}
