#include <iostream>
#include <string>
#include <vector>

void addInPlace(double *n) {
    *n += 69; 
}

// pointer demonstration
int main() {
    double test = 0;
    addInPlace(&test); 

    std::cout << test; 

}



//data types/storage container
struct result_t{ // a class to store data
    bool isSuscessful;
    std::string errorDescription;
    double precentError;
    std::vector<double> results;
};

result_t motorGoToTarget() {
    // do things
    result_t res = {
        .isSuscessful = false; 
    };
    return res;
}
