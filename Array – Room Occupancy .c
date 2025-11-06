// A C program to manage room occupancy in a hotel with 5 floors and 10 rooms per floor.
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program manages room occupancy in a hotel with 5 floors and 10 rooms per floor.
*/



#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupiedCount, vacantCount;

    // Step 1: Input or simulate room occupancy data
    printf("Enter room occupancy (1 = occupied, 0 = vacant):\n");
    for (floor = 0; floor < 5; floor++) {
        printf("\n--- Floor %d ---\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Step 2: Display occupied and vacant count per floor
    printf("\n--- Room Occupancy Report ---\n");
    for (floor = 0; floor < 5; floor++) {
        occupiedCount = 0;
        vacantCount = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }
        printf("Floor %d: %d occupied, %d vacant\n",
               floor + 1, occupiedCount, vacantCount);
    }

    return 0;
}