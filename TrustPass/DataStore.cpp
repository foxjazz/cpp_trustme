#include <string>
#include <unordered_map>

using namespace std;

class DataStore {

	unordered_map<string, string> dictionary;
	DataStore() {

	};

public:
	void Add(string k, string v) {
	//	dictionary.insert(k, v);
	}
	string Find(string q) {

	}

	auto Get(string k) {
		return dictionary.find(k);
	}
	string* List() {
		auto l = dictionary.size();
		string* list = new string[l];
		int i = 0;
		for (auto iter = dictionary.begin(); iter != dictionary.end(); ++iter) {
			auto cur = iter->first; // pointer to Node
			list[i++] = dictionary[cur]; // could also have used  cur->y = iter->second;
		}
		return list;
	}
};
