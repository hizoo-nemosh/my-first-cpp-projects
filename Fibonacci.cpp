#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N = 0;
    unsigned long long nomber1 = 1;
    unsigned long long nomber2 = 1;
    unsigned long long nomber3 = 0;
    
    cin >> N;
    
    if (N <= 90) {
        cout << fixed << setprecision(0);
        cout << nomber1 << " " << nomber2 << " ";
        
        for (int i = 2; i <= N; i++) {
            nomber3 = nomber1 + nomber2;
            cout << nomber3 << " ";
            
            swap(nomber1, nomber2);
            swap(nomber2, nomber3);
        }
        
        double ratio = (double)nomber2 / (double)nomber1;
        cout << "\n" << setprecision(5) << ratio << " ";
    }
    return 0;
}
