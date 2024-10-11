#ifndef __USER__
#define __USER__
#include <string>

class User
{
private:
    std::string no; //this is he/she registration number
    std::string name; //This is the name of the people that take the bock
    std::string birth; //This is he/she birth day
public:
    //declaration of constructors
    User();
    User(std::string, std::string, std::string );
    User(const User& other);
    //declaration of setters
    void setNo(std::string);
    void setName(std::string);
    void setBirth(std::string);
    //declaration of getters
    std::string getNo();
    std::string getName();
    std::string getBirth();

};

User::User()
{
        this->no="none";
    this->name="none";
    this->birth="none";
}
User::User(std::string num, std::string name, std::string age)
{
    this->no=num;
    this->name=name;
    this->birth=birth;
}
User::User(const User& other)
{
    this->no=other.no;
    this->name=other.name;
    this->birth=other.birth;
}
//declaration of setters
void User::setNo(std::string no)
{
    this->no=no;
}
void User::setName(std::string name)
{
    this->name=name;
}
void User::setBirth(std::string birth)
{
    this->birth=birth;
}
//declaration of getters
std::string User::getNo()
{
    return this->no;
}
std::string User::getName()
{
    return this->name;
}
std::string User::getBirth()
{
    return this->birth;
}


//destructor
User::~User()
{}



#endif

/* coder par
Ateufo Arthur
email: ateufoarthur@gmail.com
 */