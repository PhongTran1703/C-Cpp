#include<stdio.h>
__global__ void hello_world(void)
{
  printf("GPU: Hello world!%d\n", threadIdx.x);
}
int main(int argc,char **argv)
{
  printf("CPU: Hello world!\n");
  hello_world<<<1,20>>>();
  cudaDeviceReset();//if no this line ,it can not output hello world from gpu
  return 0;
}
