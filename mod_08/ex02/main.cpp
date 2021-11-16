#include "MutantStack.hpp"

int main(){
    MutantStack<int> mstack;
    MutantStack<int> *ptr;
    int arr_int[] = {4, 8, 15, 16, 23, 42};

    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element after push 5 and 17: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size of mstack after pop : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(11);
    std::cout <<  "size of mstack after push 5 elements : " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    ++ite;
    --ite;
    std::stack<int> s(mstack);
    std::cout << ((s == mstack)? "s == mstack" : "s != mstack") << std::endl;
    ptr = static_cast<MutantStack<int>*>(&s);
    std::cout <<  "content of stack s(copy mstack) by MutantStack ptr: " << std::endl;
    ptr->display();
    std::cout <<  "content of stack mstack(copy arr_int by algorithm): " << std::endl;
    std::copy(arr_int, arr_int + 6, it);
    mstack.display();
    return 0;
}
