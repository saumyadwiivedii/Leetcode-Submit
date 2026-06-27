class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;  
        int j = 0; 

        while (j < chars.size()) {
            char curr = chars[j]; 
            int count = 0;

            while (j < chars.size() && chars[j] == curr) {
                count++;
                j++;
            }
            chars[i++] = curr;

            
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[i++] = c;
                }
            }
        }

        return i;
    }
};