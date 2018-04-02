# CodeBlocks  配置目录说明
https://github.com/hongwenjun/CodeBlocks
---
        从百度网盘只下载 .git 仓库包 可以省资源  
URL:    http://pan.baidu.com/s/1nuR9e57
   
        下载 CodeBlocks_Git.zip 解压开
        git 进入 CodeBlocks   恢复文件使用命令
        git pull
        git checkout .
---

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

![](https://github.com/hongwenjun/CodeBlocks/raw/master/%E8%AF%B4%E6%98%8E/CodeBlocksTree.png)

        git checkout
        MSVC  MSVC2015   MinGW   MinGW64   SDK   SysWOW64   WindowsKits
                
    编译器文件太大， 可以按需要到百度网盘下载，链接地址
    http://pan.baidu.com/s/1dD6Qrap
    
    VC2010 编译器是   vc2010_altmfc.7z
    VC2015 目录里有 VC2015编译器和     VC2015编译器精简版
    CodeBlocks_VC_SDK_CHM.7z  是以前配置的便携版

    我的CodeBlocks 是放C盘固态硬盘，编译器放机械硬盘D盘 NTFS 压缩，达到速度和空间的优化

以上 7个目录 你可以使用 MKLINK 建立链接，请自行恢复

        把MSVC2015和 WindowsKits 符号链接过来
        cd /d c:\CodeBlocks
        mklink /d MSVC2015 "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC"
        mklink /d WindowsKits "C:\Program Files (x86)\Windows Kits"
