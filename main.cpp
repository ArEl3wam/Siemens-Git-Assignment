#include "iostream"
#include "vector"

int getSum(std::vector<int> &input_vector){
    int sum = 0;
    for(auto element: input_vector){
        sum += element;
    }
    return sum;
}

int main(){

    std::vector<int> data = {9,4,3,16,5,-11,6,88,801,-900};

    std::cout << getSum(data) << "\n";

    return 0;
}