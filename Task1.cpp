#include <iostream>
#include <unordered_map>
#include <vector>
#include<string>
using namespace std;
struct Player {
    string first_name;
    string last_name;
    string team;
};
vector<Player>players(const vector<Player>& basketball_players,const vector<Player>& football_players){
	std::unordered_map<std::string, std::string> hash1;
	for (const auto& player : basketball_players) {
    	int i = 0;
        string key = player.first_name + "_" +player.last_name;
        hash1[key] = i;
        i++;
    }
    vector<Player>both={};
    for (const auto& player : football_players) {
    
        string key = player.first_name + "_" +player.last_name;
        if(hash1.find(key)!= hash1.end()){
        	both.push_back({player.first_name,player.last_name});
		}
	}
	return both; 
}
int main(){
	vector<Player> basketball_players = {
      {"Jill","Huang","Gators"},
      {"Janko","Barton","Sharks"},
      {"Wanda","Vakulskas","Sharks"},
      {"Jill", "Moloney", "Gators"},
      {"Luuk", "Watkins",  "Gators"}
    };
    vector<Player> football_players = {
      {"Hanzla", "Radosti", "32ers"},
      {"Tina",  "Watkins",  "Barleycorns"},
      {"Alex",  "Patel",  "32ers"},
      { "Jill", "Huang", "Barleycorns"},
      {"Wanda",  "Vakulskas", "Barleycorns"}
    };
    
    
    for (const auto& player : players(basketball_players,football_players)) {
        cout << player.first_name << " " << player.last_name << endl;
    }
    
}

