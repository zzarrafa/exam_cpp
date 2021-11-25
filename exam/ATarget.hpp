

#pragma once
#include <iostream>
#include <string>


class ATarget : public ASpell
{
    private:
    std::string type;
    public:
    ATarget();
    ~ATarget();
    ATarget(std::string);
    ATarget(const ATarget &cp);
    ATarget & operator=(const ATarget &rh);
    std::string const &getType() const ;
    virtual void *clone() = 0;
     void getHitBySpell(const ATarget &str);
}


ATarget::ATarget() {}
ATarget::~ATarget() {}
ATarget::ATarget(std::string type) : type(type)
{

}

ATarget::ATarget(const ATarget &cp) : type(cp.type) {}

ATarget & ATarget::operator=(const ATarget &rs)
{
    this->type = ts.type;
    return *this;
}

std::string const &ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(const ATarget &str)
{
    std::cout << this->type + " has been " + ASpell::getEffects()
}