#include <iostream>
#include <map>

using namespace std;

class rubiksCube {
private:
/*
W - white
Y - yellow
G - green
B - blue
R - red
O - orange
*/
char up[9] = {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'};
char down[9] = {'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y'};
char left[9] = {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'};
char right[9] = {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'};
char front[9] = {'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'};
char bottom[9] = {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'};

map<const char, char *> sides;

public:
 rubiksCube() {
     // defines the sides
    sides['U'] = up;
    sides['D'] = down;
    sides['L'] = left;
    sides['R'] = right;
    sides['F'] = front;
    sides['B'] = bottom;
    }

    char * getColors(char side){
        return sides[side];
    }
};

int main(){

    rubiksCube myCube;  // identifying my cube
    return 0;
}