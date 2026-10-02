#include <stdio.h>

// Function to solve Tower of Hanoi
void toh(int n, char source, char helper, char destination)
{
    // Base condition
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Step 1: Move n-1 disks from source to helper
    toh(n - 1, source, destination, helper);

    // Step 2: Move largest disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Step 3: Move n-1 disks from helper to destination
    toh(n - 1, helper, source, destination);
}

int main()
{
    int n = 1;   // number of disks
    toh(n, 'A', 'B', 'C');  // A = source, B = helper, C = destination
    return 0;
}
