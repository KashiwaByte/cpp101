#  问题
VS Code控制台没有显示异常，但直接从文件路径打开exe程序就会看到乱码：
![imagewrong.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240225205732.png)



# 编译解决
在编译的时候加上参数    

    -finput-charset=UTF-8 -fexec-charset=GBK

g++在编译时就会把UTF-8对于的字符的编码转换为GBK所对于字符的编码
(因为vscode默认编码是UTF-8而命令行默认编码是GBK)
![image.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240226180419.png)
# 代码解决
在头文件处添加

    #include <windows.h>

设置main函数中第一条语句为

    SetConsoleOutputCP(65001);

![imageright.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240225205857.png)