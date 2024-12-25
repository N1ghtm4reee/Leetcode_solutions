#include <limits.h>

int myAtoi(char* s) {
    int r = 0;
    int se = 1;
    int i = 0;
    while(s[i] == ' ' || (s[i]  >= 9 && s[i]  <= 13))
        i++;
    if(s[i]=='+'|| s[i]=='-')
    {
        if(s[i] == '-')
            se =-1;
        i++;
    }
    while(s[i]  >= '0' && s[i]  <= '9')
    {
        if(r > (INT_MAX - (s[i] - '0')) / 10)
        {
            if(se == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        r= (r*10) + (s[i]-'0');
        i++;
    }
    return(se*r);
}
