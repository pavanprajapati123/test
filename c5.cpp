#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Kitne countries ka data lena hai? : ";
    cin >> n;

    string country[n];
    double emission[n], total = 0;

    cout << "\nCosmic Carbon Tracker (Global Share %)\n";
    cout << "-------------------------------------\n";

    // User input
    for (int i = 0; i < n; i++) {
        cout << "Country " << i+1 << " ka naam dijiye: ";
        cin >> country[i];
        cout << country[i] << " ka CO2 emission (in billion tons) dijiye: ";
        cin >> emission[i];
        total += emission[i];
    }

    // Output
    cout << "\n🌎 Global CO2 Emission = " << total << " billion tons\n\n";
    cout << left << setw(15) << "Country" 
         << setw(20) << "Emission (Bt)" 
         << "Share (%)\n";
    cout << "----------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        double share = (emission[i] / total) * 100;
        cout << left << setw(15) << country[i] 
             << setw(20) << emission[i] 
             << fixed << setprecision(2) << share << "%\n";
    }

    return 0;
}