int myAtoi(char* str) {  
    int flag=1,res=0,dig;  
    while(*str==' ')str++;  
    if(*str=='-'){  
        flag=-1;  
        str++;  
    }else if(*str=='+'){  
        str++;  
    }  
    while(*str){  
        if(*str<'0' || *str>'9'){  
            return flag*res;  
        }  
        dig=*str-'0';  
        if(flag==1 && res*10.0+dig>INT_MAX){  
            return INT_MAX;  
        }else if(flag==-1 && -res*10.0-dig<INT_MIN){  
            return INT_MIN;  
        }  
        res= res*10+dig;  
        str++;  
    }  
    return flag*res;  
}  
/*问题描述
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.
 */
