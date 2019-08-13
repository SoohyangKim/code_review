#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		bool empty() const;
		const T& top() const;
		unsigned int size();
		void push(const T&);
		void pop();	
};
