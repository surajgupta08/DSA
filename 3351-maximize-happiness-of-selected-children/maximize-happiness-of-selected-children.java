class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {

        Arrays.sort(happiness);
        // reverseArray(happiness);

        long result = 0;
        int count = 0;
        int n = happiness.length;

        for(int i= n-1; i >= n -k; i--){
            result += Math.max(happiness[i] - count,0);
            count++;
        }
        return result;
        
    }
}