class Solution {
private:
    string toBinary(int num) {
        string binaryStr = "";
        while (num != 0) {
            binaryStr.push_back((num % 2) + '0');
            num /= 2;
        }
        reverse(binaryStr.begin(), binaryStr.end());
        return binaryStr;
    }

public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int din = stoi(date.substr(8, 2));
        
        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(din);
    }
};
