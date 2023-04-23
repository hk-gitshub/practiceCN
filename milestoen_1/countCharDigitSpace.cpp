#include <iostream>
using namespace std;

int main() {

//   char c;
//   int i, count = 0;
// //   c = cin.get();
//   int spaceCount = 0;
//   int intCount = 0;

//   while (true) {
//     c = cin.get();
//     if (c == '$') {
//       break;
//     } else if (c == ' ') {
//       spaceCount++;
//     } else if (isdigit(c)) {
//       intCount++;
//     } else {
//       count++;
//     }
//   }

//   cout << count << " " << intCount << " " << spaceCount;
char charInput;
int charCount=0, digitCount=0, spaceCount=0;


while(true){
  charInput=cin.get();

  if (charInput=='$'){
    break;
  }
  else{
    if (charInput >= 'a' && charInput <= 'z') {
      charCount++;
    }

    else if (charInput>='0' && charInput<='9'){
      digitCount++;
    }
    else{
      spaceCount++;
    }
  }
}

cout<<charCount<<" "<<digitCount<<" "<<spaceCount;
}
