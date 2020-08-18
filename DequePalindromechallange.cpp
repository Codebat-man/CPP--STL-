#include <iostream>
#include <deque>

bool is_palindrome(std::string &s){
       std::deque<char> d;
       for(char c: s)
         if(std::isalpha(c))
           d.push_back(std::toupper(c));

  char c1{};
  char c2{};
    while(d.size() > 1){
        c1=d.front();
        c2=d.back();
        d.pop_front();
        d.pop_back();
        if(c1!=c2)
         return false;
      }
      return true;
    }

}

int main(){
    
    is_palindrome()
      
            
}