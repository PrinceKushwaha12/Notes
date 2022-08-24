*********C++ IMPORTENT**********

1. HOW TO FIND ASCII IN C++ ?
Ans :-
#include<iostream>
using namespace std;
int main() {
  char c;
  cout << " enter ch : ";
  cin >> c;
  cout << " ascii value is : " << c << " -> " << int(c) << endl;
return 0; 
};

2. MOVE ZERO IN RIGHT SIDE ?
Ans :-
#include<iostream>
#include<array>
using namespace std;
void Move_Zero(int arr[], int n) {
  int Zero = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
      swap(arr[i],arr[Zero]);
      Zero++;
    };
  };
};

void Print(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    cout << " " << arr[i] << " ";
  }cout << endl;
};

int main() {
  int arr[5]= {0,1,0,3,12};
  Move_Zero(arr,5);
  Print(arr,5);
return 0; 
};

3. REVERSE WORD IN A STRING ?
Ans :-
#include<string>
#include<algorithm>
using namespace std;
string reverse(string name) {
  if(name == '\0') {
    int s = 0;
    int e = name.length() - 1;
    while(s < e) {
      swap(name[s++],name[e--]);
    };
  };
  return name;
};

int main() {
  string name = {'p', 'r', 'i', 'n', 'c', 'e', '\0',
   'k', 'u', 'm', 'a', 'r', '\0'};
  for (int i = 0; i < name.length(); i++) {
      if(reverse(name[i])) {
       cout << name[i];
     };
  };
return 0; 
};

4. FIND CHARACTER ARRAY LENGTH ?
Ans :-
#include<iostream>
using namespace std;
int find_length(char name[]) {
  int count = 0; 
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  };
  return count;
};
int main() {
  char name[20];
  cout << " enter name : ";
  cin >> name;
  cout << " length is : " << find_length(name) << endl;
return 0; 
};

5. REVERSE CHARACTER ARRAY ?
Ans :-
#include<iostream>
using namespace std;

void reverse(char name[], int n) {
  int s = 0;
  int e = n - 1;
  while(s < e) {
    swap(name[s++], name[e--]);
  };
};

int find_length(char name[]) {
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}
 
int main() {
  char name[20];
  cout << " enter name : ";
  cin >> name;

  int n = find_length(name);
  cout << " Length is : " << n << endl;
  reverse(name,n);
  cout << " reverse after char array : " << name << endl;
return 0; 
};

6. REVERSE A ARRAY USING VECTOR ?
Ans :-
#include<iostream>
#include<vector>
using namespace std;
vector <int> Reverse(vector <int> v) {
  int s = 0;
  int e = v.size() - 1;
  while(s < e) {
    swap(v[s],v[e]);
    s++;
    e--;
  }
  return v;
};

void Ans_print(vector <int> Ans) {
  for(int i = 0; i < Ans.size(); i++) {
    cout << Ans[i] << " ";
  }
  cout << endl;
};

int main() {
  vector <int> v;
  v.push_back(4);
  v.push_back(5);
  v.push_back(13);
  v.push_back(8);
  v.push_back(9);

  vector <int> Ans = Reverse(v);  
  cout << " Print Ans " << endl;
  Ans_print(Ans);

return 0; 
};

7. ROTATED ARRAY ?
Ans :-
#include<iostream>
#include<vector>
using namespace std;
void Rotated(int arr[], int n, int k) {
  int temp[n];
   for(int i = 0; i < n; i++) {
     temp[(i + k) % n] = arr[i];
   };

   for(int i = 0; i < n; i++) {
     arr[i] = temp[i];
   };
};

void Print( int arr[], int n) {
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }cout << endl;
};

int main() {
  int arr[] = {9,4,7,10};
  int n = 4;
  int k = 2;
  Rotated(arr,n,k);
  Print(arr,n);
return 0; 
};

8. REMOVE SPACE IN STRING ?
Ans :-
#include<iostream>
#include<string>
using namespace std;
string remove_space(string name) {
  string temp;
  for(int i = 0; i < name.length(); i++) {
    // condition is also my string   equal in some space after store @40; 
    if(name[i] == ' ') {
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    };
    else {
      temp.push_back(name[i]);
    };
  };
  return temp;
};
int main() {
  string name;
  // cin >> name;
  getline(cin,name);
  cout << " remove after string is : " << remove_space(name) << endl;
return 0; 
}; 

9. CHECK SORTED OR ROTATED ARRAY ?
Ans :- 
#include<iostream>
using namespace std;
bool Check_Sorted_Rotated(int nums[], int n) {
  int count = 0;
  for(int i = 1; i < n; i++) {
    if(nums[i - 1] > nums[i]) {
      count++;
    };
  };
  if(nums[n-1] > nums[0]) {
    count++;
  };
  return count >= 1;
};

int main() {
  int nums[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(nums)/sizeof(nums[0]);
  int Ans = Check_Sorted_Rotated(nums, n);
  if(Ans == 1) {
    cout << "Ans : " << " true " << endl;
  }
  else {
    cout << "Ans : " <<" false " << endl;
  };
return 0;
};

10. CHECH PALIDROME ?
Ans :- 
#include<iostream>
using namespace std;
int length(char name[]) {
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  };
  return count;
};

bool to_lower(char ch) {
  if(ch >= 'a' && ch <= 'z') {
    return ch;
  }
  else {
    int temp = ch - 'A' + 'a';
    return temp;
  };
};

bool palidrome(char name[], int n) {
  int s = 0;
  int e = n - 1;
  while(s<e) {
    if(to_lower(name[s]) != to_lower(name[e])) {
      return 0;
    }
    else {
      s++;
      e--;
    };
  };
  return 1;
};

int main() {
  char name[20];
  cout << " enter name : ";
  cin >> name;
  int n = length(name);
  cout << " length is : " << n << endl;
  cout << " palidrome ro not :  " << palidrome(name,n) << endl;
return 0; 
};

11. MARGE SORTED ARRAY ?
Ans :-
#include<iostream>
#include <array>
using namespace std;
void Marge_Sort_Array(int arr1[], int N, int arr2[], int M, int arr3[]) {
  int I = 0;
  int J = 0;
  int K = 0;
  while(I < N && J < M) {
    if(arr1[I] < arr2[J]) {
      arr3[K] = arr1[I];
      I++;
      K++;
    } 
    else {
      arr3[K] = arr2[J];
      J++;
      K++;
   };
};

while(I < N) {
  arr3[K] = arr1[I];
  I++;
  K++;
};

while(J < M) {
  arr3[K] = arr2[J];
  J++;
  K++;
  };
};

void Print_Array(int arr3[], int N) {
  for(int i = 0; i< N; i++) {
     cout << " " << arr3[i] << " ";
  }cout << endl;
};

int main() {
  int arr1[4] = {1, 2, 5, 9};
  int arr2[5] = {3, 4, 6, 7, 8};
  int arr3[9] = {0};
  Marge_Sort_Array(arr1,4,arr2,5,arr3);
  Print_Array(arr3,9);
return 0; 
};

12. REMOVE ACCURANCE ?
Ans :- 
#include<iostream>
using namespace std;
string remove_acc(string name,string search) {
 for(int i = 0; i < name.length(); i++) {
   for(int i = name.find(search); i < name.length(); i++) {
     name.erase(name.find(search), search.length());
   };
  };
return name;
};

int main() {
  string name;
  cout << "enter name : ";
  cin >> name;
  string find;
  cout << "enter find : ";
  cout << "after erase occurance : " << remove_occ(name, find) << endl;
};

13. 