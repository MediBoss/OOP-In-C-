//animal.h, the specification file for the class Animal

#include <string>

class Animal{

    private:

        std::string animalName; // //instance variable to store the animal name
        std::string animalType;//instance variable to store the animal type
        std::string animalHabitat;//instance variable to store animal habitat
        std::string animalClass;// Example : carnnivore, herbivore,etc...
        bool humanFriendly;// tells wheter the animal can live with humans or not
        int animalAge;  // instance variable to store animal age

    public:

                //THE CONSTRUCTORS

        Animal(); //default constructor

        Animal(std::string, std::string, std::string, int);
        //the constructor with parameters
        //the first three strings are : the name, the type, the habitat. Then the int is the age

        Animal(const Animal& otherAnimal);
        // copy constructor
        //used when copying two objects together


              //THE DESTRUCTOR
          ~Animal();
          // Desctructor
          //invoked when an object has no longer use in the program
                //GETTER FUNCTIONS

        std::string getAnimalName() const;
        //function to get the animal name (milos, loof, mickey,etc...)
        //postcondition : the name of the animal is returned

        std::string getAnimalType() const;
        //function to get the animal type (mammals,reptile,bird,fish)
        //postcondition : the type of the animal is returned

        std::string getAnimalHabitat() const;
        //function to get the habitat of the animal(rain forest, polar, tundra, desert, junugle)
        //postcondition : the habitat of the animal id returned

        std::string getAnimalClass() const;
        //function to get the class of the animal : Carnivore, herbivore, etc...
        //postcondition : The animal's class is returned

        bool isAnimalHumanFriendly() const;
        //function to return a true or false responce to wheter the animal is human humanFriendly
        //postcondition : A true or false value is returned

        void printAnimalInfo() const;
        //function to print all information about the animal object
        //postcondition : The name, the age, the habitat, the type are printed


        int getAnimalAge() const;
        //function to get the age of the animal
        //postcondition : the age of the animal is returned

                //SETTER FUNCTIONS

        void setAnimalName(std::string);
        //function to set the animal name (milos, loof, mickey,etc...)
        //postcondition : the name of the animal is set to the new name passed as parameter

        void setAnimalType(std::string);
        //function to set the animal type (mammals,reptile,bird,fish)
        //postcondition : the type of the animal is set to the new type passed as parameter

        void setAnimalHabitat(std::string);
        //function to set the habitat of the animal(rain forest, polar, tundra, desert, junugle)
        //postcondition : the habitat of the animal is set to the new habitat passed as parameter

        void setAnimalClass(std::string);
        //function to set the animal's class given a string
        //postcondition : The animal class is set to a new string value

        void setAnimalAge(int);
        //function to set the age of the animal
        //postcondition : animalAge is changed to the new age

};

