class Solution {
public:
    double angleClock(int hour, int minutes) {
        float h,m,deg;
        if(hour<12)
        {
            h=hour*60*(0.5)+minutes*(0.5);
            m=minutes*6;
            deg=abs(h-m);
        }
        else
        {
            h=minutes*(0.5);
            m=minutes*6;
            deg=abs(h-m);
        }
        if(deg>180)
        {
            deg=abs(360-deg);
        }
        return deg;
    }
};