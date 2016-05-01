#ifndef NUM
#define NUM

#include <QString>

class Number{
public:
    Number(unsigned num)
        : m_num(num)
    {}

    //set
    void setNum(unsigned num);

    //get
    Number getNum() const;

private:
    unsigned m_num;
};

#endif
