#include <stdio.h>
int main()
{
    int X = 33, Y = 18; // Intializing two variables 'X' and 'Y'
    printf("Before Swapping: X = %d, Y = %d\n", X, Y); // Before swapping
    // Code to swap 'X' and 'Y' without using a temporary variable
    X = X + Y; // X now becomes 51
    Y = X - Y; // Y becomes 33
    X = X - Y; // X becomes 18
    printf("After Swapping: X = %d, Y = %d", X, Y); // After swapping
    return 0;
}
