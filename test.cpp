#include <X11/Xlib.h>
#include <iostream>
using namespace std;

int main() {
    Display* d = XOpenDisplay(NULL);
    int sCount = XScreenCount(d);
    cout << "Number of screens: " << sCount << endl;
    for(int i = 0; i < sCount; i++) {
        Screen* s = ScreenOfDisplay(d, i);
        cout << s << endl;
        cout << s->width << "x" << s->height << endl;
    }
}