#include<iostream>

using namespace std;

class Hero
{
    private:
        int health;
    public:
        char *name;
        char level;
    Hero()
    {
        //cout<<" Default constructor.";
        name = new char[100];
    }

    Hero(Hero &obj) //Copy constructor 
    {
        char *ch= new char[strlen(obj.name)+1];   //deep copy.
        strcpy(ch,obj.name);
        this->name=ch;
        this->level=obj.level;
        this->health=obj.health;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void setHealth(int x)
    {
        health=x;
    }
    void setLevel(char l)
    {
        level=l;
    }
    void print()
    {
        cout<<"[ "<<this->name<<" "<<this->health<<" "<<this->level<<" ]"<<endl;
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "vineet";
    hero1.setName(name);
    hero1.print();

    Hero hero2=hero1;
    hero2.print();

    hero1.name[0]='P';
    hero1.print();

    hero2.print();      //Deep copy.
    return 0;
}