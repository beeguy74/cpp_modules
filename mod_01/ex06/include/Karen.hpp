#ifndef _KAREN_H_
#define _KAREN_H_
# include <iostream>

class Karen
{
private:
    std::string _funcsNames[4];
    void        (Karen::*_funcs[4]) ();
    void        debug(void);
    void        info(void);
    void        warning(void);
    void        error(void);

public:
                Karen();
                ~Karen(void);

    void        setLevel(std::string level);
    void        comlain(std::string level);
};

#endif