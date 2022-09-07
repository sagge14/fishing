#include "fish.h"

int main() {
    int sector;
    int count = 0;
    vector<int> pond = {1,1,1,2,0,0,0,0,0};

    vecShuffle(pond);

    cout << "---Fishing---" << endl;

    while(true)
    {
        cout << "Enter the sector number (1-9):";
        enterValue(sector,1,9);
        count++;
        try
        {
            castInPond(pond,sector);
            cout << "You didn't catch anything! Try again!" << endl;
        }
        catch (const fishException& e)
        {
            cout << e.what() << endl;
            cout << "Number of attempts - " << count << endl;
            break;
        }
        catch (const bootException& e)
        {
            cout << e.what() << endl;
            break;
        }
    }

    cout << "---GAME OVER!---" << endl;
    return 0;
}
