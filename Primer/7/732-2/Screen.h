#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include "WND_MGR.h"

class Screen
{
public:
    friend void Window_mgr::clear(ScreenIndex);
    
    typedef std::string::size_type pos;
    
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){ }
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){ }
    char get() const
    {
        return contents[cursor];
    }
    
    inline char get(pos ht, pos wd) const;
    Screen & move(pos r, pos c);
    
    //set functions
    Screen & set(char);
    Screen & set(pos, pos, char);
    
    //display functions
    Screen & display(std::ostream & os)
    {
        do_display(os);
        return *this;
    }

    Screen const & display(std::ostream & os) const
    {
        do_display(os);
        return *this;
    }

private:
    pos cursor {0};
    pos height {0}, width {0};
    std::string contents;
    
    void do_display(std::ostream & os) const
    {
        os << contents;
        return;
    }
};

char Screen::get(pos r, pos c) const
{
    return contents[(r * width) + c];
}

inline
Screen & Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline
Screen & Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline
Screen & Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

#endif
