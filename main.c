/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 1 marzo 2015, 18.21
 */

#include <stdio.h>
#include <stdlib.h>

#define X 2
#define Y 4

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j;
    int matrix[Y][X];
    int scambia[X];
    
    printf("Inserisci i valori\n");
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Inserisci il valore %d della riga %d : ", i, j);
            scanf("%d", &(matrix[j][i]));
        }
    }
    for(j = 0; j < Y; j++) {
        if(j % 2) {
            for(i = 0; i < X; i++) {
                scambia[i] = matrix[j - 1][i];
            }
            for(i = 0; i < X; i++) {
                matrix[j - 1][i] = matrix[j][i];
            }
            for(i = 0; i < X; i++) {
                matrix[j][i] = scambia[i];
            }
        }
    }
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Valore %d della riga %d : %d\n", i, j, matrix[j][i]);
        }
    }
    
    return (EXIT_SUCCESS);
}

