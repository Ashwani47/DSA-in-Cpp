#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length()%2 != 0 ) return -1;

  // removing valid part
  stack<char> s;
  for(int i = 0; i < str.length(); i++){
    char ch = str[i];
    if(ch == '{') s.push(ch);
    else{
      //ch is closed braces
      if(!s.empty() && s.top() == '{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }
  int a = 0, b = 0;
  while(!s.empty()){
    if(s.top() == '{'){
      a++;
      s.pop();
    }
    else{
      b++;
      s.pop();
    }
  }
  return (a+1)/2 + (b+1)/2;
}