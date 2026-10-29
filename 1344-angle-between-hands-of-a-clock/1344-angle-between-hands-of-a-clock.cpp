class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minA=6*minutes;
        double hourA=30*(hour%12)+0.5*minutes;
        double Angle=abs(hourA-minA);
        return min(Angle,360-Angle);
    }
    
};
