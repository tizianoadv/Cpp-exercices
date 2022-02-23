#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <string>

class Character{

    public:
    Character(std::string name);
    ~Character();
    static int nbObjects();

    private:
    std::string m_name;
    static int counter;
};

#endif