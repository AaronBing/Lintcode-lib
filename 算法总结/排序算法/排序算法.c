��������

void InsertSort(vector<int> &nums)
{
    int i, j;
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])    //�����i��Ԫ�ر�������Ԫ�ػ����û��Ҫ���ˣ�������һ��
        {
            nums[0] = nums[i];    //�ڱ������Ǵ�������Ǹ�Ԫ�أ�������һ����nums[0]
            for (j = i - 1; nums[j] > nums[0]; j--)
                nums[j + 1] = nums[j];    //���ڱ����Ҫ����ƶ�
            nums[j] = nums[0];    //�ҵ����ʵ�λ����
        }
    }
}


�۰��������
���۰���ҳ�������Ԫ�ص�λ�ã�Ȼ�����ƶ�Ԫ��

ϣ������
�����Ϊĳһ�������ļ�¼���һ�������У�ʹ���Ϊ����������ν�������򣬾���С�Ĺؼ��ֻ�����ǰ�棬��Ļ����ں��棬����С�Ļ������м�

�������У�Ҫȷ�����һ������ֵΪ1

increment = nums.size();
increment = increment / 3 + 1;
ʵ�֣��൱��ֱ�Ӳ�������� i ���increment��������˲�do while


void ShellSort(vector<int> &nums)
{
    int increment = nums.size();
    do
    {
        increment = increment / 3 + 1;
        for (int i = increment; i< nums.size(); i++)
        {
            if (nums[i] > nums[i - increment])
            {
                nums[0] = nums[i];    //�ڱ�
                for (int j = i - increment; nums[j] > nums[0]; j -= increment)
                    nums[j + increment] = nums[j];
                nums[j + increment] = nums[0];
            }
        }
    } while (increment > 1);
}

ð��

void BubbleSort(vector<int> &nums)
{
    int n = nums.size();
    bool flag = true;    //����Ƿ�������
    for (int i = 0; i < n - 1 && flag; i++)    //���ѭ���ߵ������ڶ���Ԫ��
    {
        flag = false;
        for (int j = n - 1; j > i; j--)
        {
            if (nums[j] < nums[j - 1])
            {
                swap(nums[j - 1], nums[j]);
                flag = true;    //��һ���з�������������Ҫ��һ��
            }    
        }
    }
}

��������
STL�е�sort������ֵ����ȡ�������е�ͷ��β����������λ�õ�Ԫ�أ�������ֵ��Ϊ���ᡣ

���ƴ���
int Partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];
    while (low < high)
    {
        while (low < high && nums[high] >= pivot)
            high--;
        swap(nums[low], nums[high]);
        while (low < high && nums[low] <= pivot)
            low++;
        swap(nums[low], nums[high]);
    }
    return low;
}

void QuickSort(vector<int> &nums, int low, int high)
{
    int index;
    if (low < high)
    {
        index = Partition(nums, low, high);
        QuickSort(nums, low, index - 1);
        QuickSort(nums, index + 1, high);
    }
}

ѡ������

void SelectionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min])
                min = j;
        }
        if (i != min)
            swap(nums[i], nums[min]);
    }
}

������
��n���ڵ�Ķ��в���һ����Ԫ�ص�ʱ�临�Ӷ���logn��ɾ����logn������n����¼�ĳ��Զѣ����Ӷ���n���������Ӷ���nlogn

�鲢����
ʱ�临�Ӷ�nlogn���ռ临�Ӷ�n


 1 void MergeSort(vector<int> &data, int low, int high)
 2 {
 3     if (low < high)
 4     {
 5         int mid = low + (high - low) / 2;
 6         MergeSort(data, low, mid);    //�����Ҳ�����
 7         MergeSort(data, mid + 1, high); //�����������
 8         Merge(data, low, mid, high);   //�ϲ����������������
 9     }
10 }
11 //�ϲ���������������
12 void Merge(vector<int>& data, int low, int mid, int high)
13 {
14     vector<int> temp_data = data;
15     int i = low;
16     int j = mid + 1;
17     int k = low;
18     while (i < mid&&j < high)
19     {
20         if (temp_data[i] < temp_data[j])
21             data[k++] = temp_data[i++];
22         else
23             data[k++] = temp_data[j++];
24     }
25     while (i <= mid)
26         data[k++] = temp_data[i++];
27     while (j <= high)
28         data[k++] = temp_data[j++];
29 }