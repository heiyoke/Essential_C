#include<iostream>
#include<string>
using namespace std;

int main(){
    string user_name;
    int user_val;
    int num_tries(0);       //用户猜过总次数
    int num_right = 0;      //用户答对总次数
    double usr_score = 0.0;
    char usr_more = true, usr_rsp;
    bool go_for_it = true;  //用户想再猜一次
    bool next_seq = true;   //显示下一组数列
    bool got_it = false;    //用户是否猜对
    int next_elem;

    std::cout << "The values 2, 3 for two consecutive element of a numerical sequence. What is the next value? \n" << std::endl;
    std::cout << "Please put in your answer: " << std::endl;
    std::cin >> user_val ;

    

    while( next_seq == true )
    {
        //为用户显示数列
        while((got_it == false) && (go_for_it == true))
        {
            int usr_guess;
            cin >> usr_guess;
            num_tries++;
            if( usr_guess == next_elem ){
                got_it == true;
                num_right++;
            }
            else
            {
                //用户猜错了
                //告诉用户答案是错的
                //询问用户是否愿意再试一次
                if( usr_rsp == 'N' || usr_rsp == 'n' )
                    go_for_it = false;
            }
        }
        cout << "Try another sequence? Y/N? ";
        char try_again;
        cin >> try_again;

        if( try_again == 'N' || try_again == 'n')
            next_seq = false;
    }
    
}