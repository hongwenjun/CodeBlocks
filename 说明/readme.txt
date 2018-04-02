CodeBlocks  配置目录说明
https://github.com/hongwenjun/CodeBlocks

CHM        cplusplus-2013-8-8.chm等多本参考手册
MinGW      TDM-GCC 4.7.1  Win32
MinGW64    TDM-GCC 5.1.0  Win64
MSVC	   VC2010 编译器和 ATL_MFC库，只供学习使用

MSVC2015   VC2015主编译器
WindowsKits  Windows 软件开发工具包 (SDK)
SysWOW64     VC2015编译运行用到C++ 运行时

VC2015 编译器 目前设置可以编译控制台程序和WIN32 GUI for x86
向导建立 WIN32 GUI 选择Platform SDK目录 填路径
$(CODEBLOCKS)\WindowsKits\8.1\bin\x86

SDK        wxMSW-2.8.12库分别使用TDM-GCC 4.7.1 和VC2010编译
           Boost库 TDM-GCC 4.7.1编译

tool      有些工具

codeblocks.exe   CodeBlocks主程序
default.conf     CodeBlocks便携版配置程序，已经配置好支持以上四个编译器
                 和部分工具及 C/C++参考手册
             
cb_share_config.exe   可以从default.conf导出配置到你已经配置好的CB中



其他:
==============
已经增加了CodeBlocks 颜色主题方案6个，参见
http://bbs.csdn.net/topics/390176962


下载 TDM GCC
http://tdm-gcc.tdragon.net/download

下载支持中文输出GDB调试器
请到 http://code.google.com/p/qp-gcc/wiki/GDB

