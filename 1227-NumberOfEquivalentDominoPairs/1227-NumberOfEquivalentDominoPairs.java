// Last updated: 8/1/2026, 5:23:03 pm
class Solution {
    public int numEquivDominoPairs(int[][] dominoes) {
        int[] mpp = new int[100];
        for (int[] d : dominoes) 
            if (d[0] > d[1]) mpp[d[0] * 10 + d[1]]++;
            else mpp[d[1] * 10 + d[0]]++;
        
        int count = 0;
        for (int freq : mpp)
            count += (freq - 1) * freq / 2;
        
        return count;
    }
}