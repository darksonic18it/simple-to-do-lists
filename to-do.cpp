#include <iostream>
using namespace std;

int main() {

    string tasks;
    int times;
    string sum;

    cout << "How many tasks will you do today?: ";
    cin >> times; 

    cin.ignore();

    int i = 1;
    while (i <= times) {
        cout << "TO DO LIST!\n";
        cout << "What is your task for today?: ";
        getline(cin, tasks);
        sum += to_string(i) + ". " + tasks + "\n";
        cout << i << ". " << tasks << endl;
        i++;
    }
    cout << "\n";
    cout << "Your TO-DO lists for today: \n";
    cout << sum;

    return 0;
}


