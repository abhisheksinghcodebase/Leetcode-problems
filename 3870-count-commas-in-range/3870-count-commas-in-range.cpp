class Solution {
public:
    int countCommas(int n) {

        int  commas = 0;
        if(n < 1000){
            return 0;
        }

        if(n > 999){
            for(int i = 1000; i<=n; i++){
                // if(i > 1000 && i < 100000){
                //     commas =1;
                // }

                commas++;

            }

        }
        return commas;
    }
};