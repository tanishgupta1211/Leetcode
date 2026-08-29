class Solution {
public:
    bool checkOverlap(int radius, int cx, int cy, int x1, int y1, int x2, int y2) {
        int closest_of_X = max(x1, min(cx, x2));
        int closest_of_Y = max(y1, min(cy, y2));
        int dx = cx - closest_of_X;
        int dy = cy - closest_of_Y;
        return dx * dx + dy * dy <= radius * radius;
    }
};