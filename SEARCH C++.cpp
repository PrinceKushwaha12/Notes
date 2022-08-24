*******SEARCH*******
1. BINARY SEARCH ARRAY?
2. BINARY SEARCH 2D ARRAY ?
3. LEANER SEARCH 2D MATRIX IN ARRAY ?
4. FIND ELEMENT IN 2D ARRAY ?
5. MOUNTAIN ARRAY ?
6. PIVOT ELEMENT ?
7. PIVOT ELEMENT [RECURSION] ?
8. MOUNTAIN ARRAY [RECURSION] ?
9. BINARY SEARCH [RECURSION] ?
10. LEANER SEARCH [RECURSION] ? 
11. LEANER SEARCH ?
12. PAINTER PARTITION PROBLEM ?
13. BOOK ALLOCATION PROBLEM ? 
15. FIRST AND LAST OCCURANCE IN A ARRAY ? 
16. FIRST AND LAST OCCURANCE IN A ARRAY [RECURSION] ? 
17. AGGRECIVE COW ?

1. BINARY SEARCH ARRAY?
Ans :- 
#include <bits/stdc++.h>
using namespace std;
int search(int nums[], int n, int target) {
    int mid, start = 0, end = n - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            end = mid - 1;
        }
        else {
            start = start + 1;
        };
    };
    return -1;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int key = 5;
    cout << search(arr, n, key);
    return 0;
};

2. BINARY SEARCH 2D ARRAY ?
Ans :- 
#include<iostream>
using namespace std;
void binarySearch(int matrix[][3], int n, int m, int target) {
  int start = 0;
  int end = n * m - 1;
  int mid;
  int ans;
  while(start <= end) {
    mid = (start + end ) / 2;
    int element = matrix[mid/m][mid%m];
    if(element == target) {
      ans = mid;
    };
    if(element < target) {
      start = mid + 1;
    }
    else {
      end = mid - 1;
    };
  };
  cout << "index is : " << ans << endl;
};

int main() {
  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }cout << endl;
  };
  int target = 9;
  cout << "target is : " << target << endl;
  binarySearch(matrix, 3, 3, target);
return 0; 
};

3. LEANER SEARCH 2D MATRIX IN ARRAY ?
Ans :- 
#include<iostream>
using namespace std;
int search(int matrix[][5], int n, int m, int target) {
  int row = 0;
  int col = m - 1;
  while(row < n && col >= 0) {
    int element = matrix[row][col];
    if(element == target) {
      return 1;
    }
    else if(element < target) {
      row++;
    }
    else {
      col--;
    };
  };
return 0;
};

int main() {
  int matrix[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cout << matrix[i][j] << " ";
    }cout << endl;
  };
  int target = 11;
  cout << "alive and not alive : " << search(matrix, 5, 5, target) << endl;
return 0; 
};

4. FIND ELEMENT IN 2D ARRAY ?
Ans :- 
#include<iostream>
using namespace std;
int topossible(int arr[][2], int target, int n, int m) {
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(arr[i][j] == target) {
        return 1;
      };
    };
  };
  return 0;
};

int main() {
  int arr[2][2];
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> arr[i][j];
    };
  };
  cout << "print 2d array !" << endl;
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      cout << arr[i][j] << " ";
    }cout << endl;
  };

  int target;
  cout << "enter target : ";
  cin >> target;

  if(topossible(arr,target,2,2)) {
    cout << "Is right ? " << endl;
  };
  else {
    cout << "Is rong ? " << endl;
  };
return 0; 
};

5. MOUNTAIN ARRAY ?
Ans :- 
#include <bits/stdc++.h>
using namespace std;
void mountain(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = 0;
    while(s < e) {
        mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        };
    };
    cout << s << endl; 
};

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;
    mountain(arr, n);
    return 0;
};

6. PIVOT ELEMENT ?
Ans :- 
#include <iostream>
using namespace std;
int pivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid;
    while (s < e) {
        mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        };
    };
    return s;
};

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    };
    cout << "privot element is : " << pivot(arr, n) << endl;
    return 0;
};

7. PIVOT ELEMENT [RECURSION] ?
Ans :-
#include<iostream>
using namespace std;
int findPivotElement(int *arr, int start, int end) {
    //base case 
    if(start > end) {
        return 0;
    };

    int mid = (start + end) / 2;
    if(arr[mid] > arr[0]) {
        //recursive call
        return findPivotElement(arr, mid + 1, end);
    }
    else {
        return mid;
    };
};
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    };
    int start = 0;
    int end = n - 1;
    cout << "pivot is : " << findPivotElement(arr, start, end) << endl;
    delete []arr;
return 0; 
};

8. MOUNTAIN ARRAY [RECURSION] ?
Ans :- 
#include<iostream>
using namespace std;
void towerOffHanoi(int number, char sorce, char distination, char helper) {
    // base case : 
    if(number == 0) {
        return;
    };
    //recursive call
    towerOffHanoi(number - 1, sorce, helper, distination);
    cout << "sorce : " << sorce << " " << "distination : " << distination << endl;
    towerOffHanoi(number - 1, helper , distination, sorce);
};

int main() {
    int number;
    cin >> number;
    char sorce;
    cin >> sorce;
    char distination;
    cin >> distination;
    char helper;
    cin >> helper;
    towerOffHanoi(number, sorce, distination, helper);
return 0; 
};

