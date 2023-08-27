#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main(int argc, char *argv[]){
   
   if(argc == 1 ){
    std::cout<<"no numbers have been entered"<<std::endl;
    return 0; 
   }
    std::vector<float> vec;

    for(int i = 1; i < argc ; i++){
       vec.push_back(atof(argv[i]));
       
    }
    std::cout<<"average: "<<std::accumulate(vec.begin(),vec.end(),0.0f)/(float)vec.size()<<std::endl;
    
    return 0;
}