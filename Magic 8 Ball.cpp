#include <iostream>
#include <cstdlib>

/*this program is making a very unusual magic 8 ball */



int main() {
  std::cout << "Magic 8 ball:\n\n";
  
  srand(time(NULL));

    int answer = std::rand() % 10;


    if (answer == 0) {
      std::cout << "Very doubtful\n";
    }
    else if (answer == 1)  {
      std::cout << "It will soon come!\n";
    }
    else if (answer == 2) {
      std::cout << "What was the question again?\n";
    }
    else if (answer == 3) {
      std::cout << "Yes\n";
    }
    else if (answer == 4) {
      std::cout << "L + Bozo + Ratio + You Fell Off\n";
    }
    else if (answer == 5) {
      std::cout << "No\n";
    }
    else if (answer == 6) {
      std::cout << "You kiss your homies good night, what a Gigga Chad\n";
    }
    else if (answer == 7) {
      std::cout << "That is a secret I can not reveal\n";
    }
    else if (answer == 8) {
      std::cout << "Touch Grass\n";
    }
    else if (answer == 9) {
      std::cout << "Possibly\n";
    }
    else {
      std::cout << "It is certain.\n";
                  
  }
}
