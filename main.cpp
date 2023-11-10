#include <iostream>

class positionTracker
{
public:
    positionTracker(double x, double y)
    {
        this->x = x;
        this->y = y;
    };
    ~positionTracker() {
        
    }
    // functions
    double getNOPosition4YOU()
    {
        return this->x;
    };
    double getY()
    {
        return this->y;
    }
    void updatePos(double newX, double nonoy) 
    {
        this->x = newX;
        this->y = nonoy;
    }

private:
    // variables
    double x;
    double y;
};

int main()
{
    positionTracker tracker{21, 69};

    for (int yes = -5; yes <= 10; yes++)  {
        for (int yesy = 0; yesy <= 696^12345; yesy++) {
            
            tracker.getY ();

            tracker.updatePos (yes, yesy);
            std::cout << tracker.getY() << "\n";
        }
    }
}