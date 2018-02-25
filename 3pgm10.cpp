#include <iostream>
using namespace std;
 struct Time {
  int hour;
  int minutes;
};
Time findTimeDifference(Time t1, Time t2);
int main() {
    Time t1, t2, diff;
    cout << "Enter earlier time in hours, minutes and seconds\n";
    cin >> t1.hour >> t1.minutes >> t1.secs;
     cout << "Enter current time in hours, minutes and seconds\n";
    cin >> t2.hour >> t2.minutes >> t2.secs;
      diff = findTimeDifference(t1, t2);
     cout << "Difference = "<< diff.hour << ":" << diff.minutes << ":" << diff.secs;
    return 0;
}
Time findTimeDifference(Time t1, Time t2){
 Time diff;
    if(t2.secs > t1.secs){
        --t1.minutes;
    }
     diff.secs = t1.secs - t2.secs;
    if(t2.minutes > t1.minutes) {
        --t1.hour;
        t1.minutes += 60;
    }
       diff.minutes = t1.minutes-t2.minutes;
    diff.hour = t1.hour-t2.hour;
      return diff;
}
