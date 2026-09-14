#include <bits/stdc++.h>
using namespace std;

// 2D গ্রিড (ম্যাপ) ইনপুট ও DFS ট্রাভার্সালের জন্য ভেরিয়েবল ডিক্লেয়ার।
char grid[101][101]; // গ্রিড যেখানে ইনপুটের সেলগুলো স্টোর করা হবে।
bool visited_arr[101][101]; // প্রতিটি সেল ভিজিট হয়েছে কিনা তা ট্র্যাক করতে ব্যবহৃত।
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // চারপাশের চারটি ডিরেকশনের জন্য মুভমেন্ট।
int n, m; // গ্রিডের সারি (row) এবং কলাম (column) সংখ্যা।

// `valid` ফাংশন: গ্রিডের সীমার মধ্যে সেলটি বৈধ কিনা তা যাচাই করে।
bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) { // গ্রিডের সীমার বাইরে হলে false।
        return false;
    }
    return true; // সীমার মধ্যে থাকলে true।
}

// DFS ফাংশন: গ্রিডে রিকার্সিভ DFS ট্রাভার্সাল।
void dfs(int s_row, int s_col) {
    cout << s_row << " " << s_col << endl; // বর্তমানে প্রসেস হওয়া সেলের স্থানাঙ্ক (row, col) প্রিন্ট।
    visited_arr[s_row][s_col] = true; // বর্তমান সেলটিকে ভিজিটেড হিসাবে চিহ্নিত করা।

    for (int i = 0; i < 4; i++) { // চারপাশের চারটি সেল চেক করা।
        int child_row = s_row + mv[i].first; // নতুন সেলের row।
        int child_col = s_col + mv[i].second; // নতুন সেলের column।
        if (valid(child_row, child_col) && !visited_arr[child_row][child_col]) {
            // যদি সেলটি বৈধ এবং আগে ভিজিট করা না হয়, তাহলে DFS কল।
            dfs(child_row, child_col);
        }
    }
}

int main() {
    cin >> n >> m; // গ্রিডের সাইজ ইনপুট।
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j]; // গ্রিডের সেল ইনপুট।
        }
    }

    // ইনপুট নেওয়া গ্রিড প্রিন্ট করা।
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    memset(visited_arr, false, sizeof(visited_arr)); // ভিজিটেড অ্যারে ফালস দিয়ে ইনিশিয়ালাইজ।

    int s_row, s_col;
    cin >> s_row >> s_col; // DFS শুরুর স্থানাঙ্ক ইনপুট।
    dfs(s_row, s_col); // DFS কল শুরু।

    // এই কোড প্রথমে ইনপুট থেকে গ্রিড তৈরি করে এবং পরে দেওয়া স্থান থেকে রিকার্সিভ DFS চালায়।
}
