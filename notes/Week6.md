# Week6

## Review

1. > $$
   > X 连续\Leftrightarrow \exist pdf\,f(x)\\
   > F(x)=\int_{-\infty}^{x}f(t)dt\\
   > \int_{-\infty}^{\infty}f=1
   > $$

2. $$
   U(a,b)\quad U(0,1)\\
   N(\mu,\sigma^2),位置参数，尺度参数\quad N(0,1)\\
   Exp(\lambda)\\危险率
   $$

3. $$
   Y=g(X)\\
   P(Y=y)=P(g(X)=y)\\
   P(Y\le y)\\
   Y=X^2\\
   Y=F(X)\sim U(0,1),通过U(0,1)构造
   $$

## 联合分布

### 1. 随机向量

$$
(X_1,\dots,X_n)\\
(联合)cdf:F(x_1,\dots,x_n)=P(X\le x_1,X_2\le x_2,\dots,X_n\le x_n)\\
\forall (x_1,x_2,\dots,x_n)\in\R^n\\
n=2,二元分布\\
(X,Y),F(x,y)
$$

### 2. 离散型

定义：至多可数多个取值

注: $\Leftrightarrow X_i 离散，\forall i$

​	n=2,分布表
$$
pmf:f(x_1,\dots,x_n)=P(X_1=x_1,\dots,X_n=x_n)
$$
e.g.

> $$
> A_1,\dots,A_n,\sum_iA_i=\Omega,A_iA_j=\O,\forall i\ne j\\
> P_1,\dots,P_n,P_i\ge 0\sum_iP_i=1\\
> N次独立试验\\
> P((X_1,\dots,X_n)=(k_1,\dots,k_n))=\dbinom{N}{k_1,\dots,k_n}P_1^{k_1}\dots P_n^{k_n},k_i\ge 0,\sum_ik_i\equiv N\\$$

###  3. 连续型

定义：$$\exist f(x_1,\dots,x_n)\ge 0,s.t. \forall I\subset \R^n 可测集\\P((X_1,\dots X_n))=\int f$$

​			则称$(X_1,\dots,X_n)$为连续型，$称f为其pdf$

注：

1. $\int_{\R^n}f\equiv 1$
2. $F(x_1,\dots,x_n)=\int_{-\infty}^{x_1}\dots\int_{-\infty}^{x_n}f(t_1,\dots,t_n)dt_n\dots dt_1\\\frac{\partial^nF}{\partial x_1\dots \partial x_n}(x_1,\dots,x_n)=f(x_1,\dots,x_n)$

