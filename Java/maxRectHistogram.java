import java.util.Stack;

/**
 * maxRectHistogram
 * solution reference from 
 * https://www.geeksforgeeks.org/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix/
 */
public class maxRectHistogram {

    // private static calcArea(int row, int col, int[] mArr)
    // {

    //     Stack<Integer> result = new Stack<Integer>();

    //     for (int i= 0; i<col; i++)
    //     {

    //     }
    // }

    public static int maxRect(int[][] mArray)
    {
        int mRow = mArray.length;
        int mCol = mArray[0].length;

        int[][] temp = new int[mRow][mCol];
        
        // var helper
        int max_area, max_i, max_j;

        for(int i=0; i < mRow; i++)
        {
            temp[i][0]  = mArray[i][0];
        }

        for(int j=0; j<mCol; j++)
        {
            temp[0][j] = mArray[0][j];
        }

        for(int i= 1; i < mCol; i++)
        {
            for(int j=1; j < mRow; j++)
            {
                if(mArray[i][j] == 1)
                {
                    int area = Math.min(temp[i][j-1], Math.min(temp[i-1][j], temp[i-1][j-1])) + 1;
                    System.out.println("min("+ temp[i][j-1] + ", min2("+ temp[i-1][j] +", "+ temp[i-1][j-1] +")).");

                    temp[i][j] = area;
                }
                else
                {
                    temp[i][j] = 0;
                }
            }
        }

        /**find maximm entry, and indexes of maximum entry in temp[][] */
        max_area = temp[0][0]; max_i = 0; max_j= 0;
        for(int i = 0; i < mRow; i++)
        {
            for(int j = 0; j < mCol; j++)
            {
                if(max_area < temp[i][j])
                {
                    max_area = temp[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
        }

        System.out.println("max_area: "+ max_area);
        System.out.println("max_i: "+ max_i);
        System.out.println("max_j: "+ max_j);

        int count =0;
        //print output 
        for (int i=max_i; i > max_i - max_area; i--)
        {
            for(int j = max_j; j > max_j - max_area ; j--)
            {
                System.out.print(mArray[i][j] + " ");
                count++;
            }
            System.out.println();
        }

        return count;
    }

    public static void main(String[] args)
    {
        int A[][] = {  {0, 1, 1, 0}, 
                        {1, 1, 1, 1}, 
                        {1, 1, 1, 1}, 
                        {1, 1, 0, 0} };

        int result = maxRect(A);

        System.out.print("Result: "+ result);
    }
    
}