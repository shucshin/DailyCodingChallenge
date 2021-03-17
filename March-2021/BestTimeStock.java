public class BestTimeStock {
    public static void main(String[] main) {
        int[] prices = {7,1,5,3,6,4};
        System.out.println(maxProfit(prices));
    }

    public static int maxProfit(int[] prices) {
        int profit = 0;
        for(int i = 0; i < prices.length-1; i++){
            if(prices[i] < prices[i+1])
                profit += prices[i+1]-prices[i];
        }
        return profit;
    }
}