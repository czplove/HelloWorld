/*
编译:
g++ -o HelloWorld HelloWorld.cpp

method 1：原始的c方法和经典的c++方法
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    printf("Hello world");
    puts("Hello world");
    cout << "Hello world" << endl;
    return 0;
}

method 2：使用宏来实现打印Hello world
#include <cstdio>
#define saySomething(sth) puts(#sth)
int main()
{
    return saySomething(Hello world);
}

method 3：利用迭代器iterator去实现输出
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
int main()
{
    std::string str("Hello world");
    std::copy( std::begin(str),std::end(str),
               std::ostream_iterator<char>(std::cout, ""));
    return 0;
}

method 4: 利用文件名宏实现Hello world
关键在于将源代码文件命名为Hello world.cpp
#include <string>
#include <iostream>

int main()
{
    std::string fileName(__FILE__);
    std::cout << fileName.substr(0, fileName.find("."))<< std::endl;
    return 0;
}

#include<iostream>
    #:预处理标志，后面跟预处理指令，include：预处理指令,包含 <iostream>:c++头文件，输入输出流
        这行的作用就是在预编译之前先执行这行代码。系统提供的头文件用<>括起来
   #include<iostream.h>
        这个头文件是c标准的头文件，c++中叫非标准库文件。
   using namespace std;使用标准命名空间。也就是说C++当中的标准库文件，函数，对象啊等都存放在std空间中，
        作用：作用是在编写大程序的时候能够定义重复的变量，（标识符）
        当需要调用标准空间中的对象，函数的时候调用方法：std::cout std::cin std::endl;需要加双冒号
    #include<iostream> #include<iostream.h>的区别：
        使用#include<iostream>的时候，需要使用using namespace std;而#include<iostream.h>不需要
*/

#include <iostream>
//using std::cout;  //使用std空间中cout对象。::调用的意思
//using std::endl;
int main(void)
{
	//cout<<"hello world"<<endl;
    std::cout << "Hello World" << std::endl;	/*cout是一个标准输出流，使用 << 操作符可以将字符显示到屏幕上。很自然，这是你第一次看到缩写，cout：character outputstream的缩写。刚开始会不适应，但是当你遇见缩写多了的话，你会爱上他。*/
    return 0;
}

/*
#include<iostream>
using namespace std;
int main(void)
{
    cout<<"hello world"<<endl;
    return 0;
}
 
 
#include<iostream.h>
  int main(void)
  {
    cout<<"hello world"<<endl;
    return 0;
  }
*/

