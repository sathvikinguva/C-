//Random Numbers
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int random_num{};
    size_t count {10};
    int min{1};
    int max{6};
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for(size_t i{1}; i<=count; ++i){
        random_num = rand() % max + min;
        cout << random_num << endl;
    }
    cout << endl;
    return 0;
}