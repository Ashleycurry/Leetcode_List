int maxProfit(int* prices, int pricesSize) {
    int max = 0,min = prices[0];
    for(int i = 1; i < pricesSize; i++){
        if(prices[i] < min){
            min = prices[i];
        } else if(prices[i] - min > max){
            max = prices[i] - min;
        }
    }
    return max;
}