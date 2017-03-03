//
//  main.cpp
//  LearnCpp4
//
//  Created by hebin on 2017/2/15.
//  Copyright © 2017年 hebin. All rights reserved.
//

#include <iostream>
using namespace std;


//c++类型转换
//static_cast //普遍情况
//const_cast //去常量转型
//dynamic_cast //子类类型转父类类型,转型失败为NULL
//reinterpret_cast //函数指针转型 不具备移植性

//原始类型转换，可读性不高，有可能存在潜在风险

/*
//static_cast
void* func(int type){
    void *c=NULL;
    switch (type) {
        case 1:{
            int i=10;
            c=&i;
            break;
        }
        case 5:{
            char a='c';
            c= &a;
            break;
        }
    }
    return NULL;
};

int main() {
//    int i=0;
//    //自动转换
//    double d=i;
//    int b=d;
    
//    int i=0;
//    double d=9.5;
//    i=static_cast<int>(d);
    
//    cout<<i<<endl;
    
    char* a=static_cast<char*>(func(1));
    
    return 0;
}
*/


/*
//const_cast
void func(const char c[]){
    //char *b=(char *)c;
    char *b=const_cast<char*>(c);
    b[1]='x';
    
}

int main(){
    char hello[]="hello";
    func(hello);
    cout<<hello<<endl;
    return 0;
}
*/


/*
//dynamic_cast
class Led{};

class DiaoLed:public Led{
public:
   virtual void diao(){
        cout<<"吊灯吊在屋顶"<<endl;
    }
};

class TaiLed:public Led{
public:
    virtual void put(){
        cout<<"台灯放在桌上"<<endl;
    }
};

void func(Led* led){
    //TaiLed* tled=(TaiLed*)led;
    TaiLed* tled=dynamic_cast<TaiLed*>(led);
    if(tled!=NULL){
        tled->put();
    }
}

int main(){
    
    DiaoLed dled;
    
    Led *tled=&dled;
    
    func(tled);
    
    return 0;
}
*/


//IO 流

#include <fstream>

/*
//操作文本文件
int main(){
    char *fname="/Users/hebin/Downloads/a.txt";
    //输出流
    ofstream fout(fname);
    if(fout.bad()){
        return 0;
    }
    
    fout<<"hello"<<endl;
    fout<<"world"<<endl;
    //关闭
    fout.close();
    
    //读取
    ifstream fin(fname);
    if(fin.bad()){
        return 0;
    }
    char ch;
    while (fin.get(ch)) {
        cout<<ch;
    }
    fin.close();
    
    
    return 0;
}
*/

/*
//二进制文件
int main(){
    char *src="/Users/hebin/Downloads/格式.docx";
    char *src_new="/Users/hebin/Downloads/格式NEW.docx";
    
    //输入流
    ifstream fin(src,ios::binary);
    //输出流
    ofstream fout(src_new,ios::binary);
    
    if(fin.bad()||fout.bad()){
        return 0;
    }
    
    
    while (!fin.eof()) {
        //读取
        char buff[1024]={0};
        fin.read(buff, 1024);
        //写入
        fout.write(buff, 1024);
    }
    
    fin.close();
    fout.close();
    
    return 0;
}
*/

//c++对象持久化


//stl standard template library 标准模板库
//util,math
//c++集合->java集合
