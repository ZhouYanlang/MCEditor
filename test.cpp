#include <cstdio>
#include "globals.h"
#include "MCEditor.h"
#include "BlockEntity.h"
#include "MCACoder.h"
using namespace std;

MCEditor editor;

int main()
{
    int x0, y0, z0;
    scanf("%d%d%d", &x0, &y0, &z0);

    FILE *handle = fopen("bmp.txt", "r");

    int xl, yl, zl;
    fscanf(handle, "%d %d", &zl, &xl);
    yl = 10;
    MCRegion region(x0, z0, y0, xl, zl, yl);

    for (int z = 0; z < zl; z++)
        for (int x = 0; x < xl; x++)
        {
            int r, g, b, pixel;
            fscanf(handle, "%d%d%d", &r, &g, &b);
            if (r < 50 && g < 50 && b < 50)
                pixel = 1;
            else pixel = 0;
            
            for (int y = 0; y < yl; y++)
                region.A[x][z][y] = BlockInfo();
            region.A[x][z][pixel] = BlockInfo(251, 0, 0);
        }
    fclose(handle);
    
    editor.setRegion(region);

    return 0;
}
