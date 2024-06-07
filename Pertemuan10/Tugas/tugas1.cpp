#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX = 100;
const int N = 100;
int dist[N][N];
int next[N][N];

void floydWarshall(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            next[i][j] = j;
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    next[i][j] = next[i][k];
                }
            }
        }
    }
}

int cost(const vector<int>& var, int M, int graf[N][N]) {
    int cost = 0;
    for (int i = 0; i < M - 1; i++) {
        cost += graf[var[i]][var[i + 1]];
    }
    cost += graf[var[M - 1]][var[0]];
    return cost;
}

void min(vector<int>& var, int indeks, int M, int& minCost, int graf[N][N]) {
    if (indeks == M) {
        minCost = min(minCost, cost(var, M, graf));
        return;
    }
    for (int i = indeks; i < M; i++) {
        swap(var[i], var[indeks]);
        min(var, indeks + 1, M, minCost, graf);
        swap(var[i], var[indeks]);
    }
}

int main() {
    int M;
    cout << "Masukkan Jumlah Kota : ";
    cin >> M;

    int dist[MAX][MAX];
    
    memset(dist, 0x3f, sizeof dist);
    for (int i = 0; i < M; i++) {
        dist[i][i] = 0;
    }

    cout << "Nilai Cost Matrix" << endl;
    for (int i = 0; i < M; i++) {
        cout << "Cost Element Baris ke - " << i + 1 << ": " << endl;
        for (int j = 0; j < M; j++) {
                int w;
                cin >> w;
                dist[i][j] = w;
        }
    }

    floydWarshall(M);

    cout << "Cost list:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << "\t" << dist[i][j] << "      ";
        }
        cout << endl;
    }

    int mulai = 0;
    int akhir = M - 1;
    int a = -1;
    int min_cost = MAX;

    for (int i = 1; i < M - 1; i++) {
        int cost = dist[mulai][i] + dist[i][akhir] + dist[akhir][mulai];
        if (cost < min_cost) {
            min_cost = cost;
            a = i;
        }
    }

    cout << "\nJalur Terpendek: " << mulai + 1;
    if (a != -1) {
        cout << " ---> " << akhir << " --> " << a + 1 << " ---> " << akhir + 1 << " ---> " << mulai + 1;
    }

    vector<int> var(M);
    for (int i = 0; i < M; i++) {
        var[i] = i;
    }

    int minCost = MAX;
    min(var, 0, M, minCost, dist);

    cout << "\nMinimum Cost: " << minCost << endl;

    return 0;
}
