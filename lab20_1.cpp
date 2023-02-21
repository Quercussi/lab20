#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){

    if(argc != 1){
        double avg = atof(argv[1]);
        for(int i = 2; i < argc; i++){
            avg += atof(argv[i]);
        }
        avg /= (argc - 1);

        cout << "---------------------------------\n";
        cout << "Average of " << (argc - 1) << " numbers = " << avg << '\n';
        cout << "---------------------------------\n";
    }else{
        cout << "Please input numbers to find average.\n";
    }

    return 0;
}