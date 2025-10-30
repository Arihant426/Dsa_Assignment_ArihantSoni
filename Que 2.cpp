#include <iostream>
using namespace std;

int main()
 {
    string s;
    cout<<"enter a string = ";
    cin >> s;
    int index = -1;
    for (int i = 0; i < s.length(); i++)
        {
        int count = 0;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            index = i;
            break;
        }
    }

    cout << "first unique character index " << index << endl;
    return 0;
}