e.g. 均匀分布
$$
f(x,y)=
\begin{cases}
\frac{1}{(d-c)(b-a)},(x,y)\in[a,b]\times[c,d]\\
0,others
\end{cases}
$$
e.g. 二元正态$(X,Y)\sim N(\mu_1,\mu_2,\sigma_1^2,\sigma_2^2,\rho)$
$$
f(x,y)=\frac{1}{2\pi\sigma_1\sigma_2}\frac{1}{\sqrt{1-\rho^2}}\cdot exp\{-\frac{1}{2(1-\rho^2)}[(\frac{x-\mu_1}{\sigma_1})^2-2\rho\frac{x-\mu_1}{\sigma_1}\frac{y-\mu_2}{\sigma_2}+(\frac{y-\mu_2}{\sigma_2})^2\}\\
\forall (x,y)\in\R^2\\
\overrightarrow{X}=(\frac{x-\mu_1}{\sigma_1},\frac{y-\mu_2}{\sigma_2})^T\\
B=\frac{1}{1-\rho^2}
\begin{pmatrix}
1&-\rho\\
-\rho&1
\end{pmatrix}
=A^TA\\
f(x,y)=-\frac{1}{2}\overrightarrow{X}^TB\overrightarrow{X}=-\frac{1}{2}(AX)^T(AX)\\
A=\frac{1}{\sqrt{1-\rho^2}}
\begin{pmatrix}
1&-\rho\\
0&\pm\sqrt{1-\rho^2}
\end{pmatrix}\\
或\frac{1}{\sqrt{1-\rho^2}}
\begin{pmatrix}
-1&\rho\\
0&\pm\sqrt{1-\rho^2}
\end{pmatrix}\\
$$

### 4. 边际分布

$$
n=2,(X,Y),F(x,y)\\
P(X\le x)=F_X(x)=P(X\le x,-\infty\le y\le\infty)\\
=\lim_{y\to\infty}F(x,y)\\
(X_1,\dots,X_n),F(x_1,\dots,x_n)\\
F_1(x)=P(X_1\le x)=P(X_1\le x,X_i\in\R,i\ne 1)=\lim_{x_i\to \infty,i\ne 1}F(x,x_2,\dots,x_n)
$$



e.g. n=2
$$
P(X\ge a,Y\ge B)=1-F_X(a)-F_Y(b)+F(a,b)
$$
连续型：
$$
(X,Y), pdf 为f(x,y)\\
F_X(x)=P(X\le x)=\int_{-\infty}^x(\int_{-\infty}^\infty f(t,y)dy)dt\\
\Rightarrow X的边际密度为f_X(x)=\int^\infty_{-\infty}f(x,y)dy
$$
e.g. 二元正态
$$
f_X(x)=\int_{-\infty}^{\infty}f(x,y)dy=\\
=\dots(自己完成）\\
=\frac{1}{\sqrt{2\pi}\sigma_1}e^{-\frac{(x-\mu^2)}{2\sigma_1^2}}\\
\Rightarrow X\sim N(\mu,\sigma_1^2)
$$

### 5. 条件分布

(X,Y)为例

- 离散型

$$
P(X=a_i,Y=b_j)=P_{ij}\ge 0,\sum_{i,j}P_{ij}\equiv 1\\
P(X=a_i|Y=b_j)=\frac{P(X=a_i,Y=b_j)}{P(Y=b_j)}=\frac{P_{ij}}{\sum_kP_{kj}}
$$

- 连续型：$pdf\,f(x,y)$

$$
P(X\le x|y\le Y\le y+dy)=\frac{P(X\le x,y\le Y\le y+dy)}{P(y\le Y\le y+dy)}\\
=\frac{\int_{-\infty}^{x}\int_y^{y+dy}f(t,s)dsdt}{\int_y^{y+dy}f_Y(s)ds}\\
\longrightarrow P(X\le x|Y\le y)=\frac{\int_{-\infty}^{x}f(t,y)dt}{f_Y(y)}
$$

​		定义：$f_X(x|y)=\frac{f(x,y)}{f_Y(y)},若f_Y(y)>0$

注：

> $$
> (1)\quad F_X(a|y)=P(X\le a|Y=y)=\int_{-\infty}^af_X(x|y)dx\\
> (2)f(x,y)=f_Y(y)f_x(x|y)\Rightarrow f_X(x)=\int_{-\infty}^{\infty}f(x,y)dy\\
> =\int_{-\infty}^{\infty}f_X(x|y)f_Y(y)dy,全概率公式
> $$

e.g. 二元正态
$$
f_Y(y|x)=\frac{1}{\sqrt{2\pi}\sigma_2}\frac{1}{\sqrt{1-\rho^2}}exp(-\frac{(y-(\mu_2+\rho\frac{\sigma_2}{\sigma_1}(x-\mu_1)))^2}{2(1-\rho^2)\sigma_2^2})\\
\Rightarrow 当X=x时，Y的分布为正态分布，N(\mu_2+\rho\frac{\sigma_2}{\sigma_1}(x-\mu_1),(1-\rho^2)\sigma_2^2)
$$

### 6. 独立性

定义：$(X,Y),cdf\quad F(x,y)$
$$
X,Y独立\Leftrightarrow F(x,y)=F_X(x)F_Y(y),\forall x,y \in \R\\
注：等价于（离散，连续）f(x,y)=f_X(x)f_Y(y),\forall x,y\in\R
$$
e.g. 二元正态

​		$X,Y独立\Leftrightarrow\rho=0$

定义：$X_1,\dots,X_n独立\Leftrightarrow F(x_1,\dots,x_n)=F_1(x_1)\dots F(x_n),\forall x_i\in\R$

注：

> 1. $$
>    X_1,\dots,X_n独立，则\\
>    Y_1=g_1(X_1,\dots,X_m)\\
>    Y_2=g_2(X_{m+1},\dots X_n)独立
>    $$
>2. $$
> X_1,\dots X_n独立\Rightarrow f(x_1,\dots,x_n)=f_1(x_1)\dots f_n(x_n),(离散，连续)
>    $$
>    
>3. $$
> 若连续(X_1,\dots,X_n),\forall x_i\in\R,pdf\quad f(x_1,\dots,x_n)=g_1(x_1)\dots g_n(x_n),\\则X_1,\dots,X_n独立
>    $$
>    
>4. 

