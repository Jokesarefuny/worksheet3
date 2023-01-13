#include <iostream>
#include <string>

class Salesperson;  

class Sale 
{
    		private:
        		int d;
        		double a;
        		int s_id;

    		public:
        		Sale(int d, double a, int s_id)
        		: d(d), a(a), s_id(s_id) {}

    		friend void display(const Sale& sale, const Salesperson& salesperson);
};

class Salesperson 
{
    		private:
        		int id;
        		std::string lname;

    		public:
        		Salesperson(int id, std::string lname) : id(id), lname(lname) {}

    		friend void display(const Sale& sale, const Salesperson& salesperson);
};

void display(const Sale& sale, const Salesperson& salesperson) 
{
  		std::cout << "Date of sale: " << sale.d << std::endl;
  		std::cout << "Amount: Rs " << sale.a << std::endl;
  		std::cout << "Salesperson ID: " << sale.s_id << std::endl;
  		std::cout << "Salesperson name: " << salesperson.lname << std::endl;
}

int main() 
{
  		Salesperson s1(8083, "Maitri Shakya");
  		Sale s2(22, 150000, 8083);
  		display(s2, s1);
  		return 0;
}

