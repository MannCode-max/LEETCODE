class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i = 0 ; i < n ; i++){
            int idx = i+1 ;
            if(idx%3 == 0 && idx%5 == 0){
                answer[i] = "FizzBuzz" ;
            }else if(idx%3 == 0){
                answer[i] = "Fizz" ;
            }else if(idx%5 == 0){
                answer[i] = "Buzz" ;
            }else{
                answer[i] = to_string(idx) ;
            }
        }
        return answer ;
    }
};