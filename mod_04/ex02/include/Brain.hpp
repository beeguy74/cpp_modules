#ifndef _BRAIN_H_
#define _BRAIN_H_

# include <iostream>
# include <cstdlib>
# include <string>

class Brain{
protected:
    std::string     _ideas[100];
public:
    Brain();
    Brain(const Brain &other);
    virtual     ~Brain();

    Brain&    operator=(const Brain& other);
    const std::string   *getIdeas() const;
};

#endif
