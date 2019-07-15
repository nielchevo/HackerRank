import java.util.HashMap;

import com.sun.org.apache.xpath.internal.operations.Bool;

/**
 * maxContingousArea
 */
public class maxContingousArea {

    private static int currentRegion = 0;
    private static HashMap<Integer, Integer> listArea = new HashMap<>();

    private static boolean checkLeft(int r, int c, int[][]mArr) 
    {
        try
        {
            if(mArr[r-1][c] == mArr[r][c])
                return true;

            return false;
        }  
        catch(ArrayIndexOutOfBoundsException ex)
        {
            
            System.out.println("array LEFT of out bound!");
            return false;
        }
    }

    private static boolean checkUp(int r, int c, int[][]mArr) 
    {
        try
        {
            if(mArr[r][c-1] == mArr[r][c])
                return true;
            
            return false;
        }  
        catch(ArrayIndexOutOfBoundsException ex)
        {
            System.out.println("array UP of out bound!");
            return false;
        }
    }

    private static int checkMaxArea(int[][] mArray) 
    {
        // Get dimension W x H
        int col = mArray[0].length;
        int row = mArray.length;
        
        System.out.format("COL: %d ROW: %d\n", col, row);
        
        // array var for track region
        int[][] mVisited = new int[row][col];
        HashMap<Integer, Integer> mTracker = new HashMap<>();

        int current_region = 0;
        int max_area;

        for (int r=0; r<row; r++)
        {
            for (int c=0; c<col; c++)
            {
                // check left and up of current array position.
                
                boolean isLeft  = checkLeft(r, c, mArray);
                boolean isUp = checkUp(r, c, mArray);

                if(isLeft && isUp)
                {
                    // Track this region
                    mVisited[r][c] = mArray[r][c];
                    
                    continue;
                }

                if(isLeft)
                {
                    mVisited[r][c] = mVisited[r-1][c];

                }
                else if(isUp)
                {
                    mVisited[r][c] = mVisited[r][c-1];
                }
                else
                {
                    current_region++;
                    mVisited[r][c] = current_region;
                    listArea.put(current_region, mArray[r][c])
                }
                
            }
            System.out.println();
        }

        // check array visited
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                System.out.print(mVisited[i][j] + " ");
            }
            System.out.println();
        }

        return 0;
    }

    public static void main(String[] args)
    {

        int[][] input = {{1, 0, 1, 0},
                        {2, 0, 1, 1},
                        {1, 1, 1, 0},
                        {2, 1, 1, 0}};

        System.out.print(checkMaxArea(input));
    }
}