#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Movie {
public:
    string M_Name;
    string Release_Year;
    string Director_Name;
    string Budget;

    //method to accept movies from user
    void read_movies(int n){
        cin.ignore();
        std::ofstream fs;
        Movie m;
        
        for (int i = 0; i < n; i++)
        {
            cout << endl << "Enter Movie Name" << endl;
            getline(cin, m.M_Name);

            cout << "Enter Release Year" << endl;
            getline(cin, m.Release_Year);

            cout << "Enter Director name" << endl;
            getline(cin, m.Director_Name);

            cout << "Enter Budget of Movie" << endl;
            getline(cin, m.Budget);

            fs.open("movies.txt", std::ios::app);
            if (fs.is_open())
            {
                // cout << m.M_Name << "\t\t" << m.Release_Year << "\t\t" << m.Director_Name << "\t\t" << m.Budget << endl;
                fs << m.M_Name << "\t\t" << m.Release_Year << "\t\t" << m.Director_Name << "\t\t" << m.Budget << endl;
                fs.close();
                cout << "appended to database" << endl;
            }
        }
        cin.ignore();
        
        
    }

    //method to display movies to user
    void disp_movies(){
        std::fstream fs;
        string line;
        fs.open("movies.txt", std::ios::in);
        
        if (fs.is_open()){
            cout << "Movie Name" << "\t" << "Release Year" << "\t" << "Director Name" << "\t\t" << "Budget" << endl;
            while (getline(fs,line))
            {
                cout << line << endl;
            }
        
            fs.close();
        }
        
    }

    //method to show total count of movies
    void total_movies(){
        string line;
        int number_of_lines = 0;
        std::fstream myfile("movies.txt");

        if(myfile.is_open()){
            while(!myfile.eof()){
                getline(myfile,line);
                number_of_lines++;
            }
            myfile.close();
            
            cout << "There are " << --number_of_lines << " number of objects stored in file " << endl;
        }
    }
};

int main(){
    system("cls");
    Movie movie;
    int option = 0;
    
    while (1)
    {
        cout << "Select one of the following options" << endl;
        cout << "1. Register movies in database" << endl;
        cout << "2. Display movies from database" << endl;
        cout << "3. Display Total number of objects" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            int n;
            cout << "Please Enter the number of movies you want to register" << endl;
            cin >> n;
            movie.read_movies(n);
            cout << "movie has been registered" << endl;
            cout << "press Enter to continue" << endl;
            cin.ignore();
            getchar();
            system("cls");
            break;
        
        case 2:
            movie.disp_movies();
            cout << "press Enter to continue" << endl;
            cin.ignore();
            getchar();
            system("cls");
            break;

        case 3:
            movie.total_movies();
            cout << "press Enter to continue" << endl;
            cin.ignore();
            getchar();
            system("cls");
            break;
        
        default:
            cout << "Please select proper option" << endl;
            cin.ignore();
            system("cls");
            break;
        }

    }
    

    return 0;
}