#include <iostream>
#include <iostream>
using namespace std;

class player{
    private:
        string name;
        int health;
        int experience;
    public:
        player(string n, int h, int xp){
            name = n;
            health = h;
            experience = xp;
        }
        void output_value(){
            cout << "Name: " << name;
            cout << "\nHealth: " << health;
            cout << "\nExperience: " << experience;
        }
};

int main(){
    player Abdullah("Abdullah", 100, 69);
    Abdullah.output_value();
    
    return 0;
}