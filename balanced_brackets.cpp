#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    char arr1[] = {'(','[','{'};
    char arr2[] = {')',']','}'};
 stack<int> stack;
 for(int i=0; i<s.length(); i++){
     
     if( !stack.empty() && stack.top() == arr1[0] && s[i]== arr2[0]){
         stack.pop();
     }
     else if( !stack.empty() && stack.top() == arr1[1] && s[i] == arr2[1]){
         stack.pop();
     }
     else if(!stack.empty() && stack.top()== arr1[2] && s[i] == arr2[2]){
         stack.pop();
     }
     else{
         stack.push(s[i]);
     }

 }
    if(stack.empty()){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}