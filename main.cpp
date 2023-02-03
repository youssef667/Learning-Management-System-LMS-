
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>


using namespace std;
const int stu_no = 9;
const int sub_no = 5;
//---------------------------------------------------------------------------------------------------------------------------------------------------------------//



//class for subject//



class subject //student[st].sub[sub]
{
public:

    string name;
    double grade = 0;
    string sympol; // A ,B ,C ,F
    const int subject_no = 5;
    float counterA = 0, counterB = 0, counterBp = 0, counterC = 0, counterCp = 0, counterD = 0, counterDp = 0, counterF = 0;
    float Apercentage = 0, Bpercentage = 0, BPpercentage = 0, Cpercentage = 0, CPpercentage = 0, Dpercentage = 0, DPpercentage = 0, Fpercentage = 0;

    string get_sympole()
    {
        if (grade < 60)
        {
            sympol = "F";
        }
        else if (grade < 65 && grade >= 60)
        {
            sympol = "D";
        }
        else  if (grade < 70 && grade >= 65)
        {
            sympol = "D+";
        }
        else   if (grade < 75 && grade >= 70)
        {
            sympol = "C";
        }
        else  if (grade < 80 && grade >= 75)
        {
            sympol = "C+";
        }
        else  if (grade < 85 && grade >= 80)
        {
            sympol = "B";
        }
        else  if (grade < 90 && grade >= 85)
        {
            sympol = "B+";
        }
        else   if (grade < 100 && grade >= 90)
        {
            sympol = "A";
        }
        return sympol;
    }

};
subject sub[sub_no];
class student
{
public:
    string name;
    string id;
    int ade;
    string gpa;
    string gpa_sympol;
    const int sub_no = 5;
    subject sub[5];
    string name_2;
    string age;
    int agee;
    string code;
    string gender;
    string studentCode;
    string math;
    int mathematicss;
    string computer;
    int comm;
    string physics;
    int fisicss;
    string drawing;
    int drwingg;
    string ch;
    int chemistryy;
    vector<string>vf;
    void import_file1();
    void importfile_2();
    void printDataAll();
    void printDataFile1();
    void printDataFile2();
    void add();
    void normalize();
    void student_id();

    void STI() {
        stringstream math_math(math);
        stringstream physic_physic(physics);
        stringstream computer_computer(computer);
        stringstream drawing_drawing(drawing);
        stringstream from(ch);
        math_math >> mathematicss;
        physic_physic >> fisicss;
        computer_computer >> comm;
        drawing_drawing >> drwingg;
        from >> chemistryy;
    }
};
void student::import_file1() {
    int st=0;
    string import_file1_name;
    cout << "please enter the file name.csv" << endl;
    cin >> import_file1_name;
    student obj;
    ifstream myfile_1;
    myfile_1.open(import_file1_name);
    while (myfile_1.good())
   {
         getline (myfile_1,studentCode   , ',' );
         getline (myfile_1,math    , ',' );
         getline (myfile_1,physics , ',' );
         getline (myfile_1,drawing , ',' );
         getline (myfile_1,computer, ',' );
         getline (myfile_1,ch      , '\n');
       st++;
   }
   myfile_1.close();
    ifstream myfile1;
    myfile1.open(import_file1_name);
    if(myfile1.good()){
    for(int i=0;i<=st+3;i++) {
        getline(myfile1, code, ',');
        getline(myfile1, name_2, ',');
        getline(myfile1, age, ',');
        getline(myfile1, gender, '\n');
        cout << code << "\t\t" << name_2 << "\t\t" << age << "\t\t" << gender << endl;
    }
     myfile1.close();
}
else
cout<<" File error"<<endl;
}

