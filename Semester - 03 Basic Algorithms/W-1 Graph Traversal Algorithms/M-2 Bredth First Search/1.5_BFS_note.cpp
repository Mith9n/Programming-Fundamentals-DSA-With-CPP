#include <bits/stdc++.h>
using namespace std;

// ১০০৫ টা নোড পর্যন্ত ধারণ করতে পারে এমন একটি অ্যাডজেসেন্সি লিস্ট (Adjacency List)
vector<int> adj_list[1005];

// প্রতিটি নোড ভিজিটেড হয়েছে কিনা তা ট্র্যাক করার জন্য একটি বুলিয়ান অ্যারে
bool visited_arr[1005];

// BFS (Breadth First Search) ফাংশন যা src থেকে শুরু করবে
void bfs(int src) {
    queue<int> q;             // BFS এর জন্য একটি কিউ তৈরি করা হলো
    q.push(src);              // সোর্স নোড কিউতে যোগ করা হলো
    visited_arr[src] = true;  // সোর্স নোডকে ভিজিটেড হিসেবে চিহ্নিত করা হলো

    // যতক্ষন না কিউ খালি হয়, ততক্ষন লুপ চালানো হবে
    while (!q.empty()) {
        int parent = q.front();  // কিউ এর সামনে থেকে একটি নোড নেওয়া হলো
        q.pop();                 // নেওয়া নোডটি কিউ থেকে বের করা হলো

        cout << parent << " ";   // বর্তমান নোডটি প্রিন্ট করা হলো

        // বর্তমান নোডের সকল অ্যাডজেসেন্ট (children) নোডের উপর লুপ চালানো
        for (int child : adj_list[parent]) {
            // যদি এই child নোডটি এখনো ভিজিট না করা হয়ে থাকে
            if (!visited_arr[child]) {
                q.push(child);          // child নোডটি কিউতে যোগ করা হলো
                visited_arr[child] = true;  // child নোডকে ভিজিটেড হিসেবে চিহ্নিত করা হলো
            }
        }
    }
}

int main() {
    int Node, Edge;
    cin >> Node >> Edge;  // নোড এবং এজের সংখ্যা ইনপুট হিসেবে নেওয়া হলো

    // প্রতিটি এজের জন্য ইনপুট নিয়ে গ্রাফ (অ্যাডজেসেন্সি লিস্ট) তৈরি করা হলো
    for (int i = 0; i < Edge; i++) {
        int a, b;
        cin >> a >> b;  // দুইটি নোড a এবং b ইনপুট নেয়া হলো যা একটি এজ দ্বারা যুক্ত
        // নোড a এবং b এর মধ্যে সংযোগ যোগ করা হলো (undirected graph)
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // visited_arr অ্যারে-তে প্রতিটি নোডকে false (অভিজিত নয়) দিয়ে ইনিশিয়ালাইজ করা হলো
    memset(visited_arr, false, sizeof(visited_arr));

    // ইনপুট থেকে সোর্স (Source) নোড নেওয়া হচ্ছে, যেখান থেকে BFS শুরু হবে
    int source;
    cin >> source;  // সোর্স নোড ইনপুট হিসেবে নেওয়া হলো

    // সোর্স নোড থেকে BFS ফাংশন কল করা হলো
    bfs(source);

    return 0;

}

    // সাধারণ for loop ব্যবহার করে

   /* for (int i = 0; i < adj_list[parent].size(); i++) {
    int child = adj_list[parent][i];  // i-তম এলিমেন্টটি child হিসেবে নেওয়া হলো
    if (visited_arr[child] == false) {
        q.push(child);
        visited_arr[child] = true;
    }
    
}*/