#include <iostream>
#include <string>
using namespace std;

class Instructor    
{
    		private:
    			string fname;
    			string lname;
    			int num;

  		public:
    			Instructor(string fname, string lname, int num) 
    			{
      			this->fname = fname;
      			this->lname = lname;
      			this->num = num;
    			}

    			void Display() 
    			{
      			cout << "Instructor: " << fname << " " << lname << endl;
      			cout << "Office number: " << num << endl;
    			}
};

class Classroom 
{
    		private:
    			string building;
    			int rnum;

  		public:
    			Classroom(string building, int rnum) 
    			{
      				this->building = building;
      				this->rnum = rnum;
    			}

    			void Display() 
    			{
      			cout << "Classroom: " << building << " " << rnum << endl;
    			}
};

class CollegeCourse 
{
  		private:
    			Instructor instructor;
    			Classroom classroom;
    			int credits;

  		public:
    			CollegeCourse(string fname, string lname, int num, string building, int rnum, int credits) 
        		: instructor(fname, lname, num), classroom(building, rnum)
    		{
      			this->credits = credits;
    		}

    		void Display() {
      			instructor.Display();
      			classroom.Display();
      			cout << "Credits: " << credits << endl;
    		}
};

int main() {
  		CollegeCourse course1("Rajnish", "Rijal", 201, "Building C", 111, 8);
  		CollegeCourse course2("Swarwatam", "Sinha", 202, "Building D", 112, 2);

  		course1.Display();
  		course2.Display();
  
  		return 0;
}


