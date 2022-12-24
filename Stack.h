#ifndef STACK_LIBRARY_H
#define STACK_LIBRARY_H
const int MAX_STACK_SIZE = 100;
class Stack {
	private:
		int container[MAX_STACK_SIZE];
		int Size;
	public:
		Stack(int size=0) {
			this->Size = size;
		}
		bool push(int el) {
			if (this->Size + 1 <= MAX_STACK_SIZE) {
				this->container[this->Size] = el;
				this->Size++;
				return true;
			}
			return false;
		}
		int pop() {
			if (this->Size - 1) {
				this->Size--;
				return this->container[this->Size];
			}
		}
		int size() {
			return this->Size;
		}
		void clear() {
			this->Size = 0;
		}
		bool empty() {
			return this->Size == 0;
		}
};
#endif