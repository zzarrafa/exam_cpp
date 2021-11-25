

#include "Warlock.hpp"

Warlock::Warlock()
{
}
Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << this->name + " : This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << this->name + " : My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock &cp) : name(cp.name), title(cp.title)
{
}

Warlock &Warlock::operator=(const Warlock &rh)
{
    this->name = rh.name;
    this->title = rh.title;
    return *this;
}

std::string const &Warlock::getName() const
{
    return this->name;
}

std::string const &Warlock::getTitle() const
{
    return this->title;
}
void Warlock::setTitle(std::string const str)
{
    this->title = str;
}
void Warlock::introduce() const
{
    std::cout << getName() + " : I am " + getName() + " ," + getTitle() + "!" << std::endl;
}
void Warlock::learnSpell(ASpell *ptr)
{
    std::vector<ASpell *>::iterator ite = this->tab.end();
    std::vector<ASpell *>::iterator itb = this->tab.begin();
    if (ptr)
    {
        while (itb != ite)
        {
            if ((*itb)->getName() == ptr->getName())
                return;
            ++itb;
        }
        this->tab.push_back(ptr->clone());
    }
}
void Warlock::forgetSpell(std::string name)
{
    std::vector<ASpell *>::iterator ite = this->tab.end();
    std::vector<ASpell *>::iterator itb = this->tab.begin();
    while (itb != ite)
    {
        if ((*itb)->getName() == name)
        {
            delete (*itb);
            this->tab.erase(itb);
            return;
        }
        ++itb;
    }
}
void Warlock::launchSpell(std::string name, ATarget const &ref)
{
    std::vector<ASpell *>::iterator ite = this->tab.end();
    std::vector<ASpell *>::iterator itb = this->tab.begin();
    while (itb != ite)
    {
        if ((*itb)->getName() == name)
        {
            (*itb)->lunch(ref);
            return;
        }
        ++itb;
    }
}