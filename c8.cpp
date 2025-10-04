#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    int n;
    cout << "How many countries data do you want to enter? : ";
    cin >> n;

    string country[n];       
    double emission[n], total = 0;  

    cout << "\nCosmic Carbon Tracker (Global Share %)\n";
    cout << "-------------------------------------\n";

    
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of Country " << i+1 << ": ";
        cin >> country[i];
        cout << "Enter CO2 emission of " << country[i] << " (in billion tons): ";
        cin >> emission[i];
        total += emission[i];   
    }

    cout << "\n🌎 Total Global CO2 Emission = " << total << " billion tons\n\n";

    
    cout << left << setw(15) << "Country"
         << setw(20) << "Emission (Bt)"
         << "Global Share (%)\n";
    cout << "----------------------------------------------------\n";

    
    for (int i = 0; i < n; i++) {
        double share = (emission[i] / total) * 100;  
        cout << left << setw(15) << country[i]
             << setw(20) << emission[i]
             << fixed << setprecision(2) << share << "%\n";
    }

    return 0;
}