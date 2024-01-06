#include <stdio.h>
#include <string.h>

#define N1 1000010
#define N2 2005

int a[N1];  //售货机里有的干脆面

int main()
{
    int n, m;

    int b[N2];  // b[i]：在暂时取的连续干脆面中，m种干脆面中第i种的数量
    int head, tail, len, minlen;
    int count = 0;  //计数器
    int i;

    // freopen("file.txt", "r", stdin);
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    //初始化
    head = 0;
    tail = 0;
    len = 0;
    minlen = N1;
    memset(b, 0, sizeof(b));
    //先取一段包含m种干脆面的连续干脆面
    for(i = 0; count < m && i < n; i++) {
        //现在要把a[i]取进来
        if(b[a[i]] == 0) {  //避免重复计算数量，只有第一次取这一种计数器才增加
            count++;
        }
        b[a[i]]++;  //第a[i]种干脆面数量+1；
        tail++;  //尾指针向后移动一位
    }

    //先计算得到一个最小长度
    //先去掉头部重复的
    while(b[a[head]] > 1) {
        b[a[head]]--;
        head++;
    }
    len = tail - head;
    if(minlen > len)
        minlen = len;

    //然后依次向后遍历，每加进来一袋面都要判断一下
    for(i = tail; i < n; i++) {
        b[a[i]]++;
        tail++;
        while(b[a[head]] > 1) {  //如果添加进来的使得前面有可以不买的，删掉
            b[a[head]]--;
            head++;
        }
        //每次去掉头部的重复干脆面之后要重新更新一下长度
        len = tail - head;
        if(minlen > len)
            minlen = len;
    }
    printf("%d\n", minlen);

    return 0;
}

// 12 5
// 2 5 3 1 3 2 4 1 1 5 4 3

