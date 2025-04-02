#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

const int* data_ptr;


int main() {
    // instance of an engine (rnd_device)
    random_device rnd_device;
    mt19937 mersenne_engine {rnd_device()}; // where the random ints are generated 
    uniform_int_distribution<int> dist {1, 52};

    auto gen = [&](){
        return dist(mersenne_engine);
    };

    vector<int> vec(10);
    generate(vec.begin(), vec.end(), gen);

    for (const auto& i : vec) {
        data_ptr = &i;
        cout << "data:" << data_ptr << " ";
    }
    cout << endl;
    
    return 0;

}
