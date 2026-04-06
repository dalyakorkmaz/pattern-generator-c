#include <stdio.h>

void sortDesign(int value) {
    int valueRow = value;
    if (valueRow > 9) {
        valueRow = 1;
    }
    printf("%d", valueRow);
    for (int i = 0; i < value; i++) {
        printf("#");
    }
    printf("%d", valueRow);
}

int main() {
    int a;
    scanf("%d", &a);
    int wholeRows = 2 * a - 1;
    int longestRow = a + 2;

    for (int i = 1; i <= wholeRows; i++) {
        int row;
        if (i <= a) {
            row = i;
        }
        else {
            row = wholeRows - i + 1;
        }
        int row2 = 2 * row - 1;

        sortDesign(row);
        int rowLength = row + 2;
        int blank = longestRow - rowLength;
        for (int b = 0; b < blank; b++) {
            printf(" ");
        }

        sortDesign(row2);
        if (row2 > 9) {
        }
        int idle = longestRow + blank - rowLength;
        for (int l = 0; l < idle; l++) {
            printf(" ");
        }

        sortDesign(row);
        printf("\n");
    }
    return 0;
}