void student::printDataAll() {
    /////////////
    string import_file1_name;
    string importfile_2_name;
    cout << "please enter the 1st file name.csv" << endl;
    cout << "please enter the 2nd file name.csv" << endl;
    cin >> import_file1_name;
    cin >> importfile_2_name;
    student obj;

    ifstream myfile1;
    ifstream myfile2;
    myfile1.open(import_file1_name);
    myfile2.open(importfile_2_name);
    while (myfile1.good() && myfile2.good()) {
        getline(myfile1, code, ',');
        getline(myfile1, name_2, ',');
        getline(myfile1, age, ',');
        getline(myfile1, gender, '\n');
        getline(myfile2, studentCode, ',');
        getline(myfile2, math, ',');
        getline(myfile2, physics, ',');
        getline(myfile2, computer, ',');
        getline(myfile2, drawing, ',');
        getline(myfile2, ch, '\n');
        cout << code << "\t\t" << name_2 << "\t\t" << age << "\t\t" << gender << "\t\t" << math << "\t\t" << physics << "\t\t" << computer << "\t\t" << drawing << "\t\t" << ch << endl;
    }
    myfile1.close();
    myfile2.close();
}
void student::add() {
    string import_file1_name;
    string importfile_2_name;
    cout << "please enter the 1st file name (don't forget .csv) " << endl;
    cout << "please enter the 2nd file name (don't forget .csv) " << endl;
    cin >> import_file1_name;
    cin >> importfile_2_name;
    student obj;
    ifstream myfile1;
    ifstream myfile2;
    myfile1.open(import_file1_name);
    myfile2.open(importfile_2_name);
    while (myfile1.good() && myfile2.good()) {
        getline(myfile1, code, ',');
        getline(myfile1, name_2, ',');
        getline(myfile1, age, ',');
        getline(myfile1, gender, '\n');
        getline(myfile2, studentCode, ',');
        getline(myfile2, math, ',');
        getline(myfile2, physics, ',');
        getline(myfile2, computer, ',');
        getline(myfile2, drawing, ',');
        getline(myfile2, ch, '\n');
        STI();
        cout << code << "\t\t" << name_2 << "\t\t" << age << "\t\t" << gender << "\t\t" << math << "\t\t" << physics << "\t\t" << computer << "\t\t" << drawing << "\t\t" << ch << "\t" << mathematicss + fisicss + comm + chemistryy << endl;
    }
    myfile1.close();
    myfile2.close();

}
//part 2

