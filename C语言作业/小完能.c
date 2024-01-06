#include <stdio.h>
#include <string.h>

#define N1 1000010
#define N2 2005

int a[N1];  //�ۻ������еĸɴ���

int main()
{
    int n, m;

    int b[N2];  // b[i]������ʱȡ�������ɴ����У�m�ָɴ����е�i�ֵ�����
    int head, tail, len, minlen;
    int count = 0;  //������
    int i;

    // freopen("file.txt", "r", stdin);
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    //��ʼ��
    head = 0;
    tail = 0;
    len = 0;
    minlen = N1;
    memset(b, 0, sizeof(b));
    //��ȡһ�ΰ���m�ָɴ���������ɴ���
    for(i = 0; count < m && i < n; i++) {
        //����Ҫ��a[i]ȡ����
        if(b[a[i]] == 0) {  //�����ظ�����������ֻ�е�һ��ȡ��һ�ּ�����������
            count++;
        }
        b[a[i]]++;  //��a[i]�ָɴ�������+1��
        tail++;  //βָ������ƶ�һλ
    }

    //�ȼ���õ�һ����С����
    //��ȥ��ͷ���ظ���
    while(b[a[head]] > 1) {
        b[a[head]]--;
        head++;
    }
    len = tail - head;
    if(minlen > len)
        minlen = len;

    //Ȼ��������������ÿ�ӽ���һ���涼Ҫ�ж�һ��
    for(i = tail; i < n; i++) {
        b[a[i]]++;
        tail++;
        while(b[a[head]] > 1) {  //�����ӽ�����ʹ��ǰ���п��Բ���ģ�ɾ��
            b[a[head]]--;
            head++;
        }
        //ÿ��ȥ��ͷ�����ظ��ɴ���֮��Ҫ���¸���һ�³���
        len = tail - head;
        if(minlen > len)
            minlen = len;
    }
    printf("%d\n", minlen);

    return 0;
}

// 12 5
// 2 5 3 1 3 2 4 1 1 5 4 3

