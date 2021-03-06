# hust_retest

## 华中科技大学计算机专业历年复试上机测试题目

注意，试题顺序为降序排列，试题代码仅供参考，如您有更好的答案，欢迎一起交流，直接*pull request*或者[发邮件给我](mailto://wuzhiqin@yahoo.com "点击前往")

### 2017年复试上机试题

>**1.** 输入A,B,C,……，Z或a，b，c，……z中的任意一个数，输出如下的字母排列：  
如输入D，然后会输出：  
　　A B C D C B A  
　　　A B C B A  
　　　　A B A  
　　　　　A  
如输入c，然后会输出：  
　　a b c b a  
　　　a b a  
　　　　a  
*[点击前往查看实现代码（仅供参考）](./2017-01.c "点击前往")*  

>**2.** 输入每个字符在0~9内的字符串，如果长度为奇数，在字符串末尾加上0，取首尾两个字符将其转换为对应数字，并对相应数字加上32得到另一个数字，再将得到的另一个数字转化为ASCII码对应字符,并输出，然后，如0123456=>01234560,00->0->32->'(空格)'，然后又取第二个字符和倒数第二个字符，16->16->48->’0’，……直到所有数都输出完毕，如果长度为偶数，则不添加0，如012345,055->37->%，依次输出每一个数。  
*[点击前往查看实现代码（仅供参考）](./2017-02.c "点击前往")*  

>**3.** a+b问题，输入包括两个数a和b，其中a和b的位数没有限制，然后对结果进行输出。  
*[点击前往查看实现代码（仅供参考）](./2017-03.c "点击前往")*  

### 15年复试上机试题
>**1.** 输入一串字符，并验证其是否为正确的电话号码。  
要求长度必须为11位，第一位必须为1，第二位为3、5、6、8中得一个，其余位必须为0-9中的一个数。  
*[点击前往查看实现代码（仅供参考）](./2015-01.c "点击前往")*  

>**2.** 无冗余的输入两个字符串，并对其进行拼接。要求：  
1）输出拼接后的字符串。例如，string buff --》 stringbuff  
2）对于拼接后的字符串，输出奇数下标组成的子串和偶数下标组成的子串。  例如，srnbf tiguf  
3）对于奇数下标组成的子串以及偶数下标组成的子串进行排序。例如bfnrs fgitu  
*[点击前往查看实现代码（仅供参考）](./2015-02.c "点击前往")*  

>**3.** 无冗余的输入一个字符串:  
1）输出该字符串  
2）对于不是首次出现的字符，对其进行过滤，例如abcdacdef,过滤后为abcdef  
3）对于字符0-9，A-F，a-f,将其对应的ASCII码的低4位进行对调，例如将1011,转换为1101,并将对应的ACSII码对应的字符输出，若为字母，转换为大写。  
*[点击前往查看实现代码（仅供参考）](./2015-03.c "点击前往")*

### 14考研复试机试题
>**1.(30’)**设计程序找出全部四位数的某种素数，素数形式如下，如：2333，其中，2、23、233、2333都是素数，输出结果每六个素数一行。  
*[点击前往查看实现代码（仅供参考）](./2014-01.c "点击前往")*  

>**2.(30’)**设计程序实现二进制数字的加减乘除，输入一串字符，包含两个参与运算的操作数，一个加减乘除运算符，中间以空格隔开，然后根据运算符进行运算输出运算结果（二进制）  
```c
如：    输入：101  110  +
        输出：1011
        输入：101  110  *
        输出：11110（高位为0可不输出）
```
*[点击前往查看实现代码（仅供参考）](./2014-02.c "点击前往")*  

>**3.(40’)**设计程序判断输入的字符是否为合法的八进制，十进制或十六进制数字，其中八进制以0开头，十六进制以0X(0x)开头，结尾都可以有L(l)或U(u)什么字母什么的，我也不太记得了，第三题没做完，大概是这么个意思，可以有多组输入，输出为如果输入数字是合法的就输出YES，否则输出NO。
```c
如：    输入：0397
        输出：NO
        输入：970
        输出：YES
        输入：0x1w7
        输出：NO
```
*[点击前往查看实现代码（仅供参考）](./2014-03.c "点击前往")*  

### 13考研复试机试题
> **1.(30')**孪生素数  
如果n和n+2都是素数，则称它们是孪生素数。输入m，输出2个均不超过m的最大孪生素数。5 <= m <= 1000。  
例如m=20时候，答案为17、19。  
*[点击前往查看实现代码（仅供参考）](./2013-01.c "点击前往")*

>**2.(30')**顺转数组  
输入一个数字n，输出一个n阶顺转数组  
如输入：5  
输出：  
1  2  3  4  5     
16 17 18 19 6  
15 24 25 20 7      
14 23 22 21 8   
13 12 11 10 9   
*[点击前往查看实现代码（仅供参考）](./2013-02.c "点击前往")*

>**3.(40')**最长子回文串 
输入一个字符串，求出其中最长的回文子串。  
子串的含义是：在原串连续出现的字符串片段。  
回文的含义是：正着看和倒着看是相同的，如abba和abbebba。  
在判断时要求忽略所有的标点和空格，且忽略大小写，但输出时按原样输出（首尾不要输出多余的字符串）。输入字符串长度大于等于1小于等于5000。  
样例输入：  
She say:Madam,I'm Adam.  
样例输出  
Madam,I'm Adam  

*[点击前往查看实现代码（仅供参考）](./2013-03.c "点击前往")



---
后续等待更新……
