#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    char letters[1000];
    printf("Give your text to decrypt\n");
    fgets(letters, 1000, stdin);

    int ascii=65;
    char ascii_val[28];
    for (int i=0;i<26;i++) {
        ascii_val[i]=(char) ascii;
        ascii=ascii+1;
    }

    //Values of a and b are pre defined

    int a_inverse=3;
    int b=2;

    int j=0;

    while (letters[j]!='\0' && letters[j]!='\n') {
        int x=((int) letters[j])-65;
        int answer=((a_inverse)*(x-2))%26;
        if (answer<0) {
            answer=answer+26;
        }
        printf("%c",ascii_val[answer]);
        j=j+1;
    }
}
