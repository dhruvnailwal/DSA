class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h1 = stoi(startTime.substr(0,2));
        int m1 = stoi(startTime.substr(3,2));
        int s1 = stoi(startTime.substr(6,2));


        int h2 = stoi(endTime.substr(0,2));
        int m2 = stoi(endTime.substr(3,2));
        int s2 = stoi(endTime.substr(6,2));

        int total_second1 = 3600 * h1 + 60 * m1 + s1;
        int total_second2 = 3600 * h2 + 60 * m2 + s2;

        return total_second2 - total_second1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna