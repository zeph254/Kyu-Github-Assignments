// This program manages room occupancy in a hotel chain with 3 branches, each having 5 floors and 10 rooms per floor.
/*
    name:         Owuor Zephania Ulare
    reg:          PA106/G/29218/25
    description:  This program manages room occupancy in a hotel chain with 3 branches, each having 5 floors and 10 rooms per floor.
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // Step 1: Initialize random number generator
    srand(time(0));

    // Step 2: Assign random occupancy (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    // Step 3: Display occupancy summary
    printf("--- Hotel Chain Occupancy Summary ---\n");
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total vacant rooms: %d\n", (3 * 5 * 10) - totalOccupied);

    return 0;
}