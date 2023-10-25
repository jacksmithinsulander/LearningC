#include <stdio.h>

int bottles();

int main()
{
    bottles();
    return 0;
}

int bottles()
{
    int bottle_amount = 99;
    char plural_ending[3] = "s";
    while (bottle_amount >= 1) {
        if (bottle_amount == 1) {
            plural_ending[0] = '\0';
        }
        printf("%d bottle%s of beer on the wall\n", bottle_amount, plural_ending);
        printf("%d bottle%s of beer\n", bottle_amount, plural_ending);
        printf("Take one down, pass it around\n");
        int tmp_amount = bottle_amount - 1;
        if (tmp_amount == 0) {
            plural_ending[0] = 's';
        } else if (tmp_amount == 1) {
            plural_ending[0] = '\0';
        }
        printf("%d bottle%s of beer on the wall\n", tmp_amount, plural_ending);
        printf("\n");
        bottle_amount--;
    }
}