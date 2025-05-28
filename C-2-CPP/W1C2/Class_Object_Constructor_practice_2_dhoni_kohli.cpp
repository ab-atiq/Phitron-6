/*
// Static object create
#include <iostream>
#include <string.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer dhoni;
    dhoni.jersey_no = 10;
    strcpy(dhoni.country, "India");

    cout << dhoni.jersey_no << " " << dhoni.country << endl;
    Cricketer kohli;

    kohli = dhoni; // This seems to copy all data. The default copy assignment operator performs a shallow copy of all member variables, including arrays (element-wise for char[]). Since country is not a pointer, but an array inside the object, its contents are copied properly.
    cout << kohli.jersey_no << " " << kohli.country << endl;
    return 0;
}
*/

// Dynamic object create
#include <iostream>
#include <string.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[100];
    string Region;
};

int main()
{
    // Step 1: Create dynamic object dhoni
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 10;
    strcpy(dhoni->country, "India");
    dhoni->Region = "Asia"; // string so directly assign value

    cout << "Dhoni " << dhoni->jersey_no << " " << dhoni->country << endl;

    // Step 2: Create dynamic object kohli
    Cricketer *kohli = new Cricketer;

    // Step 3: ❌ Wrong way (just assigning pointer): This would make both point to same memory
    // kohli = dhoni;
    // Step 5: Delete dhoni
    // delete dhoni;
    // cout << "Kohli " << kohli->jersey_no << " " << kohli->country << endl;

    // Step 4: ✅ Correct way (manual copy)
    kohli->jersey_no = dhoni->jersey_no;
    // kohli->country = dhoni->country; // can not define in character array
    strcpy(kohli->country, dhoni->country);
    kohli->Region = dhoni->Region;
    // Step 5: Delete dhoni
    delete dhoni;

    // Step 6: Print kohli's info
    cout << "Kohli - Jersey No: " << kohli->jersey_no << ", Country: " << kohli->country << endl;

    // Clean up kohli object
    delete kohli;

    return 0;
}