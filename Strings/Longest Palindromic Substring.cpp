//DYNAMIC PROGRAMMING APPROACH WHERE WE FIX A CENTER AND EXPAND BOTH SIDES USING 2 POINTERS -- O(N2)
string longestPalin (string str) {
        // code here
        int maxLength = 1;
        int start =0;
        for(int i=0;i<str.length();i++){
            int low = i-1;
            int high = i+1;
            while(high<str.length() && str[i]==str[high]){
                high++;
            }
            while(low>=0 && str[i]==str[low]){
                low--;
            }
            while(high<str.length() && low>=0 & str[low]==str[high]){    //IMP
                low--;
                high++;
            }
            
            int length = high - low -1;   //IMP
            if(maxLength<length){
                maxLength = length;
                start = low+1;  //IMP
            }
        }
        return str.substr(start,maxLength);
    }

//BRUTE FORCE APPROACH O(N3)
 string longestPalin (string str) {
 
    // All substrings of length 1
    // are palindromes
    int maxLength = 1, start = 0;
 
    // Nested loop to mark start and end index
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;
 
            // Check palindrome
            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;
 
            // Palindrome
            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
     return str.substr(start,maxLength);
    }
