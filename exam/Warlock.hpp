

#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>
class Warlock
{
private:
    std::string name;
    std::string title;
    std::vector<ASpell *> tab;

public:
    Warlock();
    ~Warlock(void);
    Warlock(std::string name, std::string title);
    Warlock(const Warlock &cp);
    Warlock &operator=(const Warlock &rhs);
    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string const str);
    void introduce() const;
    void learnSpell(ASpell *ptr);
    void forgetSpell(std::string name);
    void launchSpell(std::string name, ATarget const &ref)
};