void  student::normalize()
{
    float sum_chemistry = 0;
    float sum_math = 0;
    float sum_physics = 0;
    float sum_drawing = 0;
    float sum_computer = 0;
    int   stud_no;
    float meanvalue_math = 0;
    float meanvalue_physics = 0;
    float meanvalue_computer = 0;
    float meanvalue_drawing = 0;
    float meanvalue_chemistry = 0;
    float mean_sum_math = 0;
    float mean_sum_physics = 0;
    float mean_sum_computer = 0;
    float mean_sum_chemistry = 0;
    float mean_sum_drawing = 0;
    float st_dev_math = 0;
    float the_square_math;
    float the_square_physics;
    float the_square_chemistry;
    float the_square_computer;
    float the_square_drawing;
    float segma_math;
    float segma_physics;
    float segma_drawing;
    float segma_computer;
    float segma_chemistry;
    int counter = 0;

    string file_name;
    cout << "please enter the file name (don't forget .csv) " << endl;
    cin >> file_name;

    student obj;


    ifstream students_grade(file_name);
    if (!students_grade.is_open()) std::cout << "ERROR:File Open" << endl;
    while (students_grade.good())
    {
        getline(students_grade, studentCode, ',');
        getline(students_grade, math, ',');
        getline(students_grade, physics, ',');
        getline(students_grade, drawing, ',');
        getline(students_grade, computer, ',');
        getline(students_grade, ch, '\n');
        counter++;
    }


    ifstream students_gradess(file_name);
    if (!students_gradess.is_open()) std::cout << "ERROR:File Open" << endl;

    if (students_gradess.good())
    {
        for (int i = 0; i <= counter - 2; i++)
        {


            getline(students_gradess, studentCode, ',');
            getline(students_gradess, math, ',');
            getline(students_gradess, physics, ',');
            getline(students_gradess, drawing, ',');
            getline(students_gradess, computer, ',');
            getline(students_gradess, ch, '\n');
            STI();

            sum_math = sum_math + mathematicss;
            sum_physics = sum_physics + fisicss;
            sum_computer = sum_computer + comm;
            sum_drawing = sum_drawing + drwingg;
            sum_chemistry = sum_chemistry + chemistryy;


        }
    }
    students_gradess.close();

    meanvalue_math = sum_math / (counter - 2);
    meanvalue_physics = sum_physics / (counter - 2);
    meanvalue_drawing = sum_drawing / (counter - 2);
    meanvalue_computer = sum_computer / (counter - 2);
    meanvalue_chemistry = sum_chemistry / (counter - 2);



    ifstream student_grades(file_name);

    if (!student_grades.is_open()) std::cout << "ERROR:File Open" << endl;



    if (student_grades.good())
    {
        for (int i = 0; i <= counter - 2; i++)
        {


            getline(student_grades, studentCode, ',');
            getline(student_grades, math, ',');
            getline(student_grades, physics, ',');
            getline(student_grades, drawing, ',');
            getline(student_grades, computer, ',');
            getline(student_grades, ch, '\n');
            STI();

            the_square_math = mathematicss - meanvalue_math;
            the_square_physics = fisicss - meanvalue_physics;
            the_square_computer = comm - meanvalue_computer;
            the_square_drawing = drwingg - meanvalue_drawing;
            the_square_chemistry = chemistryy - meanvalue_chemistry;


            mean_sum_math = mean_sum_math + (the_square_math * the_square_math);
            mean_sum_physics = mean_sum_physics + (the_square_physics * the_square_physics);
            mean_sum_drawing = mean_sum_drawing + (the_square_drawing * the_square_drawing);
            mean_sum_computer = mean_sum_computer + (the_square_computer * the_square_computer);
            mean_sum_chemistry = mean_sum_chemistry + (the_square_chemistry * the_square_chemistry);

        }
    }
    student_grades.close();

    mean_sum_math = mean_sum_math - (meanvalue_math * meanvalue_math);
    mean_sum_physics = mean_sum_physics - (meanvalue_physics * meanvalue_physics);
    mean_sum_computer = mean_sum_computer - (meanvalue_computer * meanvalue_computer);
    mean_sum_drawing = mean_sum_drawing - (meanvalue_drawing * meanvalue_drawing);
    mean_sum_chemistry = mean_sum_chemistry - (meanvalue_chemistry * meanvalue_chemistry);





    segma_math = sqrt(mean_sum_math / (counter - 3));
    segma_physics = sqrt(mean_sum_physics / (counter - 3));
    segma_drawing = sqrt(mean_sum_drawing / (counter - 3));
    segma_computer = sqrt(mean_sum_computer / (counter - 3));
    segma_chemistry = sqrt(mean_sum_chemistry / (counter - 3));




    ifstream student_grade(file_name);

    if (!student_grade.is_open()) std::cout << "ERROR:File Open" << endl;



    if (student_grade.good())
    {
        for (int i = 0; i <= counter - 2; i++)
        {


            getline(student_grade, studentCode, ',');
            getline(student_grade, math, ',');
            getline(student_grade, physics, ',');
            getline(student_grade, drawing, ',');
            getline(student_grade, computer, ',');
            getline(student_grade, ch, '\n');
            STI();
            if (mathematicss != 0)
            {

                cout << "standards score for the id   " << studentCode << endl;
                cout << "standard score of math       " << (mathematicss - meanvalue_math) / segma_math << endl;
                cout << "standard score of physics    " << (fisicss - meanvalue_math) / segma_math << endl;
                cout << "standard score of computer   " << (comm - meanvalue_math) / segma_math << endl;
                cout << "standard score of drawing    " << (drwingg - meanvalue_math) / segma_math << endl;
                cout << "standard score of chemistry  " << (chemistryy - meanvalue_math) / segma_math << endl;
                cout << "*********************************************************************************" << endl;
            }
        }
    }
    student_grades.close();




}



// part 3,4 functions-------------------------------



