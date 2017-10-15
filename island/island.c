#include <stdlib.h>
#include <stdio.h>
#include "island.h"

public int islandPerimeter( **int grid) {
       int permeter = 0;
       int n = grid.length;
       int m = grid[0].length;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j] == 1){
                   if(i==0 || grid[i-1][j] == 0) permeter++;
                   if(i==n-1 || grid[i+1][j] == 0) permeter++;
                   if(j==0 || grid[i][j-1] == 0) permeter++;
                   if(j==m-1 || grid[i][j+1] == 0) permeter++;
               }
           }
       }
       return permeter;
   }
