#include <stdio.h>

void iterate(int arr[]);

int main()
{
    int is_open[100];
    for (int i = 0; i < 100; i++) {
        is_open[i] = 0;
    }

    iterate(is_open);

    for (int i = 0; i < 100; i++) {
        printf("Door number %d is open: %d\n", (i + 1), is_open[i]);
    }

    return 0;
}

int toggle(int door) {
    if (door == 1) {
        return 0;
    } else if (door == 0) {
        return 1;
    }
    return -1;
}

void iterate(int arr[]) {
    for (int i = 1; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if ((j + 1) % i == 0) {
                arr[j] = toggle(arr[j]);
            } 
        }
    }
}