class Solution {
public:
    bool isNumber(string s) {

        //判断、去掉符号('+'/'-')，不影响合法性
        string t;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-'){
                if(i != 0 && (i > 0 && s[i-1] != 'e') && (i > 0 && s[i-1] != 'E')) return false;
            }
            else if(s[i] != '.' && s[i] != 'e' && s[i] != 'E' && !isdigit(s[i])) return false;
            else t.push_back(s[i]);
        }
        if(t == "." || t == "") return false;
        cout << t << endl;

        // 判断e/E和.是否正确
        int countE = 0;
        int countDot = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == 'e' || t[i] == 'E'){
                if(countE != 0) return false;
                if(i == 0 || i == t.size() - 1) return false;
                if(!isNumber(t.substr(0, i))) return false;
                countE++;
            }
            else if(t[i] == '.'){
                if(countDot != 0) return false;
                if(countE != 0) return false;
                countDot++;
            }
        }
        return true;
    }
};
