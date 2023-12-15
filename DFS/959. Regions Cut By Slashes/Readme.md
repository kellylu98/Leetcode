### 959. Regions Cut By Slashes

本题的核心在于将输入的grid扩大成n*3的大Grid，然后在大的grid里重新画线。之后使用DFS遍历大的Grid进行计数。

为什么不将输入的grid转换成n*2的大Grid，因为如果转换成n*2的大Grid，那么DFS算法将无法使用。例如：

For example, given ["//", "/ "], the corresponding graph would be something like:

[ ][/][ ][/]


[/][ ][/][ ]


[ ][/][ ][ ]


[/][ ][ ][ ]

If we used a scale of size 2 here, the answer would be 5, when it should be 3. Why you may ask? It's because the diagonal in the middle cannot locate the diagonals next to it because we search only top, right, bottom, and left. 

However, if we would scale this to a factor of 3, we get:

[ ][ ][/][ ][ ][/]


[ ][/][ ][ ][/][ ]


[/][ ][ ][/][ ][ ]


[ ][ ][/][ ][ ][ ]


[ ][/][ ][ ][ ][ ]


[/][ ][ ][ ][ ][ ]

In this example, the middle diagonal now has enough room to search for other diagonal using just 4 directions and the following result would be 3.

经过上述一系列操作之后，我们就将这道题转换成了200.Number of Islands,水是1，陆地是0

[Leetcode Link](https://leetcode.com/problems/regions-cut-by-slashes/)
[200.Number of Islands](https://leetcode.com/problems/number-of-islands/)
