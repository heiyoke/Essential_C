#include<iostream>
#include<string>
#include<vector>
using namespace std;
const int seq_size = 18;
const int max_seq = 6;

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
    int cur_tuple = 0;
    int elem_vals[ seq_size ] = {
        1,2, 3,3,4, 7,2,5,12,
        3,6,10,4,9,16,5,12,22
    };
    string seq_names[ max_seq ] = {
        "Fibonacci",
        "Lucas",
        "Pell",
        "Triangular",
        "Square",
        "Pentagonal"
    };
    std::vector<int> elem_seq( elem_vals, elem_vals + seq_size );

    std::cout << "The values 2, 3 for two consecutive element of a numerical sequence. What is the next value? \n" << std::endl;
    std::cout << "Please put in your answer: " << std::endl;
    std::cin >> user_val ;

    while( next_seq == true && cur_tuple <seq_size)
    {
        cout << "The first two elements of the sequence are: "
             << elem_seq[ cur_tuple ] << ", "
             << elem_seq[ cur_tuple+1 ]
             << "\nWhat is the next element? ";
        //为用户显示数列
        while((got_it == false) && (go_for_it == true))
        {
            int usr_guess;
            cin >> usr_guess;
            num_tries++;
            if( usr_guess ==  elem_seq[ cur_tuple+2 ]){
                got_it == true;
                num_right++;
                cout << "Very good. Yes, "
                     << elem_seq[ cur_tuple+2 ]
                     << "is the next element in the "
                     << seq_names[ cur_tuple/3 ] << "Squence.\n";
            }
            else
            {
                //用户猜错了
                //告诉用户答案是错的
                //询问用户是否愿意再试一次
                if( usr_rsp == 'N' || usr_rsp == 'n' )
                    go_for_it = false;
                else cur_tuple += 3;    
            }
        }
        cout << "Try another sequence? Y/N? ";
        char try_again;
        cin >> try_again;

        if( try_again == 'N' || try_again == 'n')
            next_seq = false;
    }


    // 
    // int pell_seq [ seq_size ];
    // pell_seq[0] = 1;
    // pell_seq[1] = 2;
    // for(int i = 2; i < seq_size; i++){
    //     pell_seq[ i ] = pell_seq[ i - 2 ] + 2 * pell_seq[ i - 1];
    // }
    // cout << "The first " << seq_size
    //      << " elements of the Pell Series:\n\t";
    // for(int ix = 0; ix < seq_size; ++ix)
    //     cout << pell_seq[ ix ] << ' ';
    // cout << "\n";
    // int elem_seq[ seq_size ] = { //array初始化
    //     1,2,3,  //Fibonacci
    //     3,4,7,  //Lucas
    //     2,5,12, //Pell
    //     3,6,10, //Triangular
    //     4,9,16, //Square
    //     5,12,22 //Pentagonal
    // };

    
    // cout << "The first " << elem_seq.size()
    //      << " elements of the Pell Series:\n\t";
    // for(int ix = 0; ix < elem_seq.size(); ++ix)
    //     cout << pell_seq[ ix ] << ' '; //得到内存值

    
} 