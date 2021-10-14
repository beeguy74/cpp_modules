#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"

#ifndef _DIAMONDTRAP_H_
#define _DIAMONDTRAP_H_


# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
    private:
        std::string     _name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& other);
        virtual ~DiamondTrap();

        void            whoAmI();
        void            showStats();
        DiamondTrap&    operator=(const DiamondTrap& other);
};

#endif
