#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include <vector>

namespace{
    using json = nlohmann::json;
    using std::cout;
    using std::endl;
}

int main(){

    json j_out;
    std::ofstream f_out("sample.json");


    j_out["iteration_1"]["vector_1"] = {1,2,3,4,5,6};
    j_out["iteration_2"]["vector_1"] = {5,6,7,8,9};

    f_out << j_out << std::endl;

    return 0;
}

