#include "Screen.h"

void Window_mgr::clear(ScreenIndex i)
{
    Screen & s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
    return;
}

using namespace std;

int main()
{
    return 0;
}
