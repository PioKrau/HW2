#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Student {                                                 //requirements for the class

private:
    string name;
    string surname;
    int album_number;
    vector<float> grades;

public:
    Student(string name ,string surname, int album_number);     //variables required to use class

    void set_name_surname(string n, string s){                  //set name, surname
        name=n; surname=s;}


    void set_index(int index) {                                 //set album num
        if(index>10000 && index<=999999)
        album_number = index;}

    void add_grade(float grade){                                //add grade to the vector grades (betwen 2.0-5.0)
        if(grade>=2.0 && grade<=5.0)
            grades.push_back(grade);}

    float calculate_grade() {                                   //returns mean value of grades
        float sum = std::accumulate(grades.begin(), grades.end(), 0.0f);
        return sum / grades.size();
    }

    bool has_passed(){                                          //checks how many 2.0 grades student has (1 is accepted)
        int count_2=0;
        for(int i=0; i < grades.size();i++)
        {
            if(grades[i]<=2.0)
                count_2++;
        }
        if(count_2>=1)
            return true;
        else
            return false;
    }
};

int main()
{

    return 0;
}
