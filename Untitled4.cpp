#include<cstring>
class MyString{
	private:
		char *s;
		int size;
		public:
			MyString(const char *str=NULL);
			MyString(){delete[]s;}
			MyString(const MyString& );
			void print(){
				cout<<s<<endl;
			}
			void change(const char*);
};

