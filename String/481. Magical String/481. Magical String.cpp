class Solution {
public:
    int magicalString(int n) {
        string S = "122";
        int i = 2;
        while(S.size() < n){
            if(S[i] == '2'){
                S.push_back('0' + ('3' - S.back()));
                if(S.size() < n) S.push_back(S.back());
            }
            else{
                S.push_back('0' + ('3' - S.back()));
            }
            i++;
        }

        int count = 0;
        for(char s : S){
            if(s == '1') count++;
        }
        return count;
    }
};

// S 122 11 21 22 11
//             i 
