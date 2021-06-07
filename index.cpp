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
    string M_Name;
    int Release_Year;
    string Director_Name;
    double Budget;

    //method to accept movies from user
    void read_movies(){
        std::ofstream fs;
        Movie m;
        
        cout << "Enter Movie Name" << endl;
        getline(cin, m.M_Name);

        cout << "Enter Release Year" << endl;
        cin >> m.Release_Year;

        cout << "Enter Director name" << endl;
        cin.ignore();
        getline(cin, m.Director_Name);

        cout << "Enter Budget of Movie" << endl;
        cin >> m.Budget;

        fs.open("movies.txt", std::ios::app);
        if (fs.is_open())
        {
            // fs << M_Name << "\t" << Release_Year << "\t" << Director_Name << "\t" << Budget << endl;
            fs.write((char*)&m, sizeof(m));
            fs.close();
            cout << "appended to file" << endl;
        }
        
    }

    //method to display movies to user
    void disp_movies(){
        std::ifstream fs;
        Movie m;
        fs.open("movies.txt", std::ios::in);
        fs.read((char*)&m, sizeof(m));
        
        while (!fs.eof()){
            cout << endl << "Movie Name : " << m.M_Name << endl; 
            cout << "Release Year : " << m.Release_Year << endl; 
            cout << "Director Name : " << m.Director_Name << endl;
            cout << "Movie Budget : " << m.Budget << endl << endl;
        }
        
    }

    //method to show total count of movies
    void total_movies(){

    }
};

int main(){
    
    Movie movie;
    
    movie.read_movies();
    movie.disp_movies();
    
    return 0;
}