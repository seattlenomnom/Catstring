/* catstring.c
 * source file for catstring
 *
 *
*/


#include <stdio.h>

void concat(char result[], const char str1[], const char str2[]);

int main(int argc, char *argv[]) {

    const char str1[] = "Test ";
    const char str2[] = "works!";
    char s3[20];

    concat(s3, str1, str2);

    printf("%s\n", s3);


    return(0);
}

void concat(char result[], const char str1[], const char str2[]) {

    int i, j;

    // copy str1 to result

    for(i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];

    // copy str2 to the end of result

    for(j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    // terminate result with a \0

    result[i + j] = '\0';

}

