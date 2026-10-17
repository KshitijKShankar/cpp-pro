#include<iostream>
using namespace std;
int main()
{

string questions[] = {{"1. What year was C++ Created ?:"},
                      {"2.Who Invented C++ ?: "},
                      {"3. What is the predecessor of C++ ?: "},
                      {"4. is the Earth flat?: " }};

    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                          {"A. Modi", "B. Trump", "C. Putin", "D. Bjorne"},
                          {"A. C", "B. C+", "C. C--", "D. C#"},
                          { "A. yes", "B. no", "C. idk", "D. maybe"} };
    char answerkey[] = {'C','D', 'A', 'B'};   
    
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
         cout << "**************************\n"; 
         cout << questions[i] << '\n';
         cout << "**************************\n"; 
         
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
           cout << options[i][j] << '\n';
        }
        cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            cout << "CORRECT\n";
            score++;
        }
        else{
            cout << "WRONG\n";
            cout << "Answer: " << answerkey[i] << '\n';
        }
    }
    cout << "**************************\n"; 
    cout << " @@@@@@@@ Results @@@@@@@@\n";
    cout << "**************************\n"; 
    cout << "CORRECT GUESSED: " << score << '\n';
    cout << "# of QUESTIONS:" << size << '\n';
    cout << "SCORE: " << (score/size)*100 << "%";



    return 0;
}