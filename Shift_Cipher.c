#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char names[1000];
    printf("Enter your name:\n");
    fgets(names, 1000, stdin);

    char work[1000];
   
    int j=0;
    for (int i=0;i<names[i]!='\0';i++) {
        if (names[i]!=' ' && names[i]!='\n') {
            work[j]=(names[i]);
            printf("%c", work[j]);
            j=j+1;
        }
    }
    printf("\n");

    //Value of k is pre defined
    int k1=7;

    for (int k=0;k<work[k]!='\0';k++) {
        
        if ((int) work[k] >= 65 && (int) work[k] <= 90) {
            int val= (((int)work[k])+k1)%91;
            if (val>=65) {
                printf("%c", (char)val);
            }
            else {
                val=val+65;
                printf("%c", (char) val);
            }
        }
        else {
            if ((int) work[k] >= 97 && (int) work[k] <= 122) {

                int val1= (((int)work[k])+k1)%123;
                if (val1>=97) {
                    printf("%c", (char) val1);
                }
                else {
                    val1=val1+97;
                    printf("%c", (char) val1);
                }
            }

        }
    }
}