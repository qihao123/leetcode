class Solution {
public:
 bool isPalindrome(int x) {
 if (x < 0){
 return false;
}

 // 求整数位数
 int len = 1;
 while (x / len >= 10) {
 len *= 10;
}

 while (x != 0) {
 int hight = x / len;
 int low = x % 10;
 if (hight != low){
 return false;
}
 x = (x % len) / 10;
 len /= 100;
}

 return true;
}
};
/* 问题描述
Determine whether an integer is a palindrome. Do this without extra space.

click to show spoilers.

Subscribe to see which companies asked this question
 */
