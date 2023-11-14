#include<iostream>
using namespace std;

class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() {
            coach = 0;
            player = 0;
        }

    ManchesterUnited operator++() {
        ++coach;
        ++player;
        return *this;
    }

    void getData(int Coach, int Player) {
        coach = Coach;
        player = Player;
    }

    void printData() {
        cout << "Coach: " << coach << ", Player: " << player << endl;
    }
};

int main() {
    ManchesterUnited ronaldo, fernandes;

    cout << "Initial values:" << endl;
    cout << "Ronaldo: ";
   ronaldo.printData();
    cout << "Fernandes: ";
    fernandes.printData();


    ronaldo.getData(4, 5);
    fernandes.getData(5, 6);

   
    cout << "\nValues before increment:" <<endl;
    cout << "Ronaldo: ";
    ronaldo.printData();
    cout << "Fernandes: ";
    fernandes.printData();


    ++ronaldo;
    cout << "\nValues after increment:" << endl;
    cout << "Ronaldo: ";
    ronaldo.printData();
    cout << "Fernandes: ";
    fernandes.printData();

    return 0;
}
