#include <iostream>
#include <stack>

using namespace std;

 int find_index(string ordered, char target, int l_pos, int r_pos) {
    if (l_pos > r_pos) {
      return -1; // not in the word
    }
    int mid_pos = (l_pos+ r_pos) / 2;

    cout << "mid_pos : " << mid_pos << '+';
    if (ordered[mid_pos] == target) {
      return mid_pos;
    } else if (ordered[mid_pos] < target) {
    

     return find_index(ordered, target, mid_pos+1, r_pos);
   } else {

     return find_index(ordered, target, l_pos, mid_pos-1);
   }
 }

  int sum_letter_vals(string word) {
    int size = word.length();
    string substring;
    if (size == 0) {
      return 0;
    }
    int value = int(word[0]) - 'a' + 1;
    substring = word.substr(1,size);
    cout << "\nsum_letter_vals";
    return value + sum_letter_vals(substring);
 }

int main(int argc, char const *argv[])
{
  cout << "Ans : " << find_index("acghmor",'m',0,7);
  sum_letter_vals("dad");
  return 0;
}