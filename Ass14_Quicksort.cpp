#include<iostream>

using namespace std;

class Quick_Sort
{
public:
	int arr[10];
	int pivot,low,high,temp;

public:
	void accept()
	{
		cout<<"Enter the array: ";

		for(int i=0;i<5;i++)
		{
			cin>>arr[i];
		}
	}

	int partition(int low,int high)
	{
		int i=low;
		int j=high;
		int pivot=low;

		while(i<j)
		{
			while(arr[i]<=arr[pivot] && i<high)
			{
				i++;
			}

			while(arr[j]>arr[pivot])
			{
				j--;
			}

			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}

			else
			{
				temp=arr[pivot];
				arr[pivot]=arr[j];
				arr[j]=temp;
			}
		}
		return j;
	}

	void Quicksort(int low,int high)
	{
		if(low<high)
		{
			int j=partition(low,high);

			Quicksort(low,j-1);
			Quicksort(j+1,high);
		}
	}

	void display()
	{
		cout<<"Sorted array is: ";
		for(int i=0;i<5;i++)
		{
			cout<<arr[i];
		}
	}

};

int main()
{
	Quick_Sort q;

	q.accept();
	q.Quicksort(0,5);
	q.display();

	return 0;
}