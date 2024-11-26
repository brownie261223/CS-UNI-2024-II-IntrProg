#ifndef __FIGURE_H__
#define __FIGURE_H__

class Figure{
public:
    virtual void draw() const = 0;
    virtual ~Figure() {}    
};
#endif 