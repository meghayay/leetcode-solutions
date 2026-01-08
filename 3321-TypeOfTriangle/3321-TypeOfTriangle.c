// Last updated: 8/1/2026, 5:22:41 pm
#pragma GCC optimize("O3", "unroll-loops")
inline void swap(int* x, int* y){int tmp=*x; *x=*y; *y=tmp;}
char* triangleType(int* nums, int n) {
    for(int i=0; i<2; i++){
        if (nums[2]<nums[i]) swap(&nums[i], &nums[2]);
        else if (nums[1]<nums[i]) swap(&nums[i], &nums[1]);
    }
    if (nums[2]>=nums[0]+nums[1]) return "none";
    if (nums[0]==nums[2]) return "equilateral";
    if (nums[0]==nums[1] || nums[1]==nums[2]) return "isosceles";
    return "scalene";
}