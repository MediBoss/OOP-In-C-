#include <iostream>
#include "animal.h"
#include <string>

using namespace std;
            //IMPLEMENTATION OF THE CONSTRUCTORS

    Animal::Animal(){
            // default constructor
            this->animalName = "no name";
            this->animalType = "no type";
            this->animalClass = "no class";
            this->animalHabitat = "no habitat";
            this->humanFriendly = false; //will be false by default
            this->animalAge = 0;
    }

    Animal::Animal(string name, string type,string habitat, string Animalclass, bool friendly, int age){
        //constructor with parameters
        this->animalName = name;
        this->animalType = type;
        this->animalHabitat = habitat;
        this->animalClass = animalClass;
        this-> humanFriendly = friendly;
        this->animalAge = age;
    }

    Animal::Animal(const Animal& otherAnimal){
      //copy constructor
      this->animalName = otherAnimal.animalName;
      this->animalType = otherAnimal.animalType;
      this->animalHabitat = otherAnimal.animalHabitat;
      this->animalClass = otherAnimal.animalClass;
      this->animalAge = otherAnimal.animalAge;
      this->humanFriendly = otherAnimal.humanFriendly;
    }


            //IMPLEMENTATION OF THE GETTER FUNCTIONS

    string Animal:: getAnimalName() const{

        return this->animalName;
    }

    string Animal:: getAnimalType() const{

        return this->animalType;
    }

    string Animal:: getAnimalHabitat() const{

        return this->animalHabitat;
    }

    string Animal:: getAnimalClass() const{

      return this->animalClass;
    }

    int Animal:: getAnimalAge() const{

        return this->animalAge;
    }

    bool Animal:: isAnimalHumanFriendly() const{

      if(this->humanFriendly == false){

        cout<<"False";
        return false;

      }else{

        cout<<"True";

      }

      return true;
    }

    void Animal:: printAnimalInfo() const {

        cout<<"\nAnimal Name : "<<this->getAnimalName()<<"\nAnimal Age : "<<this->getAnimalAge()<<"\nAnimal Type : "<<this->getAnimalType()<<"\nAnimal Habitat : "<<this->getAnimalHabitat()<<"\nAnimal Class : "<<this->getAnimalClass()<<"Human Friendly : "<<this->isAnimalHumanFriendly()<<endl;

    }

            //IMPLEMENTATION OF THE SETTER FUNCTIONS

    void Animal:: setAnimalName(string name){

        this->animalName = name;

    }

    void Animal:: setAnimalType(string type){

        this->animalType = type;

    }

    void Animal:: setAnimalHabitat(string habitat){

        this->animalHabitat = habitat;

    }

    void Animal:: setAnimalAge(int age){

        this->animalAge = age;

    }
