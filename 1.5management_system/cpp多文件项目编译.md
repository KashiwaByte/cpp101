# 需求分析
大型项目往往需要将不同的函数放在不同的文件中提升耦合度，甚至于通讯录管理系统就有300+行代码，调试起来极不方便，因此我们尝试将项目中的结构体和cleanPerson函数分离出来，为后续的大型项目开发做基础。
# 解耦
将结构体定义和show_menu函数放在了global.h中，为防止出现 multiple definition 问题，我们需要在函数前加 static。 


将cleanPerson函数在头文件cleanPerson.h声明，在cleanPerson.cpp中定义。

# 编译
如果只在main文件编译会报错
![wrong.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240225222953.png)
因此我们在g++命令中把所有的源文件加上
![image.png](https://kashiwa-pic.oss-cn-beijing.aliyuncs.com/20240225223118.png)