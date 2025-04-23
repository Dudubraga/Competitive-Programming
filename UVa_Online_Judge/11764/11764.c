#include <stdio.h>

int main() {

  int tests, walls, height1, height2;
  int i, j;
	scanf("%d", &tests);
    for(i = 1; i <= tests; i++) {
        scanf("%d", &walls);
        scanf("%d", &height1);
        int down = 0, up = 0;
        for(j = 1; j < walls; j++) {
            scanf("%d", &height2);
            if(height1 < height2) {
                up++;
            }
            if(height1 > height2) {
                down++;
            }
            height1 = height2;
        }
    printf("Case %d: %d %d\n", i, up, down);
    }
	return 0;
}

