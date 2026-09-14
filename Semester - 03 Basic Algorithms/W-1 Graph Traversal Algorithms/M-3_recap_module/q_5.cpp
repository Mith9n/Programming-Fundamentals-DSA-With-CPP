#include <bits/stdc++.h>
using namespace std;
int row, col;
vector<int> rooms;
char grid[1005][1005];
bool visited_arr[1005][1005];
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool check_valid(int v_row, int v_col) {
        if (v_row < 0 || v_row >= row || v_col < 0 || v_col >= col) {
            return false;
        }
        if (grid[v_row][v_col] == '#' || visited_arr[v_row][v_col]) {
            return false;
        }
        else return true;
}

int dfs_traversal(int src_row, int src_col) {
        visited_arr[src_row][src_col] = true;
        int room_size = 1;

        for (int i = 0; i < 4; i++) {
            int child_row = src_row + mv[i].first;
            int child_col = src_col + mv[i].second;

            if (check_valid(child_row, child_col)) {
                room_size += dfs_traversal(child_row, child_col);
            }
        }
        return room_size;
}

int main() {

    cin >> row >> col;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }

    memset(visited_arr, false, sizeof(visited_arr));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == '.' && visited_arr[i][j] == false) {
                int room_size = dfs_traversal(i, j);
                rooms.push_back(room_size);
            }
        }
    }

    sort(rooms.begin(),rooms.end());

    for (int size : rooms) {
        cout <<size <<" ";
    }

}
