//Harold is a kidnapper who wrote a ransom note, but now he is worried it will be traced back to him through his handwriting.He found a magazine and wants to know if he can cut out whole words from it and use them to create an untraceable replica of his ransom note. The words in his note are case-sensitive and he must use only whole words available in the magazine. He cannot use substrings or concatenation to create the words he needs.

//Given the words in the magazine and the words in the ransom note, print Yes if he can replicate his ransom note exactly using whole words from the magazine; otherwise, print No.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  map<string, int> magazine;

  for (int i = 0; i < m; i++) {
    string word;
    cin >> word;

    if (magazine.find(word) == magazine.end()) {
      magazine[word] = 1;
    } else {
      magazine[word]++;
    }
  }

  bool ans = true;
  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;

    if (magazine.find(word) == magazine.end() || magazine[word] == 0) {
      ans = false;
      break;
    } else {
      magazine[word]--;
    }
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
