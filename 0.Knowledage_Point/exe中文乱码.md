#  问题
VS Code控制台没有显示异常，但直接从文件路径打开exe程序就会看到乱码：
![imagewrong.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240225205732.png)

# 解决
在头文件处添加

    #include <windows.h>

设置main函数中第一条语句为

    SetConsoleOutputCP(65001);

![imageright.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240225205857.png)