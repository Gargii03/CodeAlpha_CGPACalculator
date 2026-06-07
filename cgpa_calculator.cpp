#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int numCourses;
    cout<<" ~~ CGPA Calculator ~~ "<<endl;
    cout<<"Enter the no. of courses:"<<endl;
    cin>>numCourses;

    vector<string> courseNames(numcourses);
    vector<float> grades(numCourses);
    vector<float> credits(numCourses);

    for(int i=0;i<numCourses;i++){
        cout<<"\nCourse"<<i+1<<"name:";
        cin>> courseNames[i];
        cout<< "Grade points (e.g. 8.0):";
        cin>>grades[i];
        cout<<"Credit hours:";
        cin>>credits[i];
    }

    float totalCredits=0, totalGradePoints=0;

    cout<<"\n~~ Course Summary ~~"<<endl;
    for(int i=0;i<numCourses;i++){
        float gradePoint=grades[i]*credits[i];
        totalGradePoints += gradePoint;
        totalCredits += credits[i];
        cout<< courseNames[i]<<"| Grade:"<<grades[i]<<"| Credits:"<<credits[i]<<"| Grade Points:"<<gradePoint<,endl;
    }

    float cgpa = totalGradePoints / totalCredits;
    cout<<"\nTotal Credits:"<< totalCredits<<endl;
    cout<<"Total Grade Points:"<<totalGradePoints<<endl;
    cout<<"Your CGPA:"<< cgpa<<endl;

    cout << "\nAll the best for your semester!" << endl;

    return 0;
}