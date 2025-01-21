#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if (angle > 0 && 90 > angle )
    {
        return 1;
    }
    else if (angle == 90)
    {
        return 2;
    }
    else if (angle > 90 && 180 > angle)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}