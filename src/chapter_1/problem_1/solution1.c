/*
 * Code works, but is too slow and therefore will not pass the DMOJ test
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

void main() {
    static int snowflakes[SIZE][6];

    // int num;
    // scanf("%d", &num);

    // for(int i = 0; i < num; i++) {
    //     for(int j = 0; j < 6; j++) {
    //         scanf("%d", &snowflakes[i][j]);
    //     }
    // }

    int snow1[] = {1, 2, 3, 4, 5, 6};
    int snow2[] = {3, 4, 5, 6, 1, 2};

    printf("%d", check_right(snow1, snow2, 0));
}

void identify_identical(int snowflakes[][6], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

        }
    }
}

int are_identical(int snow1[], int snow2[]) {

}

int check_left(int snow1[], int snow2[], int start) {
    for(int offset = 6; offset >= 0; offset--) {
        int index = offset + start;
        if(index < 0) {
            index += 6;
        }
        if(snow1[offset] != snow2[index]) {
            return 0;
        }
    }
    return 1;
}

int check_right(int snow1[], int snow2[], int start) {
    for(int offset = 0; offset < 6; offset++) {
        if(snow1[offset] != snow2[(offset+start)%6]) {
            return 0;
        }
    }
    return 1;
}