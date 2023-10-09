#include <iostream> 
#include <random>
  
int main() 
{ 
    int random_number, guess;
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1,100);
    random_number = dist(rd);
    
    std::cout << "Welcome! to the number guessing game...\n";
    std::cout << "Can you guess what is in my mind...\n";
    if(random_number <= 50)
     {
         std::cout << "Enter your guess (Hint :Number is in between 1 and 50) : ";
     }
     else
     {
         std::cout << "Enter you guess (Hint :Number is in between 51 and 100) : ";
     }
        std::cin >> guess;
    
        if(guess == random_number)
         std::cout << "Correct! Guess, you are a genius...";
          
        if(guess<=50 && random_number<=50)
        {
            if(guess == random_number)
            {
                std::cout << "Correct! Guess, Nice buddy...";
            }
            else if(random_number<=10)
            {
               std::cout << "Number is between " << 1 << " and " << 10 << "\n";
               std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
            else if(random_number>10 && random_number<=20)
            {
               std::cout << "Number is between " << 11 << " and " << 20 << "\n";
               std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
             }
            else if(random_number>20 && random_number<=30)
            {
               std::cout << "Number is between " << 21 << " and " << 30<< "\n";
              std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
            else if(random_number>30 && random_number<=40)
            {
               std::cout << "Number is between " << 31 << " and " << 40<< "\n";
              std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
            else if(random_number>40 && random_number<=50)
            {
               std::cout << "Number is between " << 41 << " and " << 50<< "\n";
               std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
        }
        
     else if(guess>50 && random_number>50)
        {
            if(guess == random_number)
            {
                std::cout << "Correct! Guess, Nice buddy...";
            }
            else if(random_number<=60)
            {
               std::cout << "Number is between " << 51 << " and " << 60 << "\n";
               std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
            else if(random_number>60 && random_number<=70)
            {
               std::cout << "Number is between " << 61 << " and " << 70 << "\n";
               std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
             }
            else if(random_number>70 && random_number<=80)
            {
               std::cout << "Number is between " << 71 << " and " << 80<< "\n";
              std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
            else if(random_number>80 && random_number<=90)
            {
               std::cout << "Number is between " << 81 << " and " << 90<< "\n";
              std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
            else if(random_number>90 && random_number<=100)
            {
               std::cout << "Number is between " << 91 << " and " << 100<< "\n";
               std::cout << "Enter your next guess : ";
               std::cin >> guess;
               if(guess == random_number)
               {
                   std::cout << "Dude! Correct guess, you find it right...";
               }
               else
               {
                   int guess1 = random_number - 2;
                   std::cout << "Number is two greater than " << guess1 << "\n";
                   std::cout << "Enter your guess : ";
                   std::cin >> guess;
                   if(guess == random_number)
                   {
                       std::cout << "Correct Guess! ";
                   }
                   else
                     std::cout << "Wrong Guess! ";
               }
            }
        }
else
{
    std::cout << "Wrong Guess!";
}
    return 0; 

}
  