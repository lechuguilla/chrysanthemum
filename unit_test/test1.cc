// ======================================================================================
// File         : test1.cc
// Author       : Gao Lei 
// Last Change  : 12/01/2011 | 02:25:43 AM | Thursday,December
// Description  : 
// ======================================================================================

#include <cstdlib>
#include <string>
#include <tuple>
#include <iostream>
#include <functional>

//#include "../all.h"



// struct helper
// {
//     template <typename... Args>
//     static std::tuple<Args...> f(data_holder<Args>... )
//     {
//         return std::tuple<Args...>();
//     }
// };

// template <typename... Args>
// struct sequence_traits
// {
//     typedef decltype(helper::f(Args()...)) data_type;
// };

struct tester
{
    template <typename T>
    bool operator() (T p,T q)
    {
        return true;
    }
};


int main()
{
   // typename sequence_traits<data_holder<int> ,data_holder<char> ,data_holder<float> >::data_type t;
   //  t = std::make_tuple(3,'a',0.2f); 


   // typename sequence_traits<alpha_parser,digit_parser>::data_type t2;
   // t2 = std::make_tuple('c','8');

   // std::cout<<std::get<0>(t2)<<" "<<std::get<1>(t2)<<std::endl;
    std::function<void(char*,char*)> f = [](char* p,char* q){ std::cout<<std::string(p,q)<<std::endl; };
    std::string str = "12345";
    f(str.begin(),str.end());
    
}

