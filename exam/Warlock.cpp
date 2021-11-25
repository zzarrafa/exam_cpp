


#include "Warlock.hpp"    

Warlock::Warlock()
{

}
Warlock::Warlock(std::string name, std::string title) : name(name) , title(title)
{
    std::cout <<  this->name + " : This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout <<  this->name + " : My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock &cp) : name(cp.name) , title(cp.title)
{

}

Warlock & Warlock::operator=(const Warlock &rh)
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


