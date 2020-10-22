#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>

class Screen;

class Window_mgr
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    
    void clear(ScreenIndex);

private:
    /*
     * This  will not work since compiler doesn't know how much memory to allocate for Screen object
     * You can declare but not define the object
     */ 
    //std::vector<Screen> screens{Screen(24, 80, ' ')}; 
    std::vector<Screen> screens;
};
#endif
