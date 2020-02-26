# HTML简介
## 第一个HTML实例
```html
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>html实例</title>
</head>
<body>
 
<h1>我的第一个标题</h1>
 
<p>我的第一个段落。</p>
 
</body>
</html>
```
##### 实例解析
- 1.<!doctype html> 声明为H5文档
- 2.< html >元素是html界面的根目录
- 3.< head 包含了文档的元(meta)数据，如<meta charset="utf-8>定义网页编码为utf-8.
- 4.title 元素描述了文档的标题
- 5.body 包含了可见的界面内容
- 6.<h1 定义一个大标题
- 7.p 定义一个段落

----
## 什么是HTML？
html是用来描述网页的一种语言。

- HTML标签是由*尖括号*包围的关键词，比如< html>
- HTML标签通常成对出现
- 标签第一个为开始标签，第二个为结束标签
- 上一项也称为*开放标签*和*闭合标签*
- --

## HTML网页结构
![这是一个可视化的HTML界面结构](https://img-blog.csdnimg.cn/20200226175746560.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2lvc3RyZWFtaXNnb29k,size_16,color_FFFFFF,t_70)
# HTML基础
## HTML标题
```html
<h1>这是一个标题</h1>
<h2>这是一个标题</h2>
<h3>这是一个标题</h3>
```
---
## HTML段落
```html
<p>这是一个段落</p>
```
---
## HTML链接
```html
<a href="https://www.bai.com">这是一个链接< /a>
```
***提示***：在href属性中指定链接地址

---

## HTML图像
HTML图像是通过标签< img>来定义的
```html
<img src="/images/logo.png" width="258" height="39"/>
```
---

# HTML元素
## HTML元素语法
- HTML元素以**开始标签**起始
- HTML元素以**结束标签**终止
- **元素的内容**是开始标签与结束标签之间的内容
- 某些HTML元素具有**空内容**
- 空元素**在开始标签中进行关闭**
- 大多数HTML元素可拥有**属性**
- --

## 嵌套的HTML元素
HTML文档由嵌套的HTML元素构成

---
# HTML属性
## HTML属性
- html元素可以设置**属性**
- 属性可以在元素中添加**附加信息**
- 属性一般描述于**开始标签**
- 属性总是以名称/值对的形式出现，**比如：name="value"**.

---
## 属性实例
HTML链接由< a>标签定义。链接的地址在**href**中指定：
```html
<a href="http://www.bai.com">这是一个链接</a>
```
---
## HTML属性常用引用属性值
属性值应该始终被包括在引号内。
双引号最常用，但是当属性值本身就含有双引号，必须使用单引号。

---
##  HTML提示：使用小写属性
推荐使用小写的属性，新版本的html要求使用小写属性。