#include <iostream>
#include <vector> //son't forget this in order to use vectors

using namespace std;

 int main() {
    
//    vector <char> vowels; //empty
//    vector <char> vowels(5); //5 elements initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] <<endl;
    cout << vowels[4] <<endl;
    
//    vector <int> test_scores (3); //3 elements all initialized to zero
//    vector <int> test_scores (3, 100); // 3 elements all initialized to 100
    
    vector <int> test_scores {100, 98, 89};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    
    cout << "\nTest scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << "There are " << test_scores.size() << " elements in this vector space" <<endl;
    
    cout << "\nEnter 3 test scores" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nTest scores after update:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;

    cout << "Enter a test score to add to the vector";
    int new_score {0};
    cin >> new_score;
    
    test_scores.push_back(new_score);
    

    cout << "Enter another test score to add to the vector";
    cin >> new_score;
    
    test_scores.push_back(new_score);
    
    
    cout << "Test scores are now:" << endl;
        cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    cout << "There are " << test_scores.size() << " elements in this vector space" <<endl;
    
    //Example of a 2D-vector
    
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    cout <<"\n Here are the movie ratings for reviewer #1 using array syntax : " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;


    cout <<"\n Here are the movie ratings for reviewer #1 using vector syntax : " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

//    vector <int> test_scores {100, 95, 99, 87, 88}
//    cout <<"Hello World" << endl;
    return 0;
}