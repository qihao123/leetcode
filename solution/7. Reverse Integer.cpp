int reverse(int x) {
     bool negative = false;
     if(x<0){
        negative = true;
        x = -x;
     }
     int nums = 0;
     int tmpNum;
     int tmp;
     int i;
     while(x){
         tmpNum = nums;
         tmp = 0;
         for(i = 0;i<10;i++){
            tmp = tmp+tmpNum;
            if(tmp<tmpNum)
                return 0;
         }
         nums = tmp;
         nums=nums+x%10;
         x = x/10;
     }
     if(negative)
        return -1*nums;
     return nums;
}
/* 问题描述：
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

click to show spoilers.

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
*/
