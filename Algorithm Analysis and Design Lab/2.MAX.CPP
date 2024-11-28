#include <stdio.h>
void maxValue(int ar[], int n)
{
  int mx = ar[0];
  for (int i = 1; i < n; i++)
  {
    if (ar[i] > mx)
    {
      mx = ar[i];
    }
  }
  printf("Maximum value = %d\n", mx);
}
void minvalue(int ar[],int n)
{
  int mn = ar[0];
  for (int i = 1; i < n; i++)
  {
    if (ar[i] < mn)
    {
      mn = ar[i];
    }
  }
  printf("Minimum value = %d\n", mn);

}
int main()
{
  int n;
  printf("Enter Array Size = ");
  scanf("%d", &n);
  int ar[n];
  printf("Enter array Element\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }

  maxValue(ar, n);
  minvalue(ar, n);
}