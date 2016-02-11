//
//  main.c
//  12 - A
//
//  Created by Erica Correa on 2/1/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int max = 100;
    int i = 1;
    
    while (i <= max) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz\n");
        }
        else if (i % 3 == 0) {
            printf("fizz\n");
        }
        else if (i % 5 == 0) {
            printf("buzz\n");
        }
        else {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
