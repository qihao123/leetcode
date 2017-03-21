int lengthOfLongestSubstring(char* s) {
    int maxlen = 0,currlen = 0;
    int table[128], i, j, start = 0;
    memset(table, 0, sizeof(table));
    for (i = 0; s[i] != '\0'; ++i){
        if( (++table[s[i]]) == 2 ){
            if (currlen > maxlen){
                maxlen = currlen;
            }
            for(j = start; j < i; ++j){ //start记录重复的字符后一个位置
                if (s[j] == s[i]){
                    table[s[j]] = 1;
                    start = j+1;
                    break;
                }else{
                    --currlen;
                    table[s[j]] = 0;
                }
            }
        }else{
            ++currlen;
        }
    }
    if (currlen > maxlen){
        maxlen = currlen;
    }
    return maxlen;
}

/*  问题描述：
Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
  */
