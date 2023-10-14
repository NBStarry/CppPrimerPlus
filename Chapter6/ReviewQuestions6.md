1. 代码1每个循环都要执行两个if，而代码二仅需执行一个
2. ch + 1被转换为int类型，输出对应的数
3. 程序写的是ch = '$'而不是ch == '$'!
```
// 纯输出如下
H$i$!$
$S$e$n$d$ ct1 = 9, ct2 = 9
// 连带输入是这样的
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1 = 9, ct2 = 9
```
4. 
```
// a
if(weight >= 115 && weight < 125)
// b
if(ch == 'q' || ch == 'Q')
// c
if(!(x % 2) && x != 26)
// d
if(!(x % 2) && (x % 26))
// e
if(donation >= 1000 && donation <= 2000 || guest == 1)
// f
if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
```
5. 不同，x可能是各种类型的变量，!x就变成bool类型，!!x也是bool类型
6. 
```
(x < 0) ? -x : x;
```
7. 别忘了break
```
switch (ch)
{
    case 'A' : a_grade++; break;
    case 'B' : b_grade++; break;
    case 'C' : c_grade++; break;
    case 'D' : d_grade++; break;
    default  : f_grade++; break;
}
```
8. 要求输入数字容易失败使程序挂起，而输入字母即使输入了数字也可以转成字母，方便错误处理
9. 
```
while(cin.get(ch) && ch != 'Q')
{
    if(ch == '\n') line++;
}
```