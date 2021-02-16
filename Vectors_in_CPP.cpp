#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector <char> vowels; 
    // vector <char> vowels (5);
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl;
    cout << vowels[3] << endl; 

    vector <int> test_scores {100, 98, 99};
    cout << "\nTest scores are\n";
    // cout << test_scores[0] << endl;
    // cout << test_scores[1] << endl;
    // cout << test_scores[2] << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // vector size;
    cout << test_scores.size() << endl;

    // changing values of vector
    cout << "Enter scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // adding to the vector
    int score;
    cout << "Enter a score: ";
    cin >> score;
    test_scores.push_back(score);
    cout << "Enter another score: ";
    cin >> score;
    test_scores.push_back(score);
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << test_scores.size() << endl;

    

    return 0;
}