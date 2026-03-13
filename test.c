#include <stdio.h>



typedef enum Value {
    MONDAY,    // 周一
    TUESDAY,   // 周二
    WEDNESDAY, // 周三
    THURSDAY,  // 周四
    FRIDAY,    // 周五
    SATURDAY,  // 周六
    SUNDAY     // 周日
}Value;
void main(){
    printf("%d\n",(Value) 100);
}