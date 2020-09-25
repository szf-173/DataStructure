//��̬��ʽ
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
//����
bool ListInsert(SqList& L, int i/*���λ��*/, int e/*��ŵ�����*/)
{
	if (i<1 || i>L.length + 1)//�жϴ�ŷ�Χ�Ƿ�Ϸ�
		return false;
	if (L.length >= MaxSize)//�Ƿ񳬳�
		return false;
	for (int j = L.length;j >= i;j--)
		L.data[j] = L.data[j - 1];//����
	L.data[i - 1] = e;//�±��һ
	L.length++;
	return true;
}
//ɾ��
bool ListDelete(SqList &L, int i/*ɾ��λ��*/, int &e/*�ɷ���ɾ������*/)
{
	if (i<1 || i>L.length)//�жϴ�ŷ�Χ�Ƿ�Ϸ�
		return false;
	e = L.data[i-1];
	for (int j = i;j < L.length;j++)
		L.data[j - 1] = L.data[j];//ǰ��
	L.length--;//���Ա���-1
	return true;
}
//��λ���ң����۾���̬��
int/*����һ��*/ GetElem(SqList L, int i)
{
	return L.data[i-1];
}
//��̬��ֵ����
int LocateElem(SqList L, int/*������ͬ*/ e)
{
	for (int i = 0;i < L.length;i++)
		if (L.data[i] == e)
			return i + 1;//λ��=�±�+1
	return 0;
}