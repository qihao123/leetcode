int addDigits(int num) {
        while(num>=10){  
            num = (num/10)+num%10;  
        }  
        return num;
}
 /*问题描述：
 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 * /
