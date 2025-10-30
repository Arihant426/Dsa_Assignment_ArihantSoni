#include <iostream>
using namespace std;
void findTwoSum(int nums[], int n, int target) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout<< "Pair found at index: "<<i<<"and"<<j<< endl;
                cout<<"numbers are: "<<nums[i]<<" + "<<nums[j]<<" = "<<target<<endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }
    if (!found) {
        cout<<"No two numbers add up to the target." << endl;
    }
}
void displayArray(int nums[], int n) {
    cout << "array elements: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main() {
    int choice;
    int nums[100], n, target;
    do {
        cout<<" Menu"<<endl;
        cout<<"1. Enter Array"<<endl;
        cout<<"2. Display Array"<<endl;
        cout<<"3. Find Two Sum"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout << "enter size of array: ";
                cin >> n;
                cout << "enter " << n << " elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> nums[i];
                }
                break;
            case 2:
                displayArray(nums, n);
                break;
            case 3:
                cout<<"enter target sum: ";
                cin>> target;
                findTwoSum(nums, n, target);
                break;
            case 4:
                cout<<"exiting"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
        }
    } while (choice != 4);

    return 0;
}
