#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
    map<char, set<int> > cards;
    cards['S'] = set<int>();
    cards['H'] = set<int>();
    cards['C'] = set<int>();
    cards['D'] = set<int>();
    for(int i=1; i<=13; i++){
        cards['S'].insert(i);
        cards['H'].insert(i);
        cards['C'].insert(i);
        cards['D'].insert(i);
    }
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char suit;
        int rank;
        cin >> suit >> rank;
        cards[suit].erase(rank);
    }
    for(auto &suit : "SHCD"){
        for(int rank=1; rank<=13; rank++){
            if(cards[suit].find(rank) != cards[suit].end()){
                cout << suit << " " << rank << endl;
            }
        }
    }
    return 0;
}