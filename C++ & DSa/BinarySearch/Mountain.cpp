#include <iostream>
using namespace std;
class MountainArray {
public:
    int get(int index);
    int length();
};
int peakEle(MountainArray &mountainArr) {
    int s = 0;
    int e = mountainArr.length() - 1;
    while (s < e) {
        int m = s + (e - s) / 2;
        if (mountainArr.get(m) < mountainArr.get(m + 1)) {
            s = m + 1;
        } else {
            e = m;
        }
    }
    return s;
}

int binarySearch(int tar, MountainArray &mountainArr, int s, int e) {
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (tar < mountainArr.get(m)) {
            e = m - 1;
        } else if (tar > mountainArr.get(m)) {
            s = m + 1;
        } else {
            return m;
        }
    }
    return -1;
}

int orderAgnosticBS(MountainArray &mountainArr, int target, int start, int end) {
    bool isAsc = mountainArr.get(start) < mountainArr.get(end);

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mountainArr.get(mid) == target) {
            return mid;
        }

        if (isAsc) {
            if (target < mountainArr.get(mid)) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (target > mountainArr.get(mid)) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int findInMountainArray(int target, MountainArray &mountainArr) {
    int peak = peakEle(mountainArr);
    int first = binarySearch(target, mountainArr, 0, peak);
    if (first != -1) {
        return first;
    }
    return orderAgnosticBS(mountainArr, target, peak + 1, mountainArr.length() - 1);
}