9. BINARY SEARCH [RECURSION] ?
Ans :- 
#include<iostream>
using namespace std;
int binarySearch(int *arr, int start, int end, int target) {
    // base case
    if(start > end) {
        return 0;
    }
    int mid = (start + end) / 2;

    if(arr[mid] == target) {
        return 1;
    };
    if(arr[mid] > target) {
        return binarySearch(arr, start, mid - 1, target);
    }
    else {
        return binarySearch(arr, mid + 1, end, target);
    };
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 2;
    int size = 5;
    // call function
    cout << "ans : " << binarySearch(arr, 0, size - 1, target) << endl;
return 0; 
};

10. LEANER SEARCH [RECURSION] ? 
Ans :- 
#include<iostream>
using namespace std;
int lenearsearch(int *arr, int n, int key) {
  // base case
  if(n == 0) {
    return 0;
  }
  
  // recursive call 
  if(arr[0] == key) {
    return 1;
  }
  else {
    return lenearsearch(arr + 1, n - 1, key);
  };
};

int main() {
  int arr[] = {1,4,3,5,3};
  int n = 5;
  int key = 7;
  cout << lenearsearch(arr, n, key) << endl;
return 0; 
};

11. LEANER SEARCH ?
Ans :-
#include<iostream>
using namespace std;
int leanerSearch(int *arr, int size, int target) {
    int ans = -1;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            ans = i;
        };
    };
    return ans;
};

int main() {
    int size;
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    };

    int target;
    cin >> target;
    cout << "index is : " << leanerSearch(arr, size, target);
return 0; 
};

12. PAINTER PARTITION PROBLEM ?
Ans :- 
#include <bits/stdc++.h>
using namespace std;
bool IsPossible(int arr[], int n, int k, int mid) {
    int painterNumber = 1;
    int last_painter_area = 0;
    for (int i = 0; i < n; i++) {
        if (last_painter_area + arr[i] <= mid) {
            last_painter_area = last_painter_area + arr[i];
        }
        else {
            painterNumber++;
            if (painterNumber > k && arr[i] > mid) {
                return false;
            };
            last_painter_area = arr[i];
        };
    };
    if (painterNumber > k) {
        return false;
    };
    return true;
};

int painter(int arr[], int n, int k) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (IsPossible(arr, n, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        };
    };
    return ans;
};

int main() {
    int arr[] = {1,2,3,4};
    int n = 4;
    int k = 2;
    cout << "Every painter Printing Area Is : " << painter(arr, n, k) << endl;
    return 0;
};

13. BOOK ALLOCATION PROBLEM ? 
Ans :-
#include <bits/stdc++.h>
using namespace std;
bool IsPossible(int arr[], int n, int student, int mid) {
    int countstudent = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] + pagesum <= mid) {
            pagesum = pagesum + arr[i];
        }
        else {
            countstudent++;
            if (countstudent > student || arr[i] > mid) {
                return false;
            };
            pagesum = arr[i];
        };
    };
    if (countstudent > student) {
        return false;
    };
    return true;
};

int Book(int arr[], int n, int student) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    };
    int e = sum;
    int mid;
    int ans;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (IsPossible(arr, n, student, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        };
    };
    return ans;
};

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int student = 2;
    cout << " maximum pages student read Is : " << Book(arr, n, student) << endl;
    return 0;
};

15. FIRST AND LAST OCCURANCE IN A ARRAY ? 
Ans :- 
#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > target) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        };
    };
    return ans;
};

int last(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ans = mid;
            s = mid + 1;
        };
        else if (arr[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        };
    };
    return ans;
};

int main() {
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 3, 4, 5};
    int n = 10;
    int target = 1;
    // first endex  is
    cout << "first index is : " << first(arr, n, target) << endl;
    // last index is
    cout << "last index is : " << last(arr, n, target) << endl;
    return 0;
};

16. FIRST AND LAST OCCURANCE IN A ARRAY [RECURSION] ? 
Ans :-

#include<iostream>
using namespace std;
int firstOccurance(int *arr, int size, int start, int target) {
    //base case 
    if(start == size) {
        return -1;
    };

    if(arr[start] == target) {
        return start;
    };
    //recursive call
    return firstOccurance(arr, size, start + 1, target);
};

int lastOccurance(int *arr, int size, int start, int target) {
    //base case
    if(start == size) {
        return -1;
    }
    int storePoints = lastOccurance(arr, size, start + 1, target);
    if(storePoints != -1) {
        return storePoints;
    };

    if(arr[start] == target) {
        return start;
    };
    return -1;
};

int main() {
  int arr[] = {1,2,3,2,4,2,5};
  int size = 7;
  int target = 2;
  cout << firstOccurance(arr, size, 0, target) << endl;
  cout << lastOccurance(arr, size, 0, target) << endl;
return 0; 
}; 

17. AGGRECIVE COW ?
Ans :- 
#include <bits/stdc++.h>
using namespace std;
bool IsPossible(int stalls[], int n, int Cow, int mid) {
    int CountCow = 1;
    int LastPos = stalls[0];
    for (int i = 0; i < n; i++) {
        if (stalls[i] - LastPos >= mid) {
            CountCow++;
            if (CountCow == Cow) {
                return true;
            }
            LastPos = stalls[i];
        };
    };
    return false;
};

int Aggrecive_Cow(int stalls[], int n, int Cow) {
    sort(stalls, stalls + 2);
    int s = 0;
    int e = stalls[n - 1];
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (IsPossible(stalls, n, Cow, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        };
    };
    return ans;
};

int main() {
    int stalls[] = {1, 2, 3};
    int n = 3;
    int k = 2;
    cout << Aggrecive_Cow(stalls, n, k) << endl;
    return 0;
};