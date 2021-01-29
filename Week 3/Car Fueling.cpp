#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, int n, vector<int> & stops) {
    // write your code here
    int numrefill = 0, currentrefill = 0;
    int lastrefill = 0;
    stops.insert(stops.begin(), 0);
    stops.push_back(dist);
    n = n+2;

    while (currentrefill < (n-1)){
        lastrefill = currentrefill;
        
        while ((currentrefill < (n-1)) && (stops[currentrefill + 1] - stops[lastrefill] <= tank)){
            currentrefill += 1;

            if (currentrefill == (n-1))
            {
                break;
            }   
        }
        if (currentrefill == lastrefill){
            return -1;
        }
        if (currentrefill < (n-1)){
            numrefill += 1;
        }
    }
    return numrefill;
}



int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, n, stops) << "\n";

    return 0;
}
