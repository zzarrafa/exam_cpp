
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "SpellBook.hpp"


class Warlock
{
    private:
    std::string name;
    std::string title;
    std::vector<ASpell*> tab;
    SpellBook book;


    public:
    Warlock(std::string name, std::string title) : name(name) , title(title){
        std::cout << name + ": This looks like another boring day." << std::endl;
    }
    ~Warlock()
    {
        std::cout << name + ": My job here is done!" << std::endl;
    }
    Warlock(Warlock const &cp);
    Warlock &operator=(Warlock const &cp);
    std::string const &getName() const { return name;}
    std::string const &getTitle() const { return title;}
    void setTitle(std::string const &title) { this->title = title;}

    void introduce() const 
    {
        std::cout << name + ": I am " + name + ", " + title + "!" << std::endl;
    }

    void learnSpell(ASpell *ptr)
    {
        book.learnSpell(ptr);
    }

    void forgetSpell(std::string name )
    {
       book.forgetSpell(name);
    }
    void launchSpell(std::string name, ATarget &target)
    {
        ASpell* spell = book.createSpell(name);
        if(spell)
            spell->launch(target);
    }

};