student students[stu_no];
void import_student_grades()
{
    string file_name;
    cout << "enter file name.csv\n";
    cin >> file_name;
    ifstream file;
    file.open(file_name);
    if (file.is_open())
    {
        string id;
        string temp;
        string sub_names[sub_no];
        string sub_grades[sub_no];
        getline(file, temp, ',');

        for (int sub = 0; sub < sub_no - 1; sub++)
        {
            getline(file, sub_names[sub], ',');
        }
        getline(file, sub_names[sub_no - 1], '\n');

        int st = 0;
        for (st = 0; st < stu_no; st++) {
            for (int sub = 0; sub < sub_no; sub++) {
                students[st].sub[sub].name = sub_names[sub];
            }
        }

        st = 0;
        while (file.good() && st < stu_no)
        {
            getline(file, id, ',');
            students[st].id = id;
            for (int sub = 0; sub < sub_no - 1; sub++)
            {
                getline(file, sub_grades[sub], ',');
            }
            getline(file, sub_grades[sub_no - 1], '\n');

            for (int sub = 0; sub < sub_no; sub++)
            {
                stringstream converted(sub_grades[sub]);
                converted >> students[st].sub[sub].grade;
            }
            st++;
        }

        cout << endl << "student grades imported" << endl;
        file.close();
    }
    else cout << endl << "could not open the file" << endl;
}
void export_students_grades_sympol(student students[], int stu_no, subject sub[], int sub_no)
{
    string file_name;
    cout << endl << "enter new file name.csv to export data" << endl;
    cin >> file_name;
    ofstream file;
    file.open(file_name);
    if (file.is_open())
    {
        file << "code" << ',';
        for (int sub = 0; sub < sub_no; sub++)
            file << students[1].sub[sub].name << ',';
        file << endl;

        for (int st = 0; st < stu_no; st++)
        {
            file << students[st].id << ',';
            for (int sub = 0; sub < sub_no; sub++)
            {
                students[st].sub[sub].sympol = students[st].sub[sub].get_sympole();
                file << students[st].sub[sub].sympol << ',';
            }
            file << endl;
        }
    }
    file.close();
    cout << endl;
    cout << "data exported " << endl;
}
void export_data(student students[])
{
    cout << endl << "2 to export student grades" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 2:
        const int sub_no = 5;
        export_students_grades_sympol(students, stu_no, sub, sub_no);
        break;
    }
}

