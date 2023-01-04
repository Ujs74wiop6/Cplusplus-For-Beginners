#include <iostream>

using namespace std;

int main(){

string questions[] = {"1 - What year was C++ created?: ", 
                    "2 - Who invented C++?: ",
                    "3 - What is the predecessor of C++?: ",
                    "4 - is the Earth flat?"};

string opc [][4] = {{"A. 1969", 
                    "B. 1975",
                    "C. 1985",
                    "D. 1989"},
                    {"A. Guido van Rossum",
                    "B. Bjarne Stroustrup",
                    "C. Jonh Carmack", 
                    "D. Mark Zuckerberg"},
                    {"A. C",
                    "B. C+",
                    "C. C--",
                    "D. B++"},
                    {"A. Yes",
                    "B. No",
                    "C. Sometimes",
                    "D. What's Earth"}};

char answerKey[] = {'C', 'B', 'A', 'B'};
int size = sizeof(questions)/sizeof(questions[0]);
char guess = 0;
int score = 0;

for(int i = 0; i < size; i++){
    cout << "********************" << endl;
    cout << questions[i] << endl;
    cout << "********************" << endl;

    int var = sizeof(opc[i])/sizeof(opc[i][0]);

    for(int j = 0; j < var; j++){
        cout << opc[i][j] << '\n';
    }

    cin >> guess;
    guess = toupper(guess);

    if(guess == answerKey[i]){
        cout << "CORRECT\n";
        score++;
    }else{
        cout << "WRONG\n";
        cout << "Answer: " << answerKey[i] << endl;
    }
}

cout << "************************************" << endl;
cout << "RESULTS\n";
cout << "Correct guess : " << score << endl;
cout << "# of Questions : " << size << endl;
cout << "Score: " << (score/(double)size)*100  << "%" << endl;
cout << "************************************" << endl;

return 0;

}