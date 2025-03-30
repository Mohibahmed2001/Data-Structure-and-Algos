class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // The slowest speed is 1 banana per hour.
        // The fastest speed needed is the size of the largest pile.
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        // Binary search for the minimum speed that allows Koko to finish within h hours.
        while (left < right) {
            int mid = left + (right - left) / 2;  // Avoid potential overflow.
            if (canFinish(piles, mid, h)) {
                // If Koko can finish with speed 'mid', try to see if a lower speed might work.
                right = mid;
            } else {
                // Otherwise, she needs to eat faster.
                left = mid + 1;
            }
        }
        return left;
    }

    // Helper function to check if Koko can finish all banana piles at a given speed within h hours.
    bool canFinish(const vector<int>& piles, int speed, int h) {
        int totalHours = 0;
        for (int pile : piles) {
            // Calculate the hours needed for this pile using ceiling division.
            // This is equivalent to: ceil(pile / speed)
            int hours = pile / speed;
            if (pile % speed != 0) {
                hours++; // Add an extra hour if there is a remainder.
            }
            totalHours += hours;
        }
        // Return true if the total time is within the allowed hours.
        return totalHours <= h;
    }
};
