#include <iostream>
#include <string>
using namespace std;

int find(int arr[], int n, int key)
   {
     int index = -1;

       for(int i=0; i<n; i++)
       {
          if(arr[i]==key)
          {
            index=i;
            break;
          }
       }
      return index;
    }


int main() {
    int amount[15];
    string category[15];
    int i = 0, n = 1;
    cout << "Monthly Household Expenses" << endl;
    while(true) {
       cout << "\nEnter Category #" << n << ": ";
       cin >> category[i];  
       cout << "Amount Spent: ";
       cin >> amount[i];
       
       cout << "\nMore Entry [Y/N]?: ";
       char op;
       cin >> op;
       
       if(op == 'Y' || op == 'y') {
           if(i == 15) break;
       } else {
           break;
       }
      n++; 
      i++;
    }
    int a[15];
    for(int i = 0; i < 15; i++) {
        a[i] = amount[i];
    }
    
    int temp;
    //Sorting Array
    for (int i = 0; i < n; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (amount[i] < amount[j]) {
                temp = amount[i];
                amount[i] = amount[j];
                amount[j] = temp;
            }
        }
    }
    int total = 0;
    cout << "\nCategory\t\t   Amount" << endl; 
    for (int i = 0; i < 15; i++) {
        if(amount[i] != 0) {
             total += amount[i];
             cout << category[find(a ,15, amount[i])] << "\t\t" << amount[i] << endl;
        }
    }
    cout << "\nTotal: Php " << total << ".00" << endl;
    return 0;
}
