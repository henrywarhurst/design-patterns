#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
	public:
		static Singleton* getInstance();
		virtual ~Singleton();

		virtual void setMemberVariable(int new_val);
		virtual int getMemberVariable();

	private:
		Singleton();
		static Singleton *instance;
		int some_member_;
};

#endif // SINGLETON_H

