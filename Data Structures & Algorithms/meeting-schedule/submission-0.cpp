class Solution {
public:
    static bool cmp(const Interval &a, const Interval &b) {
        return a.start < b.start;
    }

    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) return true;

        sort(intervals.begin(), intervals.end(), cmp);

        int end = intervals[0].end;

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i].start < end)
                return false;

            end = intervals[i].end;
        }

        return true;
    }
};