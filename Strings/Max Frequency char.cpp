char getMaxOccurringChar(char str[])
{
    // freq[] used as hash table
    int freq[26] = { 0 };
 
    // to store maximum frequency
    int max = -1;
 
    // to store the maximum occurring character
    char result;
 
    // length of 'str'
    int len = strlen(str);
 
    // get frequency of each character of 'str'
    for (int i = 0; i < len; i++)
        freq[str[i] - 'a']++;
 
    // for each character, where character is obtained by
    // (i + 'a') check whether it is the maximum character
    // so far and accordingly update 'result'
    for (int i = 0; i < 26; i++)
        if (max < freq[i]) {
            max = freq[i];
            result = (char)(i + 'a');        //explicit desclaration
        }
 
    // maximum occurring character
    return result;
}
