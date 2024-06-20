class Solution
{
public:
    int minDays(vector<int> &bloomDay, int bouquetCount, int flowersPerBouquet)
    {

        if (bouquetCount * flowersPerBouquet > bloomDay.size())
        {
            return -1;
        }

        int minDay = *min_element(bloomDay.begin(), bloomDay.end());
        int maxDay = *max_element(bloomDay.begin(), bloomDay.end());

        int left = minDay, right = maxDay;
        while (left < right)
        {

            int mid = left + (right - left) / 2;

            if (canMakeBouquets(bloomDay, bouquetCount, flowersPerBouquet, mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }

    bool canMakeBouquets(vector<int> &bloomDay, int bouquetCount, int flowersPerBouquet, int day)
    {
        int bouquetsMade = 0;
        int flowersCollected = 0;

        for (int bloom : bloomDay)
        {

            flowersCollected = (bloom <= day) ? (flowersCollected + 1) : 0;

            if (flowersCollected == flowersPerBouquet)
            {
                bouquetsMade++;
                flowersCollected = 0;
            }
        }

        return bouquetsMade >= bouquetCount;
    }
};