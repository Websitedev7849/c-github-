#include<iostream>
#include<string>
#include<fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Movie {
public:
    std::fstream fs;
    string M_Name;
    int Release_Year;
    string Director_Name;
    double Budget;

    //method to accept movies from user
    void read_movies(){
        
        cout << "Enter Movie Name" << endl;
        getline(cin, M_Name);

        cout << "Enter Release Year" << endl;
        cin >> Release_Year;

        cout << "Enter Director name" << endl;
        cin.ignore();
        getline(cin, Director_Name);

        cout << "Enter Budget of Movie" << endl;
        cin >> Budget;

        fs.open("movies.txt", std::ios::app);
        if (fs.is_open())
        {
            fs << M_Name << "\t" << Release_Year << "\t" << Director_Name << "\t" << Budget << endl;
            fs.close();
            cout << "appended to file" << endl;
        }
        
    }

    //method to display movies to user
    void disp_movies(){
        fs.open("movies.txt", std::ios::in);
        if (fs.is_open())
        {
            string line;
            while(getline(fs, line)){
                cout << line << endl;
            }

            int firstTab = line.find("t", 0);
            cout << firstTab;

        }
        
    }

    //method to show total count of movies
    void total_movies(){

    }
};

int main(){
    Movie m;
 
    m.disp_movies();
    
    
    return 0;
}