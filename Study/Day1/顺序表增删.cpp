//静态方式
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
//插入
bool ListInsert(SqList& L, int i/*存放位置*/, int e/*存放的数据*/)
{
	if (i<1 || i>L.length + 1)//判断存放范围是否合法
		return false;
	if (L.length >= MaxSize)//是否超出
		return false;
	for (int j = L.length;j >= i;j--)
		L.data[j] = L.data[j - 1];//后移
	L.data[i - 1] = e;//下标减一
	L.length++;
	return true;
}
//删除
bool ListDelete(SqList &L, int i/*删除位置*/, int &e/*可返回删除数据*/)
{
	if (i<1 || i>L.length)//判断存放范围是否合法
		return false;
	e = L.data[i-1];
	for (int j = i;j < L.length;j++)
		L.data[j - 1] = L.data[j];//前移
	L.length--;//线性表长度-1
	return true;
}
