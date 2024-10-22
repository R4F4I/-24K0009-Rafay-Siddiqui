#include <stdio.h>

void print_arr(int arr[20][20]) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%.2d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int lim = 0;
    while (lim % 2 == 0) {
        printf("Enter an odd number: ");
        scanf("%d", &lim);
    }

    int arr[20][20] = {0};
    int n = lim;
    int row = n / 2, col = n / 2;  // Start from the middle
    int i = 1,j=n*n;

    // Directions for traversal: right, down, left, up
    int dir[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    int d = 0;  // Start direction (right)

    for (int step = 1; step <= n; step++) {
        if (step == i*i)
        {
            break;
        }
        
        for (int j = 0; j < step; j++) {
            arr[row][col] = i++;
            col += dir[d][1];  // Move in current direction
        }
        d = (d + 1) % 4;  // Change direction 

        for (int j = 0; j < step; j++) {
            arr[row][col] = i++;
            row += dir[d][0];  // Move in current direction
        }
        d = (d + 1) % 4;  // Change direction
    }

    // Fill in the remaining middle value if needed
    arr[row][col] = i;

    print_arr(arr);
    return 0;
}
