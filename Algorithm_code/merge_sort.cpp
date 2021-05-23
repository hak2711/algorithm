#include<iostream>
#include<algorithm>
#define MAX 5000001

using namespace std;

int nums[MAX];
int sorted[MAX];

void merge(int left, int mid, int right){
  int i = left;
  int j = mid+1;
  int k = left;

  while (i<=mid && j<=right){
    if(nums[i] <= nums[j])
      sorted[k++] = nums[i++];
    else sorted[k++] = nums[j++];
  }

  if (i>mid){
    for (int w=j; w<=right; w++){
      sorted[k++] = nums[j++];
    }
  }
  else{
    for (int w=i; w<=mid; w++){
      sorted[k++] = nums[i++];
    }
  }

  for (int w=left; w<=right; w++)
    nums[w] = sorted[w];
}

void mergeSort(int left, int right){
  int mid;
  if (left < right){
    mid = (left+right)/2;
    mergeSort(left,mid);
    mergeSort(mid+1,right);
    merge(left,mid,right);
  }
}

int main (void){
  int k,n;
  cin >> n >> k;

  for(int i = 0; i<n; i++){
    cin >> nums[i];
  }

  mergeSort(0,n-1);
}