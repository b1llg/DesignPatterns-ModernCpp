#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CombinationLock
{
    vector<int> combination;
    int digits_entered{ 0 };
    bool failed{ false };

    void reset()
    {
        status = "LOCKED";
        digits_entered = 0;
        failed = false;
    }
public:
    string status;

    CombinationLock(const vector<int>& combination) : combination(combination) {
        reset();
    }

    void enter_digit(int digit)
    {
        if (status == "LOCKED") status = "";
        status += to_string(digit);
        if (combination[digits_entered] != digit)
        {
            failed = true;
        }
        digits_entered++;

        if (digits_entered == combination.size())
            status = failed ? "ERROR" : "OPEN";
    }
};

int main()
{
    CombinationLock cl({ 1,2,3 });
    cout << "LOCKED" << " == "  << cl.status << endl;

    cl.enter_digit(1);
    cout << "1" << " == " << cl.status << endl;

    cl.enter_digit(2);
    cout << "12" << " == " << cl.status << endl;

    cl.enter_digit(3);
    cout << "OPEN" << " == " << cl.status << endl;

    return 0;

}