void import_data()
{
    student obj;
    cout << "1 to import student data\n" << "2 to import student grades\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        obj.import_file1();
        break;
    case 2:
        import_student_grades();
        break;
    default:
        cout << " ERROR Input\n";
        import_data();
        break;
    }
}
void export_data()
{
    cout << endl << "1 to Export student Grades" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        const int sub_no = 5;
        export_students_grades_sympol(students, stu_no, sub, sub_no);
        break;
    }
}
void display_statistics()
{
    string file_name;
    cout << "Enter File name.csv \n";
    cin >> file_name;
    ifstream file;
    file.open(file_name);
    if (file.is_open())
    {
        string id;
        string temp;
        string sub_names[sub_no];
        string sub_grades[sub_no];
        getline(file, temp, ',');
        for (int sub = 0; sub < sub_no - 1; sub++)
        {
            getline(file, sub_names[sub], ',');
        }
        getline(file, sub_names[sub_no - 1], '\n');
        int st = 0;
        for (st = 0; st < stu_no; st++) {
            for (int sub = 0; sub < sub_no; sub++) {
                students[st].sub[sub].name = sub_names[sub];
            }
        }
        st = 0;
        while (file.good() && st < stu_no)
        {
            getline(file, id, ',');
            students[st].id = id;

            for (int sub = 0; sub < sub_no - 1; sub++)
            {
                getline(file, sub_grades[sub], ',');
            }
            getline(file, sub_grades[sub_no - 1], '\n');
            st++;
        }
        cout << endl << "Student Grades Imported" << endl;
        file.close();
    }
    else cout << endl << "could not open the File" << endl;

    for (int k = 0; k < sub_no; k++) {
        for (int st = 0; st < stu_no; st++)
        {
            if (students[st].sub[k].get_sympole() == "F")
                sub[k].counterF++;
            if (students[st].sub[k].get_sympole() == "D")
                sub[k].counterD++;
            if (students[st].sub[k].get_sympole() == "D+")
                sub[k].counterDp++;
            if (students[st].sub[k].get_sympole() == "C")
                sub[k].counterC++;
            if (students[st].sub[k].get_sympole() == "C+")
                sub[k].counterCp++;
            if (students[st].sub[k].get_sympole() == "B")
                sub[k].counterB++;
            if (students[st].sub[k].get_sympole() == "B+")
                sub[k].counterBp++;
            if (students[st].sub[k].get_sympole() == "A")
                sub[k].counterA++;
        }
        sub[k].Apercentage = sub[k].counterA / stu_no;
        sub[k].BPpercentage = sub[k].counterBp / stu_no;
        sub[k].Bpercentage = sub[k].counterB / stu_no;
        sub[k].CPpercentage = sub[k].counterCp / stu_no;
        sub[k].Cpercentage = sub[k].counterC / stu_no;
        sub[k].DPpercentage = sub[k].counterDp / stu_no;
        sub[k].Dpercentage = sub[k].counterD / stu_no;
        sub[k].Fpercentage = sub[k].counterF / stu_no;
        cout << endl;
        cout << "For subject: " << students[1].sub[k].name << endl;
        cout << sub[k].Apercentage * 100 << "% of students got A" << endl;
        cout << sub[k].BPpercentage * 100 << "% of students got B+" << endl;
        cout << sub[k].Bpercentage * 100 << "% of students got B" << endl;
        cout << sub[k].CPpercentage * 100 << "% of students got C+" << endl;
        cout << sub[k].Cpercentage * 100 << "% of students got C" << endl;
        cout << sub[k].DPpercentage * 100 << "% of students got D+" << endl;
        cout << sub[k].Dpercentage * 100 << "% of students got D" << endl;
        cout << sub[k].Fpercentage * 100 << "% of students got F" << endl;
        cout << "----------------------------------------------" << endl;
    }

}
int LIST()
{
    student obj;
    cout << endl << "please enter" << endl
        << "1 import data" << endl
        << "2 export your grades symbol in csv file" << endl
        << "3 normalization" << endl
        << "4 display all student data" << endl
        << "5 display statistics" << endl
        << "6 display student data using id" << endl
        << "7 to quit" << endl << endl;
    int choice;
    cin >> choice;
    if (choice == 7)
        return 0;
    else
    {
        switch (choice)
        {
        case 1:
            import_data();
            break;
        case 2:
        export_data() ;
            break;
        case 3:
          obj.normalize() ;
            break;
        case 4:
          obj.printDataAll();
       break;
        case 5:
          display_statistics();
            break;
        case 6:
           obj.student_id();
           break;
        case 7:
            return 0;
        default:
            cout << endl << "ERROR INPUT";
            LIST();
        }
    }LIST();

}

void student::student_id()
{
    int st=0;
    string id;
    string import_file1_name;
    string importfile_2_name;
    cout << "please enter the 1st file name.csv" << endl;
    cout << "please enter the 2nd file name.csv " << endl;
    cin >> import_file1_name;
    cin >> importfile_2_name;
    cout<<endl<<"please enter ID you want "<<endl;
    cin>>id;
    cout<<endl;
    ifstream myfile1;
    ifstream myfile2;
    myfile1.open(import_file1_name);
    myfile2.open(importfile_2_name);
    while(myfile1.good()&&myfile2.good()){

        getline(myfile1, code, ',');
        getline(myfile1, name_2, ',');
        getline(myfile1, age, ',');
        getline(myfile1, gender, '\n');
        getline(myfile2, studentCode, ',');
        getline(myfile2, math, ',');
        getline(myfile2, physics, ',');
        getline(myfile2, computer, ',');
        getline(myfile2, drawing, ',');
        getline(myfile2, ch, '\n');

        if(id==code)
        {
            cout << "code" << "\t\t" << "name_2" << "\t\t" << "age" << "\t\t" << "gender" << "\t\t" << "math" << "\t\t" << "physics" << "\t\t" << "computer" << "\t\t" << "drawing" << "\t\t" << "ch" << endl;

  cout << code << "\t\t" << name_2 << "\t\t" << age << "\t\t" << gender << "\t\t" << math << "\t\t" << physics << "\t\t" << computer << "\t\t" << drawing << "\t\t" << ch << endl;

        }

    }
    myfile1.close();
    myfile2.close();

}



int main()
{
    LIST();



}


