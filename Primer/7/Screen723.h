#ifndef SCREEN_H
#define SCREEN_H

#include<string>

class Screen
{
public:
    typedef std::string::size_type pos;
    
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){ }
    
    char get() const
    {
        return contents[cursor];
    }
    
    inline char get(pos ht, pos wd) const;
    Screen & move(pos r, pos c);

private:
    pos cursor {0};
    pos height {0}, width {0};
    std::string contents;
};

char Screen:get(pos r, pos c) const
{
    return contents[(r * width) + c];
}

#endif
