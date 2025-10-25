#include<stdio.h>
#include<string.h>

int main(){
    //定义一个二维数组，用来存储三个字符串
    char str[3][10];
    char string[10];
    int i;
    
    //输入三个字符串
    for(i=0;i<3;i++){
        fgets(str[i],10,stdin);
    }

    //比较三个字符串，找出最长的字符串
    if(strcmp(str[0],str[1])>0){
        strcpy(string,str[0]);
    }else{
        strcpy(string,str[1]);
    }
    if(strcmp(string,str[2])<0){
        strcpy(string,str[2]);
    }

    //输出最长的字符串
    printf("the longest is %s",string);

    return 0;
}