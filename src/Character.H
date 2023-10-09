#include <iostream> // includes standard library, includes cout and cin

class Character
{
    public:
    // Needs a default so it can exist by default
    Character() // No arguments constructor, not going to define a name
    {
        m_name = "Unknown"; // Default name given
    }

    Character(char* name) // arguements constructor, setting member name
    {
        m_name = name; // Give a name
    }

    char* getName() {return m_name;} // return the address of the first part of the string, step through using cout
    // Note: Just use a string -_-

    private: // make sure variables aren't changed freely
    char* m_name; // get private variable pointer
};

class Protagonist : public Character
{
    public:
    Protagonist()
    {

    }

    Protagonist(char* name) : Character(name)
    {

    }

    private:

};