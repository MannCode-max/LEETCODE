class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0 , 4)) ;
        int month = stoi(date.substr(5 , 2)) ;
        int din = stoi(date.substr(8 , 2)) ;
        string ans1 = "" ;
        while(year != 0){
            ans1.push_back((year % 2) + '0') ;
            year = year/2 ;
        }
        reverse(ans1.begin() , ans1.end()) ;
        ans1.push_back('-') ;

        string ans2 = "" ;
        while(month != 0){
            ans2.push_back((month % 2) + '0') ;
            month = month/2 ;
        }
        reverse(ans2.begin() , ans2.end()) ;
        ans2.push_back('-') ;

        string ans3 = "" ;
        while(din != 0){
            ans3.push_back((din % 2) + '0') ;
            din = din/2 ;
        }
        reverse(ans3.begin() , ans3.end()) ;
        
        return (ans1+ans2+ans3) ;
    }
};