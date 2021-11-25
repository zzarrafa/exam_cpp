

#pragma once
#include <string>
#include <iostream>


class Warlock
{
    private:
    std::string name;
    std::string title;

    public :

    Warlock();
	~Warlock(void);
    Warlock(std::string name, std::string title);
    Warlock(const Warlock &cp);
	Warlock &	operator=(const Warlock &rhs);
    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string const str);
    void introduce() const;
};