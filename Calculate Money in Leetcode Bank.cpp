class Solution {
public:
    int totalMoney(int n) {

        int result = 0;
        int monday_money = 1;

        while( n > 0 ){

            int money = monday_money;

            for(int day = 1 ; day <= min(n,7); day++){
                result += money;
                money++;


            }

            monday_money+=1;
            n = n-7;

        }

        return result;
        
    }
};