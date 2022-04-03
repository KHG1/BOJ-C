#include <stdio.h>

int data[100];
int tmp = -1;

int empty() { return (tmp == -1); }
int size() { return tmp + 1; }

int top() 
{ 
	if (empty())
		printf("-1\n");
	
	return data[tmp]; 
}

void push(int a) 
{ 
	if (!empty())
		;

	data[++tmp] = a;
}

int pop() 
{ 
	if (empty())
		printf("-1\n");
	
	return data[tmp--];
}

int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char s[20];

		scanf("%s", &s);

		switch (s)
		{

		}
	}
}