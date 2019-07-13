import java.util.HashMap;

/**
 * maxContingousArea
 */
public class maxContingousArea {

    private static void checkLeft(int r, int c, int[][] mArr, int[][] temp) {
        
        //check boundaries
        if(r < 0 || c < 0)
            return;
    }

    private static bool checkUp() {
        
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