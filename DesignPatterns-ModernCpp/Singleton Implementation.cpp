//#include <iostream>
//#include <map>
//#include <string>
//#include <fstream>
//
//class SingletonDatabase
//{
//public:
//	SingletonDatabase(SingletonDatabase const&) = delete; // prevents from copying
//	void operator=(SingletonDatabase const&) = delete; // prevents from assigning 
//
//	static SingletonDatabase& get()
//	{
//		std::cout << "get funciton call" << std::endl;
//		static SingletonDatabase db;
//		return db;
//	}
//
//	int get_population(const std::string& name)
//	{
//		return capitals[name];
//	}
//
//	~SingletonDatabase()
//	{
//		std::cout << "Deleting Database" << std::endl;
//	}
//
//
//private:
//	SingletonDatabase()
//	{
//		std::cout << "Initializaing db\n";
//		std::ifstream ifs("capitals.txt");
//
//		std::string s1, s2;
//
//		while (std::getline(ifs, s1))
//		{
//			std::getline(ifs, s2);
//			int pop = std::stoi(s2);
//			capitals[s1] = pop;
//		}
//
//	}
//	std::map<std::string, int> capitals;
//
//};
//
//int main()
//{
//	std::string city{ "Tokyo" };
//	int city_pop{ SingletonDatabase::get().get_population(city) };
//	std::cout << "City: " << city << ", has a population of : " << city_pop << std::endl;
//
//	city = "Jakarta";
//	city_pop = SingletonDatabase::get().get_population(city);
//	std::cout << "City: " << city << ", has a population of : " << city_pop << std::endl;
//
//	return 0;
//}