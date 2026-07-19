#pragma once
// Scene module - Mario Kart Wii PC Port
// Phase 6: 1708 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x805b0028 (address_range)
void scene_ObjectDirector_805b0028(int);

// 0x0x805b00bc (address_range)
void scene_ObjectDirector_805b00bc(int);

// 0x0x805b0140 (address_range)
u32 ObjectDirector_validate_805b0140(int, int, u32, int);

// 0x0x805b02ec (address_range)
u32 ObjectDirector_validate_805b02ec(int, int, u32, int);

// 0x0x805b0510 (address_range)
void scene_ObjectDirector_805b0510(void);

// 0x0x805b0634 (address_range)
void ObjectDirector_validate_805b0634(int);

// 0x0x805b06e8 (address_range)
void ObjectDirector_validate_805b06e8(int);

// 0x0x805b0764 (address_range)
void scene_ObjectDirector_805b0764(void);

// 0x0x805b0b20 (address_range)
void ObjectDirector_validate_805b0b20(int);

// 0x0x805b0c64 (address_range)
void scene_ObjectDirector_805b0c64(int);

// 0x0x805b0da0 (address_range)
void scene_ObjectDirector_805b0da0(int);

// 0x0x805b0ec0 (address_range)
void ObjectDirector_validate_805b0ec0(u32, u32, int);

// 0x0x805b0fc0 (address_range)
void ObjectDirector_validate_805b0fc0(int, u32, u32, u16, int);

// 0x0x805b1118 (address_range)
int ObjectDirector_validate_805b1118(int, int);

// 0x0x805b1158 (address_range)
void ObjectDirector_validate_805b1158(int, u32);

// 0x0x805b1214 (address_range)
u32 scene_ObjectDirector_805b1214(void);

// 0x0x805b1220 (address_range)
void ObjectDirector_validate_805b1220(u32, u32);

// 0x0x805b1314 (address_range)
int ObjectDirector_validate_805b1314(int, int);

// 0x0x805b1354 (address_range)
void ObjectDirector_assertFail_805b1354(void);

// 0x0x805b1638 (address_range)
void ObjectDirector_assertFail_805b1638(void);

// 0x0x805b16b0 (address_range)
void scene_ObjectDirector_805b16b0(int);

// 0x0x805b1758 (address_range)
void ObjectDirector_validate_805b1758(int);

// 0x0x805b18fc (address_range)
void scene_ObjectDirector_805b18fc(int);

// 0x0x805b1a80 (address_range)
void scene_ObjectDirector_805b1a80(int, u32);

// 0x0x805b1bd0 (address_range)
void scene_ObjectDirector_805b1bd0(int, u32);

// 0x0x805b1c78 (address_range)
void scene_ObjectDirector_805b1c78(int);

// 0x0x805b1d24 (address_range)
void scene_ObjectDirector_805b1d24(int);

// 0x0x805b1db4 (address_range)
void scene_ObjectDirector_805b1db4(int);

// 0x0x805b1f08 (address_range)
void scene_ObjectDirector_805b1f08(void);

// 0x0x805b29e0 (address_range)
u32 ObjectDirector_validate_805b29e0(u32);

// 0x0x805b2a44 (address_range)
u32 * ObjectDirector_validate_805b2a44(u32, int);

// 0x0x805b2adc (address_range)
void ObjectDirector_assertFail_805b2adc(void);

// 0x0x805b2d0c (address_range)
void scene_ObjectDirector_805b2d0c(void);

// 0x0x805b306c (address_range)
void scene_ObjectDirector_805b306c(void);

// 0x0x805b31e4 (address_range)
void scene_ObjectDirector_805b31e4(int);

// 0x0x805b3374 (address_range)
void scene_ObjectDirector_805b3374(int);

// 0x0x805b3444 (address_range)
void ObjectDirector_assertFail_805b3444(void);

// 0x0x805b3728 (address_range)
void scene_ObjectDirector_805b3728(int);

// 0x0x805b379c (address_range)
void ObjectDirector_assertFail_805b379c(void);

// 0x0x805b3a08 (address_range)
void scene_ObjectDirector_805b3a08(u64, u32, u32, u32);

// 0x0x805b3a90 (address_range)
void scene_ObjectDirector_805b3a90(u32, int, u32, u32, u32);

// 0x0x805b3b78 (address_range)
void scene_ObjectDirector_805b3b78(int);

// 0x0x805b3bd8 (address_range)
void ObjectDirector_assertFail_805b3bd8(void);

// 0x0x805b3d8c (address_range)
void ObjectDirector_assertFail_805b3d8c(void);

// 0x0x805b3e58 (address_range)
void ObjectDirector_assertFail_805b3e58(void);

// 0x0x805b3f7c (address_range)
void scene_ObjectDirector_805b3f7c(int);

// 0x0x805b4008 (address_range)
void scene_ObjectDirector_805b4008(int);

// 0x0x805b4380 (address_range)
void scene_ObjectDirector_805b4380(int);

// 0x0x805b4464 (address_range)
void ObjectDirector_validate_805b4464(int);

// 0x0x805b4554 (address_range)
void scene_ObjectDirector_805b4554(void);

// 0x0x805b4694 (address_range)
void scene_ObjectDirector_805b4694(void);

// 0x0x805b47d8 (address_range)
void scene_ObjectDirector_805b47d8(int);

// 0x0x805b48a8 (address_range)
void ObjectDirector_assertFail_805b48a8(void);

// 0x0x805b4c10 (address_range)
void scene_ObjectDirector_805b4c10(void);

// 0x0x805b4dfc (address_range)
void scene_ObjectDirector_805b4dfc(int);

// 0x0x805b4e8c (address_range)
void scene_ObjectDirector_805b4e8c(void);

// 0x0x805b5070 (address_range)
void ObjectDirector_assertFail_805b5070(void);

// 0x0x805b53c4 (address_range)
void scene_ObjectDirector_805b53c4(int);

// 0x0x805b5434 (address_range)
void scene_ObjectDirector_805b5434(int);

// 0x0x805b54a4 (address_range)
void scene_ObjectDirector_805b54a4(void);

// 0x0x805b55f8 (address_range)
void scene_ObjectDirector_805b55f8(void);

// 0x0x805b56f8 (address_range)
void ObjectDirector_assertFail_805b56f8(void);

// 0x0x805b58e8 (address_range)
void scene_ObjectDirector_805b58e8(int);

// 0x0x805b5938 (address_range)
void scene_ObjectDirector_805b5938(void);

// 0x0x805b5b6c (address_range)
void scene_ObjectDirector_805b5b6c(void);

// 0x0x805b5d94 (address_range)
void scene_ObjectDirector_805b5d94(void);

// 0x0x805b5ec0 (address_range)
void ObjectDirector_validate_805b5ec0(int);

// 0x0x805b5f84 (address_range)
int ObjectDirector_validate_805b5f84(int, int);

// 0x0x805b6040 (address_range)
int ObjectDirector_validate_805b6040(int, int);

// 0x0x805b60a4 (address_range)
void scene_ObjectDirector_805b60a4(int, u32);

// 0x0x805b60f0 (address_range)
void scene_ObjectDirector_805b60f0(int);

// 0x0x805b6150 (address_range)
void scene_ObjectDirector_805b6150(int);

// 0x0x805b61d0 (address_range)
void ObjectDirector_validate_805b61d0(int);

// 0x0x805b624c (address_range)
void scene_ObjectDirector_805b624c(u32);

// 0x0x805b62e4 (address_range)
int ObjectDirector_validate_805b62e4(int, int);

// 0x0x805b633c (address_range)
void ObjectDirector_assertFail_805b633c(void);

// 0x0x805b65d4 (address_range)
u32 ObjectDirector_validate_805b65d4(u32);

// 0x0x805b6638 (address_range)
int ObjectDirector_validate_805b6638(int, int);

// 0x0x805b66a4 (address_range)
void scene_ObjectDirector_805b66a4(void);

// 0x0x805b690c (address_range)
void ObjectDirector_validate_805b690c(int);

// 0x0x805b6b38 (address_range)
u32 scene_ObjectDirector_805b6b38(int, u32, u32, int);

// 0x0x805b6cac (address_range)
u32 scene_ObjectDirector_805b6cac(int, u32, u32, int);

// 0x0x805b6eb8 (address_range)
void ObjectDirector_validate_805b6eb8(int);

// 0x0x805b6fe4 (address_range)
void scene_ObjectDirector_805b6fe4(void);

// 0x0x805bd06c (address_range)
void scene_ObjectDirector_805bd06c(int);

// 0x0x805bd104 (address_range)
void scene_ObjectDirector_805bd104(int);

// 0x0x805bd1b8 (address_range)
void scene_ObjectDirector_805bd1b8(void);

// 0x0x805bd4dc (address_range)
void scene_ObjectDirector_805bd4dc(void);

// 0x0x805bddbc (address_range)
void scene_ObjectDirector_805bddbc(int);

// 0x0x805be048 (address_range)
void scene_ObjectDirector_805be048(void);

// 0x0x805be260 (address_range)
void scene_ObjectDirector_805be260(void);

// 0x0x805be608 (address_range)
void scene_ObjectDirector_805be608(u64, u32, u32, u32);

// 0x0x805be690 (address_range)
void scene_ObjectDirector_805be690(int);

// 0x0x805be800 (address_range)
void scene_ObjectDirector_805be800(int);

// 0x0x805be940 (address_range)
void scene_ObjectDirector_805be940(int);

// 0x0x805bea98 (address_range)
void scene_ObjectDirector_805bea98(int);

// 0x0x805beb74 (address_range)
void scene_ObjectDirector_805beb74(int, u32);

// 0x0x805bec64 (address_range)
void scene_ObjectDirector_805bec64(int);

// 0x0x805bec9c (address_range)
void ObjectDirector_assertFail_805bec9c(void);

// 0x0x805beddc (address_range)
void scene_ObjectDirector_805beddc(int);

// 0x0x805beed0 (address_range)
void scene_ObjectDirector_805beed0(int);

// 0x0x805bef8c (address_range)
void scene_ObjectDirector_805bef8c(int);

// 0x0x805beffc (address_range)
void scene_ObjectDirector_805beffc(void);

// 0x0x805bf22c (address_range)
void scene_ObjectDirector_805bf22c(void);

// 0x0x805bf718 (address_range)
void ObjectDirector_validate_805bf718(int);

// 0x0x805bf7ec (address_range)
void ObjectDirector_assertFail_805bf7ec(void);

// 0x0x805bf8c0 (address_range)
void scene_ObjectDirector_805bf8c0(int, u32, u32);

// 0x0x805bf988 (address_range)
void ObjectDirector_validate_805bf988(int);

// 0x0x805bfa1c (address_range)
void scene_ObjectDirector_805bfa1c(u32);

// 0x0x805bfa7c (address_range)
int ObjectDirector_validate_805bfa7c(int, int);

// 0x0x805bfac4 (address_range)
void scene_ObjectDirector_805bfac4(u32);

// 0x0x805bfb2c (address_range)
int ObjectDirector_validate_805bfb2c(int, int);

// 0x0x805bfb74 (address_range)
void ObjectDirector_validate_805bfb74(u32, u32);

// 0x0x805bfd2c (address_range)
u32 ObjectDirector_validate_805bfd2c(u32);

// 0x0x805bfd90 (address_range)
int ObjectDirector_validate_805bfd90(int, int);

// 0x0x805bfdfc (address_range)
void scene_ObjectDirector_805bfdfc(void);

// 0x0x805bffa0 (address_range)
void scene_ObjectDirector_805bffa0(void);

// 0x0x805c0154 (address_range)
u32 scene_CourseObjects_805c0154(int, u32, u32, int);

// 0x0x805c0488 (address_range)
void CourseObjects_assertFail_805c0488(void);

// 0x0x805c0c10 (address_range)
void scene_CourseObjects_805c0c10(void);

// 0x0x805c0de8 (address_range)
void scene_CourseObjects_805c0de8(int);

// 0x0x805c0e50 (address_range)
void scene_CourseObjects_805c0e50(int, u32, int);

// 0x0x805c0fd0 (address_range)
void scene_CourseObjects_805c0fd0(void);

// 0x0x805c1180 (address_range)
void scene_CourseObjects_805c1180(int);

// 0x0x805c1368 (address_range)
void scene_CourseObjects_805c1368(int);

// 0x0x805c13c8 (address_range)
void CourseObjects_validate_805c13c8(int);

// 0x0x805c1548 (address_range)
void scene_CourseObjects_805c1548(int);

// 0x0x805c168c (address_range)
void CourseObjects_validate_805c168c(int);

// 0x0x805c1738 (address_range)
void scene_CourseObjects_805c1738(u64, u32, u32, u32);

// 0x0x805c17cc (address_range)
void CourseObjects_validate_805c17cc(int);

// 0x0x805c19c8 (address_range)
void scene_CourseObjects_805c19c8(int);

// 0x0x805c1a28 (address_range)
void scene_CourseObjects_805c1a28(void);

// 0x0x805c1b18 (address_range)
void scene_CourseObjects_805c1b18(int, float);

// 0x0x805c1c68 (address_range)
void scene_CourseObjects_805c1c68(u32);

// 0x0x805c1cc8 (address_range)
void CourseObjects_validate_805c1cc8(int, int);

// 0x0x805c1e30 (address_range)
int CourseObjects_validate_805c1e30(int, int);

// 0x0x805c1e70 (address_range)
void scene_CourseObjects_805c1e70(int);

// 0x0x805c1fd0 (address_range)
void CourseObjects_validate_805c1fd0(int);

// 0x0x805c21c0 (address_range)
void scene_CourseObjects_805c21c0(u64, u32, u32, u32);

// 0x0x805c2248 (address_range)
void CourseObjects_validate_805c2248(int);

// 0x0x805c2324 (address_range)
int * scene_CourseObjects_805c2324(int);

// 0x0x805c2388 (address_range)
int CourseObjects_validate_805c2388(int, int);

// 0x0x805c23c8 (address_range)
u32 scene_CourseObjects_805c23c8(u32, int, u32, u32, int);

// 0x0x805c2474 (address_range)
void CourseObjects_validate_805c2474(u32, int);

// 0x0x805c2668 (address_range)
int CourseObjects_validate_805c2668(int, int);

// 0x0x805c26a8 (address_range)
void scene_CourseObjects_805c26a8(int);

// 0x0x805c2840 (address_range)
void CourseObjects_validate_805c2840(int);

// 0x0x805c2d28 (address_range)
u32 scene_CourseObjects_805c2d28(int, u32, u32, u32, float);

// 0x0x805c2eb8 (address_range)
void scene_CourseObjects_805c2eb8(int);

// 0x0x805c2fb4 (address_range)
void scene_CourseObjects_805c2fb4(void);

// 0x0x805c30a8 (address_range)
void scene_CourseObjects_805c30a8(u32);

// 0x0x805c3104 (address_range)
void scene_CourseObjects_805c3104(int);

// 0x0x805c3184 (address_range)
void scene_CourseObjects_805c3184(int);

// 0x0x805c3224 (address_range)
void scene_CourseObjects_805c3224(int);

// 0x0x805c3440 (address_range)
int CourseObjects_validate_805c3440(int, int);

// 0x0x805c3480 (address_range)
u32 CourseObjects_validate_805c3480(u32);

// 0x0x805c34e4 (address_range)
int CourseObjects_validate_805c34e4(int, int);

// 0x0x805c3550 (address_range)
void CourseObjects_assertFail_805c3550(void);

// 0x0x805c35b0 (address_range)
void scene_CourseObjects_805c35b0(int);

// 0x0x805c37d8 (address_range)
void CourseObjects_validate_805c37d8(int);

// 0x0x805c3a40 (address_range)
u32 scene_CourseObjects_805c3a40(int, u32, u32, int);

// 0x0x805c3c24 (address_range)
void CourseObjects_assertFail_805c3c24(void);

// 0x0x805c3f20 (address_range)
void CourseObjects_validate_805c3f20(int);

// 0x0x805c4138 (address_range)
void scene_CourseObjects_805c4138(int);

// 0x0x805c41e0 (address_range)
void CourseObjects_validate_805c41e0(int);

// 0x0x805c4638 (address_range)
void scene_CourseObjects_805c4638(u64, u32, u32, u32);

// 0x0x805c46c0 (address_range)
void scene_CourseObjects_805c46c0(int);

// 0x0x805c4760 (address_range)
void scene_CourseObjects_805c4760(void);

// 0x0x805c4be4 (address_range)
void scene_CourseObjects_805c4be4(int);

// 0x0x805c4c88 (address_range)
void scene_CourseObjects_805c4c88(int);

// 0x0x805c4d30 (address_range)
void scene_CourseObjects_805c4d30(void);

// 0x0x805c5224 (address_range)
void scene_CourseObjects_805c5224(int);

// 0x0x805c5310 (address_range)
void scene_CourseObjects_805c5310(int);

// 0x0x805c5380 (address_range)
void scene_CourseObjects_805c5380(int);

// 0x0x805c545c (address_range)
void CourseObjects_validate_805c545c(u32, int);

// 0x0x805c55dc (address_range)
int CourseObjects_validate_805c55dc(int, int);

// 0x0x805c561c (address_range)
void CourseObjects_assertFail_805c561c(void);

// 0x0x805c5794 (address_range)
void scene_CourseObjects_805c5794(int);

// 0x0x805c587c (address_range)
void scene_CourseObjects_805c587c(int);

// 0x0x805c58ec (address_range)
void scene_CourseObjects_805c58ec(int);

// 0x0x805c5964 (address_range)
void scene_CourseObjects_805c5964(u32);

// 0x0x805c5a14 (address_range)
void CourseObjects_validate_805c5a14(int);

// 0x0x805c5b3c (address_range)
void scene_CourseObjects_805c5b3c(int);

// 0x0x805c5b94 (address_range)
void scene_CourseObjects_805c5b94(int);

// 0x0x805c5bf4 (address_range)
void scene_CourseObjects_805c5bf4(u32);

// 0x0x805c5c78 (address_range)
int CourseObjects_validate_805c5c78(int, int);

// 0x0x805c5cf4 (address_range)
void scene_CourseObjects_805c5cf4(void);

// 0x0x805c5f6c (address_range)
u32 CourseObjects_validate_805c5f6c(u32);

// 0x0x805c5fd0 (address_range)
int CourseObjects_validate_805c5fd0(int, int);

// 0x0x805c603c (address_range)
void scene_CourseObjects_805c603c(int);

// 0x0x805c60e0 (address_range)
u32 scene_CourseObjects_805c60e0(int, u32, u32);

// 0x0x805c61f8 (address_range)
void CourseObjects_validate_805c61f8(int);

// 0x0x805c6328 (address_range)
void CourseObjects_validate_805c6328(int);

// 0x0x805c6424 (address_range)
void scene_CourseObjects_805c6424(void);

// 0x0x805c666c (address_range)
void CourseObjects_validate_805c666c(int);

// 0x0x805c6714 (address_range)
void scene_CourseObjects_805c6714(int);

// 0x0x805c6848 (address_range)
void scene_CourseObjects_805c6848(void);

// 0x0x805c6c3c (address_range)
int CourseObjects_validate_805c6c3c(int, int);

// 0x0x805c6c7c (address_range)
void scene_CourseObjects_805c6c7c(int);

// 0x0x805c6d10 (address_range)
void scene_CourseObjects_805c6d10(int);

// 0x0x805c6e7c (address_range)
void scene_CourseObjects_805c6e7c(int);

// 0x0x805c7200 (address_range)
void CourseObjects_assertFail_805c7200(void);

// 0x0x805c7280 (address_range)
void scene_CourseObjects_805c7280(void);

// 0x0x805c7ae4 (address_range)
u32 CourseObjects_validate_805c7ae4(u32);

// 0x0x805c7b48 (address_range)
u32 * CourseObjects_validate_805c7b48(u32, int);

// 0x0x805c7bf8 (address_range)
void scene_CourseObjects_805c7bf8(void);

// 0x0x805c7f88 (address_range)
void CourseObjects_validate_805c7f88(int);

// 0x0x805c82c8 (address_range)
void CourseObjects_assertFail_805c82c8(void);

// 0x0x805c84c8 (address_range)
u32 scene_CourseObjects_805c84c8(int, u32, u32, int);

// 0x0x805c8720 (address_range)
void CourseObjects_validate_805c8720(int);

// 0x0x805c8a18 (address_range)
void scene_CourseObjects_805c8a18(int);

// 0x0x805c8ae8 (address_range)
void CourseObjects_validate_805c8ae8(int);

// 0x0x805c8dcc (address_range)
void CourseObjects_validate_805c8dcc(int);

// 0x0x805c8f38 (address_range)
void CourseObjects_assertFail_805c8f38(void);

// 0x0x805c9264 (address_range)
void scene_CourseObjects_805c9264(void);

// 0x0x805c9400 (address_range)
void scene_CourseObjects_805c9400(void);

// 0x0x805c978c (address_range)
void scene_CourseObjects_805c978c(int);

// 0x0x805c9894 (address_range)
void CourseObjects_validate_805c9894(int);

// 0x0x805c9bd8 (address_range)
void scene_CourseObjects_805c9bd8(int);

// 0x0x805c9cb0 (address_range)
void scene_CourseObjects_805c9cb0(u32);

// 0x0x805c9cf4 (address_range)
void CourseObjects_validate_805c9cf4(int);

// 0x0x805c9e34 (address_range)
void scene_CourseObjects_805c9e34(int);

// 0x0x805c9f0c (address_range)
void scene_CourseObjects_805c9f0c(int);

// 0x0x805c9fc8 (address_range)
void scene_CourseObjects_805c9fc8(void);

// 0x0x805ca420 (address_range)
void CourseObjects_validate_805ca420(int);

// 0x0x805ca4f0 (address_range)
void scene_CourseObjects_805ca4f0(int);

// 0x0x805ca5f0 (address_range)
void scene_CourseObjects_805ca5f0(int);

// 0x0x805ca694 (address_range)
void CourseObjects_validate_805ca694(int);

// 0x0x805ca90c (address_range)
void scene_CourseObjects_805ca90c(int);

// 0x0x805ca9a8 (address_range)
void scene_CourseObjects_805ca9a8(int);

// 0x0x805caa40 (address_range)
void scene_CourseObjects_805caa40(int);

// 0x0x805cac00 (address_range)
void scene_CourseObjects_805cac00(void);

// 0x0x805cae94 (address_range)
void CourseObjects_validate_805cae94(int);

// 0x0x805caf38 (address_range)
void scene_CourseObjects_805caf38(u64, u32, u32, u32);

// 0x0x805cafc0 (address_range)
void CourseObjects_validate_805cafc0(int);

// 0x0x805cb070 (address_range)
void scene_CourseObjects_805cb070(void);

// 0x0x805cb39c (address_range)
void scene_CourseObjects_805cb39c(void);

// 0x0x805cb4e4 (address_range)
void scene_CourseObjects_805cb4e4(void);

// 0x0x805cb57c (address_range)
void scene_CourseObjects_805cb57c(void);

// 0x0x805cb824 (address_range)
void scene_CourseObjects_805cb824(void);

// 0x0x805cb9c8 (address_range)
void CourseObjects_assertFail_805cb9c8(void);

// 0x0x805cbabc (address_range)
void scene_CourseObjects_805cbabc(void);

// 0x0x805cbfa8 (address_range)
void scene_CourseObjects_805cbfa8(void);

// 0x0x805cc0e0 (address_range)
void scene_CourseObjects_805cc0e0(void);

// 0x0x805cc4c4 (address_range)
void scene_CourseObjects_805cc4c4(u32);

// 0x0x805cc558 (address_range)
int CourseObjects_validate_805cc558(int, int);

// 0x0x805cc5c4 (address_range)
int CourseObjects_validate_805cc5c4(int, int);

// 0x0x805cc60c (address_range)
void CourseObjects_validate_805cc60c(u32);

// 0x0x805cc758 (address_range)
u32 * CourseObjects_validate_805cc758(u32, int);

// 0x0x805cc7e8 (address_range)
void CourseObjects_validate_805cc7e8(u32, u16, u32);

// 0x0x805cc944 (address_range)
int CourseObjects_validate_805cc944(int, int);

// 0x0x805cc984 (address_range)
void CourseObjects_validate_805cc984(double, u32, u16, u32, u16, u32, u32);

// 0x0x805cca84 (address_range)
u32 CourseObjects_validate_805cca84(u32);

// 0x0x805ccb04 (address_range)
void scene_CourseObjects_805ccb04(void);

// 0x0x805ccca0 (address_range)
void CourseObjects_assertFail_805ccca0(void);

// 0x0x805ccdcc (address_range)
void scene_CourseObjects_805ccdcc(double, int, int, uint);

// 0x0x805ccf54 (address_range)
void scene_CourseObjects_805ccf54(double, int, u32);

// 0x0x805ccf94 (address_range)
int scene_CourseObjects_805ccf94(int, uint);

// 0x0x805ccfa4 (address_range)
u32 * scene_CourseObjects_805ccfa4(double, u32, u32);

// 0x0x805cd048 (address_range)
void scene_CourseObjects_805cd048(int);

// 0x0x805cd090 (address_range)
void scene_CourseObjects_805cd090(int, int, u32);

// 0x0x805cd0f8 (address_range)
void scene_CourseObjects_805cd0f8(int, int, u32);

// 0x0x805cd150 (address_range)
void scene_CourseObjects_805cd150(int);

// 0x0x805cd190 (address_range)
void scene_CourseObjects_805cd190(int);

// 0x0x805cd228 (address_range)
void scene_CourseObjects_805cd228(int);

// 0x0x805cd26c (address_range)
u32 scene_CourseObjects_805cd26c(double, double, int, uint, uint);

// 0x0x805cd388 (address_range)
int CourseObjects_validate_805cd388(int, int);

// 0x0x805cd3c8 (address_range)
void CourseObjects_validate_805cd3c8(u32, short);

// 0x0x805cd510 (address_range)
int CourseObjects_validate_805cd510(int, int);

// 0x0x805cd550 (address_range)
void CourseObjects_validate_805cd550(u32, short);

// 0x0x805cd674 (address_range)
u32 CourseObjects_validate_805cd674(u32);

// 0x0x805cd708 (address_range)
void scene_CourseObjects_805cd708(int);

// 0x0x805cd7ac (address_range)
void scene_CourseObjects_805cd7ac(int);

// 0x0x805cd850 (address_range)
void CourseObjects_validate_805cd850(int, int);

// 0x0x805ce0c8 (address_range)
void CourseObjects_assertFail_805ce0c8(void);

// 0x0x805ce254 (address_range)
void scene_CourseObjects_805ce254(void);

// 0x0x805ce304 (address_range)
void scene_CourseObjects_805ce304(void);

// 0x0x805ce3b8 (address_range)
void scene_CourseObjects_805ce3b8(void);

// 0x0x805ce578 (address_range)
void scene_CourseObjects_805ce578(void);

// 0x0x805ce67c (address_range)
int * scene_CourseObjects_805ce67c(int, u32);

// 0x0x805ce770 (address_range)
void scene_CourseObjects_805ce770(double, int, int);

// 0x0x805ce924 (address_range)
void scene_CourseObjects_805ce924(int);

// 0x0x805cea38 (address_range)
u32 CourseObjects_validate_805cea38(int);

// 0x0x805ced08 (address_range)
void scene_CourseObjects_805ced08(int, u32, u32);

// 0x0x805cef44 (address_range)
double scene_CourseObjects_805cef44(double, int);

// 0x0x805cf070 (address_range)
void scene_CourseObjects_805cf070(void);

// 0x0x805cf19c (address_range)
void scene_CourseObjects_805cf19c(void);

// 0x0x805cf2a0 (address_range)
void scene_CourseObjects_805cf2a0(void);

// 0x0x805cf790 (address_range)
int CourseObjects_validate_805cf790(int, int);

// 0x0x805cf800 (address_range)
void scene_CourseObjects_805cf800(void);

// 0x0x805cfa40 (address_range)
int CourseObjects_validate_805cfa40(int, int);

// 0x0x805cfa80 (address_range)
u32 * CourseObjects_validate_805cfa80(u32, short);

// 0x0x805cfbb8 (address_range)
int CourseObjects_validate_805cfbb8(int, int);

// 0x0x805cfc10 (address_range)
int * scene_CourseObjects_805cfc10(int, u32);

// 0x0x805cfc9c (address_range)
void scene_CourseObjects_805cfc9c(int);

// 0x0x805cfcf8 (address_range)
void CourseObjects_validate_805cfcf8(double, int, int);

// 0x0x805cfe40 (address_range)
void CourseObjects_validate_805cfe40(double, int);

// 0x0x805cfe9c (address_range)
u32 CourseObjects_validate_805cfe9c(int);

// 0x0x805d0138 (address_range)
void scene_CourseObjects_805d0138(void);

// 0x0x805d038c (address_range)
void scene_CourseObjects_805d038c(void);

// 0x0x805d045c (address_range)
void scene_CourseObjects_805d045c(void);

// 0x0x805d0798 (address_range)
int CourseObjects_validate_805d0798(int, int);

// 0x0x805d0814 (address_range)
void CourseObjects_assertFail_805d0814(void);

// 0x0x805d0898 (address_range)
void scene_CourseObjects_805d0898(void);

// 0x0x805d08e4 (address_range)
int CourseObjects_validate_805d08e4(int, int);

// 0x0x805d0924 (address_range)
void CourseObjects_assertFail_805d0924(void);

// 0x0x805d0ca4 (address_range)
void scene_CourseObjects_805d0ca4(void);

// 0x0x805d0e14 (address_range)
void scene_CourseObjects_805d0e14(int, int, u32, u32);

// 0x0x805d0eb0 (address_range)
void scene_CourseObjects_805d0eb0(int, int, u32);

// 0x0x805d0f48 (address_range)
u32 scene_CourseObjects_805d0f48(int, int);

// 0x0x805d0f58 (address_range)
u32 scene_CourseObjects_805d0f58(int, int, short);

// 0x0x805d1188 (address_range)
void CourseObjects_validate_805d1188(int);

// 0x0x805d1248 (address_range)
void CourseObjects_validate_805d1248(int);

// 0x0x805d1308 (address_range)
void CourseObjects_validate_805d1308(int);

// 0x0x805d13b4 (address_range)
void scene_CourseObjects_805d13b4(void);

// 0x0x805d1478 (address_range)
void scene_CourseObjects_805d1478(int);

// 0x0x805d1538 (address_range)
void scene_CourseObjects_805d1538(int);

// 0x0x805d16c4 (address_range)
void scene_CourseObjects_805d16c4(void);

// 0x0x805d1844 (address_range)
void scene_CourseObjects_805d1844(int);

// 0x0x805d18a0 (address_range)
void CourseObjects_validate_805d18a0(int);

// 0x0x805d1aa4 (address_range)
void CourseObjects_validate_805d1aa4(int);

// 0x0x805d1c04 (address_range)
void scene_CourseObjects_805d1c04(void);

// 0x0x805d1d60 (address_range)
void scene_CourseObjects_805d1d60(void);

// 0x0x805d1ec0 (address_range)
void scene_CourseObjects_805d1ec0(void);

// 0x0x805d2058 (address_range)
void CourseObjects_validate_805d2058(int);

// 0x0x805d2114 (address_range)
void CourseObjects_validate_805d2114(int);

// 0x0x805d21cc (address_range)
void CourseObjects_validate_805d21cc(int);

// 0x0x805d22dc (address_range)
void scene_CourseObjects_805d22dc(void);

// 0x0x805d257c (address_range)
void scene_CourseObjects_805d257c(void);

// 0x0x805d2790 (address_range)
void scene_CourseObjects_805d2790(u32);

// 0x0x805d27c4 (address_range)
void scene_CourseObjects_805d27c4(int);

// 0x0x805d2884 (address_range)
void CourseObjects_validate_805d2884(int);

// 0x0x805d2bf8 (address_range)
void scene_CourseObjects_805d2bf8(u64, u32, u32, u32);

// 0x0x805d2c80 (address_range)
void scene_CourseObjects_805d2c80(void);

// 0x0x805d2e34 (address_range)
void scene_CourseObjects_805d2e34(void);

// 0x0x805d3040 (address_range)
int CourseObjects_validate_805d3040(int, int);

// 0x0x805d329c (address_range)
void scene_CourseObjects_805d329c(void);

// 0x0x805d3900 (address_range)
void scene_CourseObjects_805d3900(void);

// 0x0x805d3b34 (address_range)
void scene_CourseObjects_805d3b34(int);

// 0x0x805d3bc4 (address_range)
void scene_CourseObjects_805d3bc4(void);

// 0x0x805d3d78 (address_range)
void scene_CourseObjects_805d3d78(void);

// 0x0x805d3e78 (address_range)
void CourseObjects_validate_805d3e78(int);

// 0x0x805d3fac (address_range)
void scene_CourseObjects_805d3fac(void);

// 0x0x805d41d0 (address_range)
void scene_CourseObjects_805d41d0(int);

// 0x0x805d4234 (address_range)
void CourseObjects_assertFail_805d4234(void);

// 0x0x805d4278 (address_range)
void CourseObjects_validate_805d4278(u32);

// 0x0x805d4368 (address_range)
void CourseObjects_assertFail_805d4368(void);

// 0x0x805d43ac (address_range)
void CourseObjects_assertFail_805d43ac(void);

// 0x0x805d43f0 (address_range)
void CourseObjects_assertFail_805d43f0(void);

// 0x0x805d444c (address_range)
void CourseObjects_assertFail_805d444c(void);

// 0x0x805d447c (address_range)
void CourseObjects_validate_805d447c(int);

// 0x0x805d44f4 (address_range)
void CourseObjects_assertFail_805d44f4(void);

// 0x0x805d4538 (address_range)
void CourseObjects_assertFail_805d4538(void);

// 0x0x805d4568 (address_range)
void CourseObjects_validate_805d4568(int);

// 0x0x805d45cc (address_range)
void CourseObjects_assertFail_805d45cc(void);

// 0x0x805d45fc (address_range)
void CourseObjects_assertFail_805d45fc(void);

// 0x0x805d4620 (address_range)
void CourseObjects_assertFail_805d4620(void);

// 0x0x805d4644 (address_range)
void CourseObjects_assertFail_805d4644(void);

// 0x0x805d4668 (address_range)
void CourseObjects_assertFail_805d4668(void);

// 0x0x805d468c (address_range)
void CourseObjects_assertFail_805d468c(void);

// 0x0x805d46b0 (address_range)
void CourseObjects_assertFail_805d46b0(void);

// 0x0x805d46d4 (address_range)
void CourseObjects_assertFail_805d46d4(void);

// 0x0x805d46f8 (address_range)
void CourseObjects_assertFail_805d46f8(void);

// 0x0x805d4758 (address_range)
void CourseObjects_validate_805d4758(int);

// 0x0x805d4808 (address_range)
void scene_CourseObjects_805d4808(void);

// 0x0x805d4c34 (address_range)
void scene_CourseObjects_805d4c34(void);

// 0x0x805d50dc (address_range)
void scene_CourseObjects_805d50dc(void);

// 0x0x805d5168 (address_range)
void scene_CourseObjects_805d5168(int, u32);

// 0x0x805d528c (address_range)
void scene_CourseObjects_805d528c(void);

// 0x0x805d5478 (address_range)
void scene_CourseObjects_805d5478(int);

// 0x0x805d5520 (address_range)
void CourseObjects_assertFail_805d5520(void);

// 0x0x805d574c (address_range)
void CourseObjects_assertFail_805d574c(void);

// 0x0x805d58d8 (address_range)
void scene_CourseObjects_805d58d8(int);

// 0x0x805d593c (address_range)
void scene_CourseObjects_805d593c(void);

// 0x0x805d5b1c (address_range)
void scene_CourseObjects_805d5b1c(u64, int);

// 0x0x805d5b9c (address_range)
void scene_CourseObjects_805d5b9c(void);

// 0x0x805d5f7c (address_range)
void scene_CourseObjects_805d5f7c(int);

// 0x0x805d5fe0 (address_range)
void scene_CourseObjects_805d5fe0(void);

// 0x0x805d6148 (address_range)
void CourseObjects_validate_805d6148(u32, u32);

// 0x0x805d61b8 (address_range)
int CourseObjects_validate_805d61b8(int, int);

// 0x0x805d61f8 (address_range)
void scene_CourseObjects_805d61f8(int);

// 0x0x805d6284 (address_range)
void CourseObjects_validate_805d6284(int);

// 0x0x805d63f0 (address_range)
int CourseObjects_validate_805d63f0(int, int);

// 0x0x805d6438 (address_range)
void scene_CourseObjects_805d6438(u32);

// 0x0x805d647c (address_range)
void CourseObjects_validate_805d647c(u32, u32);

// 0x0x805d6508 (address_range)
void scene_CourseObjects_805d6508(int);

// 0x0x805d6598 (address_range)
int CourseObjects_validate_805d6598(int, int);

// 0x0x805d65d8 (address_range)
void CourseObjects_validate_805d65d8(u32, u32);

// 0x0x805d6674 (address_range)
void scene_CourseObjects_805d6674(int);

// 0x0x805d6754 (address_range)
int CourseObjects_validate_805d6754(int, int);

// 0x0x805d6794 (address_range)
void CourseObjects_validate_805d6794(u32);

// 0x0x805d67f8 (address_range)
u32 CourseObjects_validate_805d67f8(int, u32, u32, u32, u32);

// 0x0x805d6978 (address_range)
void CourseObjects_validate_805d6978(int);

// 0x0x805d6a6c (address_range)
int CourseObjects_validate_805d6a6c(int, int);

// 0x0x805d6ae4 (address_range)
void CourseObjects_validate_805d6ae4(int, u32);

// 0x0x805d6c24 (address_range)
u32 CourseObjects_validate_805d6c24(int, int, u32, u32, u32);

// 0x0x805d6ddc (address_range)
void CourseObjects_validate_805d6ddc(int);

// 0x0x805d6f60 (address_range)
int CourseObjects_validate_805d6f60(int, int);

// 0x0x805d6fa0 (address_range)
void CourseObjects_validate_805d6fa0(u32, u32);

// 0x0x805d7010 (address_range)
void scene_CourseObjects_805d7010(int);

// 0x0x805d70b0 (address_range)
void CourseObjects_validate_805d70b0(int);

// 0x0x805d7150 (address_range)
void scene_CourseObjects_805d7150(int);

// 0x0x805d71b8 (address_range)
void scene_CourseObjects_805d71b8(void);

// 0x0x805d750c (address_range)
int CourseObjects_validate_805d750c(int, int);

// 0x0x805d7568 (address_range)
u32 CourseObjects_validate_805d7568(u32);

// 0x0x805d75cc (address_range)
int CourseObjects_validate_805d75cc(int, int);

// 0x0x805d7638 (address_range)
void scene_CourseObjects_805d7638(void);

// 0x0x805d776c (address_range)
void CourseObjects_validate_805d776c(int);

// 0x0x805d7aa0 (address_range)
u32 scene_CourseObjects_805d7aa0(int, u32, u32, int);

// 0x0x805d7bb8 (address_range)
void scene_CourseObjects_805d7bb8(int);

// 0x0x805d7c70 (address_range)
void scene_CourseObjects_805d7c70(int);

// 0x0x805d7d10 (address_range)
void scene_CourseObjects_805d7d10(void);

// 0x0x805d8054 (address_range)
void scene_CourseObjects_805d8054(int);

// 0x0x805d8118 (address_range)
void scene_CourseObjects_805d8118(int);

// 0x0x805d8288 (address_range)
void scene_CourseObjects_805d8288(void);

// 0x0x805d83c0 (address_range)
void CourseObjects_validate_805d83c0(int);

// 0x0x805d8450 (address_range)
void scene_CourseObjects_805d8450(u64, u32, u32, u32);

// 0x0x805d84dc (address_range)
void scene_CourseObjects_805d84dc(int);

// 0x0x805d8650 (address_range)
void scene_CourseObjects_805d8650(void);

// 0x0x805d87b8 (address_range)
void CourseObjects_assertFail_805d87b8(void);

// 0x0x805d8b94 (address_range)
void scene_CourseObjects_805d8b94(u64, int);

// 0x0x805d8c98 (address_range)
void scene_CourseObjects_805d8c98(u32);

// 0x0x805d8d14 (address_range)
int CourseObjects_validate_805d8d14(int, int);

// 0x0x805d8d54 (address_range)
int CourseObjects_validate_805d8d54(int, int);

// 0x0x805d8d9c (address_range)
void scene_CourseObjects_805d8d9c(u32);

// 0x0x805d8df8 (address_range)
u32 * scene_CourseObjects_805d8df8(u32, int);

// 0x0x805d8f44 (address_range)
void scene_CourseObjects_805d8f44(int);

// 0x0x805d902c (address_range)
void CourseObjects_validate_805d902c(int);

// 0x0x805d9380 (address_range)
void scene_CourseObjects_805d9380(int);

// 0x0x805d9478 (address_range)
void scene_CourseObjects_805d9478(int);

// 0x0x805d964c (address_range)
void scene_CourseObjects_805d964c(int);

// 0x0x805d97d0 (address_range)
int CourseObjects_validate_805d97d0(int, int);

// 0x0x805d9830 (address_range)
void CourseObjects_validate_805d9830(int, int);

// 0x0x805d9bb8 (address_range)
u32 CourseObjects_validate_805d9bb8(u32);

// 0x0x805d9c1c (address_range)
void scene_CourseObjects_805d9c1c(int);

// 0x0x805d9d58 (address_range)
void CourseObjects_validate_805d9d58(int);

// 0x0x805d9e70 (address_range)
void scene_CourseObjects_805d9e70(int);

// 0x0x805d9ebc (address_range)
void scene_CourseObjects_805d9ebc(int);

// 0x0x805d9f04 (address_range)
void scene_CourseObjects_805d9f04(int);

// 0x0x805d9f7c (address_range)
void scene_CourseObjects_805d9f7c(int);

// 0x0x805da00c (address_range)
void scene_CourseObjects_805da00c(void);

// 0x0x805da02c (address_range)
void CourseObjects_validate_805da02c(int);

// 0x0x805da204 (address_range)
void scene_CourseObjects_805da204(int);

// 0x0x805da270 (address_range)
void CourseObjects_validate_805da270(int);

// 0x0x805da540 (address_range)
int CourseObjects_validate_805da540(int, int);

// 0x0x805da5ac (address_range)
void scene_CourseObjects_805da5ac(u32);

// 0x0x805da634 (address_range)
void CourseObjects_validate_805da634(int, u32);

// 0x0x805da9c4 (address_range)
void CourseObjects_validate_805da9c4(int);

// 0x0x805dac20 (address_range)
int CourseObjects_validate_805dac20(int, int);

// 0x0x805dac60 (address_range)
u32 * CourseObjects_validate_805dac60(u32, int);

// 0x0x805dace4 (address_range)
int CourseObjects_validate_805dace4(int, int);

// 0x0x805dad24 (address_range)
int CourseObjects_validate_805dad24(int, int);

// 0x0x805dad64 (address_range)
void scene_CourseObjects_805dad64(int);

// 0x0x805dade0 (address_range)
void scene_CourseObjects_805dade0(void);

// 0x0x805dafc4 (address_range)
void CourseObjects_validate_805dafc4(int);

// 0x0x805db0c4 (address_range)
void scene_CourseObjects_805db0c4(void);

// 0x0x805db44c (address_range)
int CourseObjects_validate_805db44c(int, int);

// 0x0x805db48c (address_range)
void scene_CourseObjects_805db48c(void);

// 0x0x805db834 (address_range)
void scene_CourseObjects_805db834(int);

// 0x0x805db93c (address_range)
void scene_CourseObjects_805db93c(int);

// 0x0x805dbb50 (address_range)
void scene_CourseObjects_805dbb50(void);

// 0x0x805dbf0c (address_range)
void scene_CourseObjects_805dbf0c(int);

// 0x0x805dbf84 (address_range)
void scene_CourseObjects_805dbf84(void);

// 0x0x805dc118 (address_range)
void scene_CourseObjects_805dc118(void);

// 0x0x805dc45c (address_range)
void scene_CourseObjects_805dc45c(u64, u32, u32, u32);

// 0x0x805dc4e4 (address_range)
void scene_CourseObjects_805dc4e4(void);

// 0x0x805dc694 (address_range)
void scene_CourseObjects_805dc694(void);

// 0x0x805dc7a8 (address_range)
int CourseObjects_validate_805dc7a8(int, int);

// 0x0x805dc844 (address_range)
int CourseObjects_validate_805dc844(int, int);

// 0x0x805dc8ac (address_range)
void CourseObjects_validate_805dc8ac(u32, int);

// 0x0x805dca60 (address_range)
void scene_CourseObjects_805dca60(void);

// 0x0x805dcd44 (address_range)
void CourseObjects_validate_805dcd44(int);

// 0x0x805dce74 (address_range)
void scene_CourseObjects_805dce74(int);

// 0x0x805dcedc (address_range)
void scene_CourseObjects_805dcedc(int);

// 0x0x805dd0fc (address_range)
void scene_CourseObjects_805dd0fc(int);

// 0x0x805dd284 (address_range)
void scene_CourseObjects_805dd284(int);

// 0x0x805dd3b0 (address_range)
void CourseObjects_validate_805dd3b0(int);

// 0x0x805dd6e0 (address_range)
void scene_CourseObjects_805dd6e0(int);

// 0x0x805dd73c (address_range)
void CourseObjects_validate_805dd73c(int);

// 0x0x805dd800 (address_range)
void scene_CourseObjects_805dd800(int);

// 0x0x805dd8e4 (address_range)
void scene_CourseObjects_805dd8e4(int);

// 0x0x805dda58 (address_range)
void scene_CourseObjects_805dda58(int);

// 0x0x805ddb84 (address_range)
uint scene_CourseObjects_805ddb84(int);

// 0x0x805dddec (address_range)
void scene_CourseObjects_805dddec(int);

// 0x0x805dde4c (address_range)
void scene_CourseObjects_805dde4c(void);

// 0x0x805ddf64 (address_range)
void CourseObjects_assertFail_805ddf64(void);

// 0x0x805de1cc (address_range)
int CourseObjects_validate_805de1cc(int, int);

// 0x0x805de244 (address_range)
void CourseObjects_assertFail_805de244(void);

// 0x0x805de50c (address_range)
u32 CourseObjects_validate_805de50c(u32);

// 0x0x805de570 (address_range)
void scene_CourseObjects_805de570(int);

// 0x0x805de700 (address_range)
void CourseObjects_validate_805de700(int);

// 0x0x805de9bc (address_range)
void scene_CourseObjects_805de9bc(int);

// 0x0x805dea58 (address_range)
void scene_CourseObjects_805dea58(int);

// 0x0x805deb8c (address_range)
void scene_CourseObjects_805deb8c(int);

// 0x0x805dec58 (address_range)
void scene_CourseObjects_805dec58(void);

// 0x0x805ded04 (address_range)
void scene_CourseObjects_805ded04(void);

// 0x0x805deea4 (address_range)
void scene_CourseObjects_805deea4(int);

// 0x0x805df024 (address_range)
void CourseObjects_validate_805df024(int, u32);

// 0x0x805df148 (address_range)
void CourseObjects_assertFail_805df148(void);

// 0x0x805df288 (address_range)
void scene_CourseObjects_805df288(int);

// 0x0x805df304 (address_range)
void scene_CourseObjects_805df304(void);

// 0x0x805df458 (address_range)
void scene_CourseObjects_805df458(int);

// 0x0x805df528 (address_range)
void scene_CourseObjects_805df528(void);

// 0x0x805df7a0 (address_range)
int CourseObjects_validate_805df7a0(int, int);

// 0x0x805df820 (address_range)
void scene_CourseObjects_805df820(u32);

// 0x0x805df87c (address_range)
int * scene_CourseObjects_805df87c(int, int);

// 0x0x805df918 (address_range)
int CourseObjects_validate_805df918(int, int);

// 0x0x805df958 (address_range)
void CourseObjects_validate_805df958(int);

// 0x0x805dfb1c (address_range)
void CourseObjects_validate_805dfb1c(int);

// 0x0x805dfc44 (address_range)
int scene_CourseObjects_805dfc44(int);

// 0x0x805dfc90 (address_range)
void CourseObjects_validate_805dfc90(int);

// 0x0x805dfd54 (address_range)
void CourseObjects_validate_805dfd54(int);

// 0x0x805dffbc (address_range)
void scene_CourseObjects_805dffbc(u64, u32, u32, u32);

// 0x0x80690034 (address_range)
void scene_Course_80690034(u32, int, int);

// 0x0x806900a0 (address_range)
void scene_Course_806900a0(int);

// 0x0x80690124 (address_range)
void scene_Course_80690124(int);

// 0x0x806901d8 (address_range)
void Course_validate_806901d8(int);

// 0x0x806903d4 (address_range)
void scene_Course_806903d4(void);

// 0x0x80690a74 (address_range)
void scene_Course_80690a74(int);

// 0x0x80690ab4 (address_range)
void scene_Course_80690ab4(int);

// 0x0x80690b64 (address_range)
void scene_Course_80690b64(int);

// 0x0x80690c14 (address_range)
void scene_Course_80690c14(int);

// 0x0x80690c58 (address_range)
void scene_Course_80690c58(int);

// 0x0x80690d90 (address_range)
void scene_Course_80690d90(int);

// 0x0x80690e1c (address_range)
void scene_Course_80690e1c(int, uint);

// 0x0x80691000 (address_range)
u32 scene_Course_80691000(int);

// 0x0x8069118c (address_range)
void scene_Course_8069118c(int);

// 0x0x80691230 (address_range)
void scene_Course_80691230(int);

// 0x0x8069128c (address_range)
void scene_Course_8069128c(u32);

// 0x0x80691300 (address_range)
int Course_validate_80691300(int, int);

// 0x0x8069136c (address_range)
void scene_Course_8069136c(void);

// 0x0x806913bc (address_range)
u32 scene_Course_806913bc(int, int);

// 0x0x80691584 (address_range)
void scene_Course_80691584(int, int);

// 0x0x806915f4 (address_range)
void scene_Course_806915f4(int, int);

// 0x0x806916a8 (address_range)
void scene_Course_806916a8(int, int, u32);

// 0x0x806917cc (address_range)
void scene_Course_806917cc(void);

// 0x0x806919bc (address_range)
u32 * scene_Course_806919bc(u32);

// 0x0x80691a0c (address_range)
void scene_Course_80691a0c(int);

// 0x0x80691a8c (address_range)
u32 scene_Course_80691a8c(int, int);

// 0x0x80691ca8 (address_range)
void scene_Course_80691ca8(int, int);

// 0x0x80691d24 (address_range)
void scene_Course_80691d24(int);

// 0x0x80691e1c (address_range)
u32 scene_Course_80691e1c(int, int);

// 0x0x80691f5c (address_range)
void scene_Course_80691f5c(int, int);

// 0x0x80691ff8 (address_range)
void scene_Course_80691ff8(u32);

// 0x0x80692000 (address_range)
void scene_Course_80692000(u32);

// 0x0x80692008 (address_range)
void Course_assertFail_80692008(void);

// 0x0x80692278 (address_range)
void scene_Course_80692278(int);

// 0x0x80692340 (address_range)
void scene_Course_80692340(int);

// 0x0x806923e4 (address_range)
void scene_Course_806923e4(void);

// 0x0x806928e0 (address_range)
void scene_Course_806928e0(int, u32, u32);

// 0x0x8069293c (address_range)
void Course_validate_8069293c(int);

// 0x0x806929d4 (address_range)
bool scene_Course_806929d4(int, int);

// 0x0x80692a74 (address_range)
void scene_Course_80692a74(int);

// 0x0x80692af0 (address_range)
void scene_Course_80692af0(int);

// 0x0x80692b54 (address_range)
void Course_assertFail_80692b54(void);

// 0x0x80692e24 (address_range)
void scene_Course_80692e24(void);

// 0x0x80692fb0 (address_range)
void scene_Course_80692fb0(void);

// 0x0x80693080 (address_range)
void Course_validate_80693080(int);

// 0x0x806931cc (address_range)
void Course_validate_806931cc(int);

// 0x0x80693248 (address_range)
void scene_Course_80693248(int);

// 0x0x806932e0 (address_range)
void Course_validate_806932e0(int);

// 0x0x8069335c (address_range)
void scene_Course_8069335c(int);

// 0x0x806933e8 (address_range)
void Course_validate_806933e8(int);

// 0x0x806935b0 (address_range)
void Course_validate_806935b0(u32);

// 0x0x80693750 (address_range)
int Course_validate_80693750(int, int);

// 0x0x80693790 (address_range)
u32 Course_validate_80693790(int);

// 0x0x80693814 (address_range)
int Course_validate_80693814(int, int);

// 0x0x806938a8 (address_range)
int Course_validate_806938a8(int, int);

// 0x0x80693940 (address_range)
u32 Course_validate_80693940(u32);

// 0x0x806939a4 (address_range)
void scene_Course_806939a4(int, u32, u32);

// 0x0x80693a80 (address_range)
u32 scene_Course_80693a80(int, int);

// 0x0x80693c74 (address_range)
void Course_validate_80693c74(int);

// 0x0x80693e54 (address_range)
void scene_Course_80693e54(int);

// 0x0x80693ef4 (address_range)
void scene_Course_80693ef4(int);

// 0x0x80693fc0 (address_range)
void scene_Course_80693fc0(int, u32);

// 0x0x80694078 (address_range)
void scene_Course_80694078(int);

// 0x0x806940c4 (address_range)
void scene_Course_806940c4(int);

// 0x0x80694170 (address_range)
void scene_Course_80694170(int);

// 0x0x80694270 (address_range)
void scene_Course_80694270(int);

// 0x0x8069441c (address_range)
void scene_Course_8069441c(int);

// 0x0x80694578 (address_range)
void scene_Course_80694578(void);

// 0x0x80694630 (address_range)
void scene_Course_80694630(void);

// 0x0x80694784 (address_range)
void scene_Course_80694784(u32);

// 0x0x80694804 (address_range)
u32 scene_Course_80694804(u32, int, int);

// 0x0x80694900 (address_range)
void scene_Course_80694900(int);

// 0x0x80694a4c (address_range)
void scene_Course_80694a4c(void);

// 0x0x80694b80 (address_range)
void scene_Course_80694b80(int);

// 0x0x80694c08 (address_range)
void scene_Course_80694c08(int);

// 0x0x80694c4c (address_range)
void scene_Course_80694c4c(int);

// 0x0x80694c8c (address_range)
u32 scene_Course_80694c8c(int);

// 0x0x80694ca8 (address_range)
u32 Course_validate_80694ca8(int);

// 0x0x80694d64 (address_range)
void scene_Course_80694d64(void);

// 0x0x80694dd8 (address_range)
void scene_Course_80694dd8(void);

// 0x0x8069500c (address_range)
void Course_assertFail_8069500c(void);

// 0x0x806951e0 (address_range)
int Course_validate_806951e0(int, int);

// 0x0x80695278 (address_range)
u32 Course_validate_80695278(u32);

// 0x0x80695324 (address_range)
void scene_Course_80695324(int);

// 0x0x80695368 (address_range)
void scene_Course_80695368(int);

// 0x0x80695400 (address_range)
void Course_validate_80695400(u32);

// 0x0x806955a0 (address_range)
uint scene_Course_806955a0(int);

// 0x0x80695894 (address_range)
void scene_Course_80695894(int);

// 0x0x806959ac (address_range)
void scene_Course_806959ac(int);

// 0x0x806959ec (address_range)
void scene_Course_806959ec(int);

// 0x0x80695a2c (address_range)
u32 scene_Course_80695a2c(int, int);

// 0x0x80695bcc (address_range)
void scene_Course_80695bcc(void);

// 0x0x80695de4 (address_range)
void Course_validate_80695de4(int);

// 0x0x80695f1c (address_range)
void scene_Course_80695f1c(void);

// 0x0x80696214 (address_range)
void Course_assertFail_80696214(void);

// 0x0x80696510 (address_range)
void scene_Course_80696510(void);

// 0x0x8069699c (address_range)
void scene_Course_8069699c(u32);

// 0x0x806969e4 (address_range)
void Course_assertFail_806969e4(void);

// 0x0x80696bdc (address_range)
void Course_validate_80696bdc(int);

// 0x0x80696c1c (address_range)
void scene_Course_80696c1c(int);

// 0x0x80696d50 (address_range)
void scene_Course_80696d50(int);

// 0x0x80696f4c (address_range)
void scene_Course_80696f4c(int);

// 0x0x80697054 (address_range)
void scene_Course_80697054(int);

// 0x0x806972a4 (address_range)
void scene_Course_806972a4(u32);

// 0x0x8069730c (address_range)
void scene_Course_8069730c(int);

// 0x0x8069739c (address_range)
void scene_Course_8069739c(int);

// 0x0x80697578 (address_range)
void scene_Course_80697578(int);

// 0x0x80697744 (address_range)
void scene_Course_80697744(int);

// 0x0x8069780c (address_range)
u32 scene_Course_8069780c(int);

// 0x0x8069796c (address_range)
void scene_Course_8069796c(int);

// 0x0x806979c8 (address_range)
u32 scene_Course_806979c8(u32, int, int);

// 0x0x80697ae4 (address_range)
void scene_Course_80697ae4(int);

// 0x0x80697ca8 (address_range)
u32 scene_Course_80697ca8(int);

// 0x0x80697ce0 (address_range)
void scene_Course_80697ce0(int);

// 0x0x80697db4 (address_range)
u32 Course_validate_80697db4(int);

// 0x0x80697e70 (address_range)
void Course_assertFail_80697e70(void);

// 0x0x80697ee4 (address_range)
void Course_validate_80697ee4(int);

// 0x0x80697f60 (address_range)
double scene_Course_80697f60(void);

// 0x0x80697f6c (address_range)
double scene_Course_80697f6c(void);

// 0x0x80697f78 (address_range)
double scene_Course_80697f78(void);

// 0x0x80697f84 (address_range)
double scene_Course_80697f84(void);

// 0x0x80697f90 (address_range)
u32 scene_Course_80697f90(int, int);

// 0x0x8069805c (address_range)
void scene_Course_8069805c(int);

// 0x0x80698124 (address_range)
void scene_Course_80698124(int);

// 0x0x806981c4 (address_range)
void scene_Course_806981c4(int);

// 0x0x80698250 (address_range)
u32 scene_Course_80698250(u32, int, int);

// 0x0x80698330 (address_range)
void scene_Course_80698330(int);

// 0x0x806983ac (address_range)
void scene_Course_806983ac(u32);

// 0x0x8069842c (address_range)
void scene_Course_8069842c(int);

// 0x0x806984b4 (address_range)
void scene_Course_806984b4(int);

// 0x0x806984f8 (address_range)
void scene_Course_806984f8(int);

// 0x0x80698538 (address_range)
void scene_Course_80698538(int);

// 0x0x80698554 (address_range)
void scene_Course_80698554(int);

// 0x0x80698594 (address_range)
void scene_Course_80698594(void);

// 0x0x80698e5c (address_range)
void scene_Course_80698e5c(void);

// 0x0x806991ec (address_range)
void scene_Course_806991ec(void);

// 0x0x806992cc (address_range)
void scene_Course_806992cc(void);

// 0x0x806993f0 (address_range)
void scene_Course_806993f0(void);

// 0x0x80699500 (address_range)
void scene_Course_80699500(void);

// 0x0x8069952c (address_range)
void scene_Course_8069952c(int);

// 0x0x8069953c (address_range)
void scene_Course_8069953c(int);

// 0x0x8069957c (address_range)
int scene_Course_8069957c(int, int);

// 0x0x8069961c (address_range)
void scene_Course_8069961c(void);

// 0x0x80699a1c (address_range)
void scene_Course_80699a1c(u64, u64, u64, u32);

// 0x0x80699a40 (address_range)
void scene_Course_80699a40(u64, u64, u64, int, int);

// 0x0x80699a70 (address_range)
void scene_Course_80699a70(void);

// 0x0x80699bf0 (address_range)
void Course_assertFail_80699bf0(void);

// 0x0x80699e50 (address_range)
void scene_Course_80699e50(int, int);

// 0x0x80699eb8 (address_range)
void Course_assertFail_80699eb8(void);

// 0x0x80699f84 (address_range)
void scene_Course_80699f84(void);

// 0x0x8069a124 (address_range)
void scene_Course_8069a124(int, u32, u32);

// 0x0x8069a36c (address_range)
void scene_Course_8069a36c(void);

// 0x0x8069a6a8 (address_range)
void scene_Course_8069a6a8(int);

// 0x0x8069a734 (address_range)
void scene_Course_8069a734(int, u32, u32, int, u32, u32, u32);

// 0x0x8069a7b8 (address_range)
void Course_assertFail_8069a7b8(void);

// 0x0x8069a96c (address_range)
void scene_Course_8069a96c(int);

// 0x0x8069aa34 (address_range)
void scene_Course_8069aa34(int, u32);

// 0x0x8069aac4 (address_range)
void scene_Course_8069aac4(int, u32);

// 0x0x8069ab34 (address_range)
void scene_Course_8069ab34(void);

// 0x0x8069b6e0 (address_range)
void Course_validate_8069b6e0(int);

// 0x0x8069b80c (address_range)
void scene_Course_8069b80c(int);

// 0x0x8069b8f8 (address_range)
void scene_Course_8069b8f8(void);

// 0x0x8069bb38 (address_range)
void scene_Course_8069bb38(void);

// 0x0x8069bc4c (address_range)
void scene_Course_8069bc4c(int, u32);

// 0x0x8069bd30 (address_range)
void scene_Course_8069bd30(int, int, int, u32);

// 0x0x8069be5c (address_range)
uint scene_Course_8069be5c(int, uint);

// 0x0x8069bf50 (address_range)
void scene_Course_8069bf50(void);

// 0x0x8069c1d8 (address_range)
void scene_Course_8069c1d8(int);

// 0x0x8069c23c (address_range)
void scene_Course_8069c23c(int);

// 0x0x8069c630 (address_range)
void Course_validate_8069c630(int);

// 0x0x8069c6ac (address_range)
void scene_Course_8069c6ac(int);

// 0x0x8069c744 (address_range)
void scene_Course_8069c744(void);

// 0x0x8069cbb0 (address_range)
void scene_Course_8069cbb0(void);

// 0x0x8069d088 (address_range)
void scene_Course_8069d088(int, u32, u32);

// 0x0x8069d0e4 (address_range)
void scene_Course_8069d0e4(int, uint);

// 0x0x8069d140 (address_range)
void Course_validate_8069d140(int);

// 0x0x8069d1bc (address_range)
void scene_Course_8069d1bc(int);

// 0x0x8069d260 (address_range)
void scene_Course_8069d260(uint);

// 0x0x8069d3dc (address_range)
void scene_Course_8069d3dc(void);

// 0x0x8069d720 (address_range)
void scene_Course_8069d720(void);

// 0x0x8069db8c (address_range)
void scene_Course_8069db8c(void);

// 0x0x8069dc4c (address_range)
void scene_Course_8069dc4c(void);

// 0x0x8069dfbc (address_range)
u32 scene_Course_8069dfbc(u32, u32, char);

// 0x0x8069e024 (address_range)
void Course_validate_8069e024(u32, u32, uint, byte);

// 0x0x8069e0dc (address_range)
void scene_Course_8069e0dc(void);

// 0x0x8069e570 (address_range)
void scene_Course_8069e570(void);

// 0x0x8069e734 (address_range)
void scene_Course_8069e734(void);

// 0x0x8069e824 (address_range)
void scene_Course_8069e824(void);

// 0x0x8069f014 (address_range)
void scene_Course_8069f014(char, char, char);

// 0x0x8069f078 (address_range)
void scene_Course_8069f078(void);

// 0x0x8069f164 (address_range)
void scene_Course_8069f164(void);

// 0x0x8069f250 (address_range)
void Course_validate_8069f250(double, int);

// 0x0x8069f2b0 (address_range)
void scene_Course_8069f2b0(void);

// 0x0x8069f414 (address_range)
void Course_validate_8069f414(u32, float);

// 0x0x8069f490 (address_range)
void Course_validate_8069f490(double, int);

// 0x0x8069f504 (address_range)
void Course_validate_8069f504(double);

// 0x0x8069f588 (address_range)
void scene_Course_8069f588(int);

// 0x0x8069f5f0 (address_range)
void Course_assertFail_8069f5f0(void);

// 0x0x8069f870 (address_range)
void scene_Course_8069f870(int);

// 0x0x8069f918 (address_range)
void scene_Course_8069f918(int);

// 0x0x8069f990 (address_range)
void scene_Course_8069f990(int);

// 0x0x8069f9bc (address_range)
u32 scene_Course_8069f9bc(int);

// 0x0x8069fbac (address_range)
void scene_Course_8069fbac(int);

// 0x0x8069fc10 (address_range)
void scene_Course_8069fc10(int, u32);

// 0x0x8069fc18 (address_range)
void scene_Course_8069fc18(int);

// 0x0x8069fc90 (address_range)
u32 Course_validate_8069fc90(u32);

// 0x0x8069fdbc (address_range)
int Course_validate_8069fdbc(void);

// 0x0x8069fe54 (address_range)
void Course_assertFail_8069fe54(void);

// 0x0x8069ff08 (address_range)
void Course_assertFail_8069ff08(void);

// 0x0x8069ff74 (address_range)
u32 * Course_validate_8069ff74(u32, int);

// 0x0x806a0018 (address_range)
void Course_assertFail_806a0018(void);

// 0x0x806a0360 (address_range)
void scene_Course_806a0360(int, int);

// 0x0x806a0514 (address_range)
uint scene_Course_806a0514(uint, uint);

// 0x0x806a0588 (address_range)
void Course_assertFail_806a0588(void);

// 0x0x806a09c0 (address_range)
uint scene_Course_806a09c0(int, int, uint);

// 0x0x806a0a6c (address_range)
int scene_Course_806a0a6c(int, int, int, int, int, int);

// 0x0x806a0f10 (address_range)
uint scene_Course_806a0f10(int, int, int, uint, int);

// 0x0x806a0ffc (address_range)
void scene_Course_806a0ffc(int);

// 0x0x806a1014 (address_range)
void scene_Course_806a1014(int);

// 0x0x806a1020 (address_range)
void scene_Course_806a1020(int);

// 0x0x806a102c (address_range)
void scene_Course_806a102c(int);

// 0x0x806a10d4 (address_range)
void scene_Course_806a10d4(void);

// 0x0x806a1140 (address_range)
void scene_Course_806a1140(int);

// 0x0x806a13a0 (address_range)
void Course_assertFail_806a13a0(void);

// 0x0x806a14d8 (address_range)
u32 Course_validate_806a14d8(u32);

// 0x0x806a1538 (address_range)
void scene_Course_806a1538(int);

// 0x0x806a1640 (address_range)
void scene_Course_806a1640(int);

// 0x0x806a1738 (address_range)
void scene_Course_806a1738(void);

// 0x0x806a17b0 (address_range)
void scene_Course_806a17b0(u32);

// 0x0x806a18f8 (address_range)
void scene_Course_806a18f8(int);

// 0x0x806a1990 (address_range)
void scene_Course_806a1990(void);

// 0x0x806a1c50 (address_range)
void scene_Course_806a1c50(int);

// 0x0x806a1d28 (address_range)
void scene_Course_806a1d28(int);

// 0x0x806a1e70 (address_range)
void scene_Course_806a1e70(int);

// 0x0x806a1f80 (address_range)
void scene_Course_806a1f80(int, int, u32);

// 0x0x806a1fbc (address_range)
void scene_Course_806a1fbc(int, int);

// 0x0x806a2034 (address_range)
void scene_Course_806a2034(int);

// 0x0x806a20f0 (address_range)
u32 scene_Course_806a20f0(int, u32);

// 0x0x806a2110 (address_range)
void scene_Course_806a2110(int, int);

// 0x0x806a2120 (address_range)
void scene_Course_806a2120(void);

// 0x0x806a2980 (address_range)
void scene_Course_806a2980(void);

// 0x0x806a29b4 (address_range)
uint scene_Course_806a29b4(uint);

// 0x0x806a2bfc (address_range)
u32 scene_Course_806a2bfc(int);

// 0x0x806a2d24 (address_range)
u32 scene_Course_806a2d24(void);

// 0x0x806a2d58 (address_range)
u32 scene_Course_806a2d58(void);

// 0x0x806a2dcc (address_range)
uint scene_Course_806a2dcc(int);

// 0x0x806a2df4 (address_range)
void scene_Course_806a2df4(u32);

// 0x0x806a2e90 (address_range)
void scene_Course_806a2e90(int);

// 0x0x806a2ea4 (address_range)
void scene_Course_806a2ea4(uint);

// 0x0x806a2ecc (address_range)
void scene_Course_806a2ecc(uint, u32);

// 0x0x806a2ef8 (address_range)
void scene_Course_806a2ef8(u32);

// 0x0x806a2f28 (address_range)
void scene_Course_806a2f28(int, u32);

// 0x0x806a2f48 (address_range)
void scene_Course_806a2f48(int, u32, u32);

// 0x0x806a2fac (address_range)
uint scene_Course_806a2fac(u32, uint);

// 0x0x806a30bc (address_range)
void scene_Course_806a30bc(u32);

// 0x0x806a329c (address_range)
int * scene_Course_806a329c(int, int);

// 0x0x806a33bc (address_range)
int Course_validate_806a33bc(int, int);

// 0x0x806a33fc (address_range)
int Course_validate_806a33fc(int, int);

// 0x0x806a343c (address_range)
void Course_assertFail_806a343c(void);

// 0x0x806a3594 (address_range)
void scene_Course_806a3594(void);

// 0x0x806a3670 (address_range)
int scene_Course_806a3670(int, float);

// 0x0x806a376c (address_range)
void Course_assertFail_806a376c(void);

// 0x0x806a3a04 (address_range)
void Course_validate_806a3a04(u32, int, int, u32, uint, int, int, uint, uint, uint);

// 0x0x806a4b00 (address_range)
void Course_validate_806a4b00(u32, int, int, u32);

// 0x0x806a5824 (address_range)
void scene_Course_806a5824(void);

// 0x0x806a5ec4 (address_range)
void scene_Course_806a5ec4(void);

// 0x0x806a6540 (address_range)
void scene_Course_806a6540(void);

// 0x0x806a6b54 (address_range)
void scene_Course_806a6b54(void);

// 0x0x806a714c (address_range)
void scene_Course_806a714c(int, u32);

// 0x0x806a71f4 (address_range)
void scene_Course_806a71f4(void);

// 0x0x806a72cc (address_range)
void Course_assertFail_806a72cc(void);

// 0x0x806a7428 (address_range)
void scene_Course_806a7428(void);

// 0x0x806a7834 (address_range)
u32 scene_Course_806a7834(int);

// 0x0x806a7a7c (address_range)
void scene_Course_806a7a7c(int, u32);

// 0x0x806a7b00 (address_range)
void scene_Course_806a7b00(double, int, u32, u32);

// 0x0x806a7ca0 (address_range)
void Course_assertFail_806a7ca0(void);

// 0x0x806a7cec (address_range)
void Course_assertFail_806a7cec(void);

// 0x0x806a7e64 (address_range)
void Course_assertFail_806a7e64(void);

// 0x0x806a7ec4 (address_range)
void Course_assertFail_806a7ec4(void);

// 0x0x806a7f18 (address_range)
void Course_assertFail_806a7f18(void);

// 0x0x806a7f7c (address_range)
void scene_Course_806a7f7c(void);

// 0x0x806a8044 (address_range)
u32 * Course_validate_806a8044(u32, int);

// 0x0x806a80a0 (address_range)
void scene_Course_806a80a0(void);

// 0x0x806a8218 (address_range)
void scene_Course_806a8218(void);

// 0x0x806a83e0 (address_range)
void scene_Course_806a83e0(void);

// 0x0x806a8558 (address_range)
void scene_Course_806a8558(void);

// 0x0x806a8720 (address_range)
void scene_Course_806a8720(void);

// 0x0x806a8898 (address_range)
void scene_Course_806a8898(void);

// 0x0x806a8b94 (address_range)
void scene_Course_806a8b94(void);

// 0x0x806a8d0c (address_range)
void scene_Course_806a8d0c(void);

// 0x0x806a9008 (address_range)
void scene_Course_806a9008(void);

// 0x0x806a919c (address_range)
void scene_Course_806a919c(void);

// 0x0x806a9330 (address_range)
void scene_Course_806a9330(void);

// 0x0x806a94c4 (address_range)
void scene_Course_806a94c4(void);

// 0x0x806a9658 (address_range)
void scene_Course_806a9658(void);

// 0x0x806a97e4 (address_range)
void scene_Course_806a97e4(void);

// 0x0x806a9970 (address_range)
void scene_Course_806a9970(void);

// 0x0x806a9afc (address_range)
void scene_Course_806a9afc(void);

// 0x0x806a9c88 (address_range)
void scene_Course_806a9c88(void);

// 0x0x806a9e30 (address_range)
void scene_Course_806a9e30(void);

// 0x0x806a9fd8 (address_range)
void scene_Course_806a9fd8(void);

// 0x0x806aa180 (address_range)
void scene_Course_806aa180(void);

// 0x0x806aa328 (address_range)
void Course_assertFail_806aa328(void);

// 0x0x806aa3ac (address_range)
u32 * Course_validate_806aa3ac(u32, int);

// 0x0x806aa408 (address_range)
void scene_Course_806aa408(void);

// 0x0x806aa4ec (address_range)
void Course_assertFail_806aa4ec(void);

// 0x0x806aa6ac (address_range)
void Course_assertFail_806aa6ac(void);

// 0x0x806aa86c (address_range)
void Course_assertFail_806aa86c(void);

// 0x0x806aa9e4 (address_range)
void Course_assertFail_806aa9e4(void);

// 0x0x806aab5c (address_range)
void scene_Course_806aab5c(void);

// 0x0x806aad38 (address_range)
void scene_Course_806aad38(void);

// 0x0x806aaf14 (address_range)
void scene_Course_806aaf14(void);

// 0x0x806ab0a8 (address_range)
void scene_Course_806ab0a8(void);

// 0x0x806ab23c (address_range)
void Course_assertFail_806ab23c(void);

// 0x0x806ab414 (address_range)
void Course_assertFail_806ab414(void);

// 0x0x806ab5ec (address_range)
void Course_assertFail_806ab5ec(void);

// 0x0x806ab77c (address_range)
void Course_assertFail_806ab77c(void);

// 0x0x806ab90c (address_range)
void scene_Course_806ab90c(void);

// 0x0x806abb00 (address_range)
void scene_Course_806abb00(void);

// 0x0x806abcf4 (address_range)
void scene_Course_806abcf4(void);

// 0x0x806abea0 (address_range)
void scene_Course_806abea0(void);

// 0x0x806ac04c (address_range)
u32 scene_Course_806ac04c(int);

// 0x0x806ac054 (address_range)
void scene_Course_806ac054(int);

// 0x0x806ac084 (address_range)
void scene_Course_806ac084(int, uint);

// 0x0x806ac35c (address_range)
void scene_Course_806ac35c(void);

// 0x0x806ac4a4 (address_range)
void scene_Course_806ac4a4(int);

// 0x0x806ac57c (address_range)
void Course_assertFail_806ac57c(void);

// 0x0x806ac6f4 (address_range)
int Course_validate_806ac6f4(int, int);

// 0x0x806ac734 (address_range)
int Course_validate_806ac734(int, int);

// 0x0x806ac798 (address_range)
void Course_validate_806ac798(int, int);

// 0x0x806ac818 (address_range)
void scene_Course_806ac818(void);

// 0x0x806ac9a4 (address_range)
void Course_validate_806ac9a4(int);

// 0x0x806ace28 (address_range)
int Course_validate_806ace28(int, int);

// 0x0x806ace68 (address_range)
void scene_Course_806ace68(void);

// 0x0x806ad4bc (address_range)
void Course_validate_806ad4bc(int);

// 0x0x806add98 (address_range)
void scene_Course_806add98(void);

// 0x0x806aec6c (address_range)
void Course_validate_806aec6c(int);

// 0x0x806aee84 (address_range)
void scene_Course_806aee84(void);

// 0x0x806af664 (address_range)
void scene_Course_806af664(u32, u32);

// 0x0x806af6a8 (address_range)
void scene_Course_806af6a8(int, u32);

// 0x0x806af6f8 (address_range)
void scene_Course_806af6f8(void);

// 0x0x806afd24 (address_range)
void scene_Course_806afd24(void);

// 0x0x806b00e4 (address_range)
u32 scene_MapObj_806b00e4(int, u16);

// 0x0x806b01cc (address_range)
void scene_MapObj_806b01cc(void);

// 0x0x806b03a8 (address_range)
u32 scene_MapObj_806b03a8(u64, int, u16, int, int);

// 0x0x806b04cc (address_range)
void scene_MapObj_806b04cc(void);

// 0x0x806b0708 (address_range)
void scene_MapObj_806b0708(int);

// 0x0x806b0770 (address_range)
void scene_MapObj_806b0770(int);

// 0x0x806b07d8 (address_range)
void scene_MapObj_806b07d8(int);

// 0x0x806b09a0 (address_range)
void MapObj_validate_806b09a0(u32);

// 0x0x806b0b70 (address_range)
void scene_MapObj_806b0b70(void);

// 0x0x806b1364 (address_range)
void MapObj_validate_806b1364(u32);

// 0x0x806b14f8 (address_range)
void scene_MapObj_806b14f8(void);

// 0x0x806b1658 (address_range)
void scene_MapObj_806b1658(void);

// 0x0x806b17b4 (address_range)
void scene_MapObj_806b17b4(void);

// 0x0x806b296c (address_range)
void scene_MapObj_806b296c(void);

// 0x0x806b30b4 (address_range)
void MapObj_validate_806b30b4(u32);

// 0x0x806b3238 (address_range)
void scene_MapObj_806b3238(int);

// 0x0x806b3260 (address_range)
void MapObj_validate_806b3260(int, u32);

// 0x0x806b3348 (address_range)
u32 MapObj_validate_806b3348(int);

// 0x0x806b33f8 (address_range)
void scene_MapObj_806b33f8(int);

// 0x0x806b3554 (address_range)
void scene_MapObj_806b3554(int);

// 0x0x806b38b0 (address_range)
void scene_MapObj_806b38b0(void);

// 0x0x806b3d10 (address_range)
void MapObj_assertFail_806b3d10(void);

// 0x0x806b4314 (address_range)
void scene_MapObj_806b4314(void);

// 0x0x806b4b50 (address_range)
void scene_MapObj_806b4b50(void);

// 0x0x806b5030 (address_range)
void scene_MapObj_806b5030(void);

// 0x0x806b5b94 (address_range)
void scene_MapObj_806b5b94(void);

// 0x0x806b5d84 (address_range)
void scene_MapObj_806b5d84(int);

// 0x0x806b5e30 (address_range)
u32 scene_MapObj_806b5e30(u32, uint);

// 0x0x806b5ed8 (address_range)
void scene_MapObj_806b5ed8(void);

// 0x0x806b5f78 (address_range)
void scene_MapObj_806b5f78(double, int);

// 0x0x806b5f8c (address_range)
void MapObj_validate_806b5f8c(int, u32);

// 0x0x806b619c (address_range)
void MapObj_validate_806b619c(int, int);

// 0x0x806b63a8 (address_range)
void MapObj_validate_806b63a8(int);

// 0x0x806b64b0 (address_range)
void MapObj_validate_806b64b0(int);

// 0x0x806b65b8 (address_range)
void scene_MapObj_806b65b8(void);

// 0x0x806b6af4 (address_range)
void MapObj_validate_806b6af4(int);

// 0x0x806b6b44 (address_range)
void scene_MapObj_806b6b44(int);

// 0x0x806b6d5c (address_range)
void scene_MapObj_806b6d5c(void);

// 0x0x806b6f2c (address_range)
void scene_MapObj_806b6f2c(int, u32, u32);

// 0x0x806b7008 (address_range)
void scene_MapObj_806b7008(int);

// 0x0x806b70a0 (address_range)
void scene_MapObj_806b70a0(void);

// 0x0x806b7344 (address_range)
u32 scene_MapObj_806b7344(int);

// 0x0x806b7474 (address_range)
u32 scene_MapObj_806b7474(int);

// 0x0x806b75c0 (address_range)
u32 scene_MapObj_806b75c0(int);

// 0x0x806b7838 (address_range)
void MapObj_assertFail_806b7838(void);

// 0x0x806b7dc4 (address_range)
void scene_MapObj_806b7dc4(int);

// 0x0x806b7dd8 (address_range)
void scene_MapObj_806b7dd8(int, int);

// 0x0x806b7f80 (address_range)
void scene_MapObj_806b7f80(int, int);

// 0x0x806b80e8 (address_range)
bool scene_MapObj_806b80e8(int, int);

// 0x0x806b816c (address_range)
void scene_MapObj_806b816c(int);

// 0x0x806b81a8 (address_range)
void scene_MapObj_806b81a8(u64, int);

// 0x0x806b81f4 (address_range)
void scene_MapObj_806b81f4(void);

// 0x0x806b841c (address_range)
u32 scene_MapObj_806b841c(void);

// 0x0x806b842c (address_range)
bool scene_MapObj_806b842c(int);

// 0x0x806b84b8 (address_range)
bool scene_MapObj_806b84b8(int);

// 0x0x806b8544 (address_range)
bool scene_MapObj_806b8544(int);

// 0x0x806b85ec (address_range)
bool scene_MapObj_806b85ec(int);

// 0x0x806b8694 (address_range)
byte scene_MapObj_806b8694(int);

// 0x0x806b86e4 (address_range)
byte scene_MapObj_806b86e4(int);

// 0x0x806b8740 (address_range)
u32 scene_MapObj_806b8740(u32);

// 0x0x806b87c8 (address_range)
void scene_MapObj_806b87c8(u32, byte, uint);

// 0x0x806b89cc (address_range)
void MapObj_validate_806b89cc(u32, int, float, u32);

// 0x0x806b8a98 (address_range)
void scene_MapObj_806b8a98(void);

// 0x0x806b8e10 (address_range)
u32 MapObj_validate_806b8e10(int);

// 0x0x806b8e5c (address_range)
u32 MapObj_validate_806b8e5c(int);

// 0x0x806b8ea8 (address_range)
u32 MapObj_validate_806b8ea8(int);

// 0x0x806b8fac (address_range)
void scene_MapObj_806b8fac(void);

// 0x0x806b9398 (address_range)
void scene_MapObj_806b9398(int);

// 0x0x806b94a8 (address_range)
void scene_MapObj_806b94a8(int);

// 0x0x806b9598 (address_range)
int MapObj_validate_806b9598(int, int);

// 0x0x806b964c (address_range)
void scene_MapObj_806b964c(void);

// 0x0x806b9928 (address_range)
void MapObj_validate_806b9928(int);

// 0x0x806b9c28 (address_range)
int MapObj_validate_806b9c28(int, int);

// 0x0x806b9c68 (address_range)
void scene_MapObj_806b9c68(int);

// 0x0x806b9ce4 (address_range)
void scene_MapObj_806b9ce4(int);

// 0x0x806b9d40 (address_range)
void scene_MapObj_806b9d40(void);

// 0x0x806b9f6c (address_range)
void scene_MapObj_806b9f6c(int);

// 0x0x806ba160 (address_range)
void MapObj_validate_806ba160(int);

// 0x0x806ba348 (address_range)
void MapObj_validate_806ba348(int);

// 0x0x806bacc0 (address_range)
void MapObj_validate_806bacc0(int);

// 0x0x806bada0 (address_range)
void MapObj_assertFail_806bada0(void);

// 0x0x806baf84 (address_range)
void scene_MapObj_806baf84(int);

// 0x0x806bb0d8 (address_range)
void MapObj_validate_806bb0d8(int, u32, u32, u32);

// 0x0x806bb178 (address_range)
void scene_MapObj_806bb178(void);

// 0x0x806bb4d0 (address_range)
void scene_MapObj_806bb4d0(void);

// 0x0x806bba20 (address_range)
void scene_MapObj_806bba20(int, int);

// 0x0x806bbbfc (address_range)
void scene_MapObj_806bbbfc(void);

// 0x0x806bbe84 (address_range)
void scene_MapObj_806bbe84(void);

// 0x0x806bc028 (address_range)
void MapObj_validate_806bc028(int, u32);

// 0x0x806bc168 (address_range)
void MapObj_validate_806bc168(int, u32);

// 0x0x806bc2ec (address_range)
void scene_MapObj_806bc2ec(void);

// 0x0x806bc4a0 (address_range)
void MapObj_validate_806bc4a0(int, u32);

// 0x0x806bc51c (address_range)
void MapObj_validate_806bc51c(int, u32);

// 0x0x806bc598 (address_range)
void scene_MapObj_806bc598(void);

// 0x0x806bc74c (address_range)
void scene_MapObj_806bc74c(void);

// 0x0x806bca98 (address_range)
void MapObj_assertFail_806bca98(void);

// 0x0x806bcbc8 (address_range)
void MapObj_assertFail_806bcbc8(void);

// 0x0x806bcd28 (address_range)
void scene_MapObj_806bcd28(void);

// 0x0x806bcfcc (address_range)
void scene_MapObj_806bcfcc(void);

// 0x0x806bd644 (address_range)
void MapObj_validate_806bd644(int, u32);

// 0x0x806bd924 (address_range)
void MapObj_validate_806bd924(int, u32);

// 0x0x806bdc44 (address_range)
void MapObj_validate_806bdc44(int, u32);

// 0x0x806bdcc8 (address_range)
void MapObj_validate_806bdcc8(int, u32);

// 0x0x806bdd4c (address_range)
void MapObj_validate_806bdd4c(int, u32);

// 0x0x806bddd0 (address_range)
void scene_MapObj_806bddd0(void);

// 0x0x806be034 (address_range)
void scene_MapObj_806be034(void);

// 0x0x806be470 (address_range)
void scene_MapObj_806be470(void);

// 0x0x806be5c8 (address_range)
u32 scene_MapObj_806be5c8(int);

// 0x0x806be678 (address_range)
u32 scene_MapObj_806be678(int);

// 0x0x806be728 (address_range)
void MapObj_validate_806be728(int, u32);

// 0x0x806be774 (address_range)
void scene_MapObj_806be774(int);

// 0x0x806be80c (address_range)
void scene_MapObj_806be80c(void);

// 0x0x806becc8 (address_range)
u32 MapObj_validate_806becc8(int);

// 0x0x806bedac (address_range)
void scene_MapObj_806bedac(int, u32);

// 0x0x806bef78 (address_range)
void scene_MapObj_806bef78(void);

// 0x0x806bf620 (address_range)
void scene_MapObj_806bf620(void);

// 0x0x806bf78c (address_range)
void scene_MapObj_806bf78c(int);

// 0x0x806bf7d4 (address_range)
u32 * scene_MapObj_806bf7d4(u32, uint, int, u32, uint);

// 0x0x806bf888 (address_range)
u32 * scene_MapObj_806bf888(u32, int, int, u32, u32, u32);

// 0x0x806bf914 (address_range)
u32 * scene_MapObj_806bf914(u32, uint, u32, u32, uint, u32, u32);

// 0x0x806bf9d0 (address_range)
u32 * scene_MapObj_806bf9d0(u32, uint, u32, u32, uint);

// 0x0x806bfac4 (address_range)
u32 * scene_MapObj_806bfac4(u32, int, u32, u32, u32, u32, u32);

// 0x0x806bfb50 (address_range)
void MapObj_assertFail_806bfb50(void);

// 0x0x806bfdc8 (address_range)
void scene_MapObj_806bfdc8(int, u32, u32, u32, u32);

// 0x0x806bfde0 (address_range)
void scene_MapObj_806bfde0(int, u32, u32, u32);

// 0x0x806bfdf8 (address_range)
void scene_MapObj_806bfdf8(void);

// 0x0x806bfef0 (address_range)
void scene_MapObj_806bfef0(int, uint);

// 0x0x806c01d0 (address_range)
void MapObj_validate_806c01d0(int);

// 0x0x806c02ec (address_range)
void MapObj_validate_806c02ec(int, u32);

// 0x0x806c0368 (address_range)
int MapObj_validate_806c0368(int, int);

// 0x0x806c03d0 (address_range)
void MapObj_validate_806c03d0(float, float);

// 0x0x806c04c0 (address_range)
void MapObj_validate_806c04c0(float, int);

// 0x0x806c05b0 (address_range)
void MapObj_validate_806c05b0(float, int);

// 0x0x806c0820 (address_range)
void MapObj_validate_806c0820(u32);

// 0x0x806c08f8 (address_range)
void MapObj_validate_806c08f8(int);

// 0x0x806c09d0 (address_range)
void MapObj_validate_806c09d0(int);

// 0x0x806c0aa8 (address_range)
void MapObj_validate_806c0aa8(int);

// 0x0x806c0b80 (address_range)
void MapObj_validate_806c0b80(int);

// 0x0x806c0c58 (address_range)
void MapObj_validate_806c0c58(u32);

// 0x0x806c0d30 (address_range)
void scene_MapObj_806c0d30(void);

// 0x0x806c1038 (address_range)
void scene_MapObj_806c1038(void);

// 0x0x806c1340 (address_range)
void scene_MapObj_806c1340(void);

// 0x0x806c1648 (address_range)
void scene_MapObj_806c1648(void);

// 0x0x806c1950 (address_range)
void scene_MapObj_806c1950(void);

// 0x0x806c1c58 (address_range)
void scene_MapObj_806c1c58(void);

// 0x0x806c1f60 (address_range)
void scene_MapObj_806c1f60(void);

// 0x0x806c20c0 (address_range)
void MapObj_validate_806c20c0(u64, u64, u64, u64, u64, u64, u64, u64, u32, u32, u32, u32, u32, u32, u32, u32);

// 0x0x806c22d8 (address_range)
void scene_MapObj_806c22d8(void);

// 0x0x806c23b4 (address_range)
void scene_MapObj_806c23b4(void);

// 0x0x806c264c (address_range)
void scene_MapObj_806c264c(void);

// 0x0x806c2794 (address_range)
void MapObj_validate_806c2794(double);

// 0x0x806c290c (address_range)
void MapObj_validate_806c290c(double);

// 0x0x806c2a84 (address_range)
void MapObj_validate_806c2a84(double);

// 0x0x806c2bfc (address_range)
void scene_MapObj_806c2bfc(void);

// 0x0x806c2e44 (address_range)
void scene_MapObj_806c2e44(void);

// 0x0x806c2eb0 (address_range)
void scene_MapObj_806c2eb0(int, int, char, int);

// 0x0x806c2fec (address_range)
void scene_MapObj_806c2fec(u32);

// 0x0x806c3110 (address_range)
void scene_MapObj_806c3110(void);

// 0x0x806c3234 (address_range)
double MapObj_validate_806c3234(double, double);

// 0x0x806c3288 (address_range)
u32 MapObj_validate_806c3288(u32);

// 0x0x806c3388 (address_range)
int MapObj_validate_806c3388(void);

// 0x0x806c3484 (address_range)
void MapObj_assertFail_806c3484(void);

// 0x0x806c3550 (address_range)
void MapObj_assertFail_806c3550(void);

// 0x0x806c3624 (address_range)
void MapObj_assertFail_806c3624(void);

// 0x0x806c3924 (address_range)
int MapObj_validate_806c3924(int, int);

// 0x0x806c3964 (address_range)
u32 MapObj_validate_806c3964(int);

// 0x0x806c3a24 (address_range)
void scene_MapObj_806c3a24(int);

// 0x0x806c3aa8 (address_range)
void scene_MapObj_806c3aa8(void);

// 0x0x806c3ffc (address_range)
void scene_MapObj_806c3ffc(void);

// 0x0x806c4364 (address_range)
void scene_MapObj_806c4364(int, float, float);

// 0x0x806c43bc (address_range)
u32 MapObj_validate_806c43bc(u32);

// 0x0x806c44e8 (address_range)
int MapObj_validate_806c44e8(void);

// 0x0x806c4618 (address_range)
void MapObj_assertFail_806c4618(void);

// 0x0x806c46cc (address_range)
void MapObj_assertFail_806c46cc(void);

// 0x0x806c47d0 (address_range)
u32 * MapObj_validate_806c47d0(u32, int);

// 0x0x806c4874 (address_range)
void MapObj_assertFail_806c4874(void);

// 0x0x806c5640 (address_range)
void MapObj_assertFail_806c5640(void);

// 0x0x806c5978 (address_range)
void scene_MapObj_806c5978(void);

// 0x0x806c61cc (address_range)
void scene_MapObj_806c61cc(void);

// 0x0x806c6614 (address_range)
void scene_MapObj_806c6614(void);

// 0x0x806c680c (address_range)
void scene_MapObj_806c680c(void);

// 0x0x806c6810 (address_range)
void scene_MapObj_806c6810(int, int, u32, u32, int);

// 0x0x806c68f4 (address_range)
void MapObj_validate_806c68f4(int, int, int);

// 0x0x806c6d60 (address_range)
int MapObj_validate_806c6d60(int, int);

// 0x0x806c6da0 (address_range)
void scene_MapObj_806c6da0(void);

// 0x0x806c6f3c (address_range)
void scene_MapObj_806c6f3c(void);

// 0x0x806c7118 (address_range)
void scene_MapObj_806c7118(void);

// 0x0x806c72f0 (address_range)
void scene_MapObj_806c72f0(void);

// 0x0x806c74bc (address_range)
void scene_MapObj_806c74bc(void);

// 0x0x806c790c (address_range)
void scene_MapObj_806c790c(void);

// 0x0x806c7b78 (address_range)
void scene_MapObj_806c7b78(void);

// 0x0x806c7c08 (address_range)
void scene_MapObj_806c7c08(void);

// 0x0x806c7de4 (address_range)
u32 scene_MapObj_806c7de4(int, int);

// 0x0x806c8f98 (address_range)
void MapObj_validate_806c8f98(int);

// 0x0x806c9014 (address_range)
void MapObj_assertFail_806c9014(void);

// 0x0x806c91f4 (address_range)
void scene_MapObj_806c91f4(int);

// 0x0x806c9270 (address_range)
void scene_MapObj_806c9270(u32);

// 0x0x806c92c0 (address_range)
void MapObj_validate_806c92c0(int, u32);

// 0x0x806c9454 (address_range)
int MapObj_validate_806c9454(int, int);

// 0x0x806c9494 (address_range)
void scene_MapObj_806c9494(int);

// 0x0x806c9558 (address_range)
void scene_MapObj_806c9558(u32);

// 0x0x806c95b0 (address_range)
void MapObj_assertFail_806c95b0(void);

// 0x0x806c9900 (address_range)
int MapObj_validate_806c9900(u32, u16);

// 0x0x806c9a30 (address_range)
void scene_MapObj_806c9a30(u32);

// 0x0x806c9a6c (address_range)
void scene_MapObj_806c9a6c(u32);

// 0x0x806c9af0 (address_range)
void MapObj_validate_806c9af0(u32);

// 0x0x806c9bd8 (address_range)
void scene_MapObj_806c9bd8(int);

// 0x0x806c9d64 (address_range)
void MapObj_assertFail_806c9d64(void);

// 0x0x806c9e00 (address_range)
void MapObj_assertFail_806c9e00(void);

// 0x0x806c9e38 (address_range)
void scene_MapObj_806c9e38(void);

// 0x0x806c9f00 (address_range)
uint * MapObj_validate_806c9f00(uint);

// 0x0x806c9f88 (address_range)
void MapObj_assertFail_806c9f88(void);

// 0x0x806ca110 (address_range)
void scene_MapObj_806ca110(void);

// 0x0x806ca58c (address_range)
void MapObj_assertFail_806ca58c(void);

// 0x0x806ca8e0 (address_range)
void MapObj_validate_806ca8e0(int);

// 0x0x806ca95c (address_range)
void scene_MapObj_806ca95c(int);

// 0x0x806ca9bc (address_range)
void MapObj_validate_806ca9bc(int);

// 0x0x806cab20 (address_range)
void MapObj_validate_806cab20(int);

// 0x0x806cab9c (address_range)
void scene_MapObj_806cab9c(int);

// 0x0x806cac34 (address_range)
void MapObj_validate_806cac34(int);

// 0x0x806cacb0 (address_range)
void scene_MapObj_806cacb0(int);

// 0x0x806cacf4 (address_range)
void scene_MapObj_806cacf4(u32);

// 0x0x806cad28 (address_range)
void scene_MapObj_806cad28(int);

// 0x0x806cae90 (address_range)
void scene_MapObj_806cae90(void);

// 0x0x806cb028 (address_range)
void scene_MapObj_806cb028(int);

// 0x0x806cb094 (address_range)
void MapObj_assertFail_806cb094(void);

// 0x0x806cb260 (address_range)
void scene_MapObj_806cb260(void);

// 0x0x806cc2b4 (address_range)
void scene_MapObj_806cc2b4(void);

// 0x0x806cc3e8 (address_range)
void scene_MapObj_806cc3e8(int);

// 0x0x806cc4e4 (address_range)
void scene_MapObj_806cc4e4(void);

// 0x0x806cc640 (address_range)
void scene_MapObj_806cc640(void);

// 0x0x806cca5c (address_range)
void scene_MapObj_806cca5c(void);

// 0x0x806ccbfc (address_range)
void scene_MapObj_806ccbfc(int, int);

// 0x0x806ccd00 (address_range)
u32 scene_MapObj_806ccd00(int);

// 0x0x806ccd30 (address_range)
void scene_MapObj_806ccd30(int);

// 0x0x806ccdf8 (address_range)
void scene_MapObj_806ccdf8(void);

// 0x0x806cd134 (address_range)
void scene_MapObj_806cd134(void);

// 0x0x806cd390 (address_range)
void scene_MapObj_806cd390(int, int, u32, u32, int);

// 0x0x806cd444 (address_range)
void scene_MapObj_806cd444(int, int, u32);

// 0x0x806cd5a4 (address_range)
void MapObj_validate_806cd5a4(int);

// 0x0x806cd620 (address_range)
void scene_MapObj_806cd620(int);

// 0x0x806cd6b4 (address_range)
void MapObj_assertFail_806cd6b4(void);

// 0x0x806cd764 (address_range)
void MapObj_assertFail_806cd764(void);

// 0x0x806cd79c (address_range)
void scene_MapObj_806cd79c(void);

// 0x0x806cd80c (address_range)
u32 * MapObj_validate_806cd80c(u32);

// 0x0x806cd8a8 (address_range)
void scene_MapObj_806cd8a8(int, uint);

// 0x0x806cd9e0 (address_range)
void MapObj_assertFail_806cd9e0(void);

// 0x0x806cdbb0 (address_range)
void scene_MapObj_806cdbb0(void);

// 0x0x806cddec (address_range)
void scene_MapObj_806cddec(int);

// 0x0x806cdf68 (address_range)
void scene_MapObj_806cdf68(u32);

// 0x0x806cdfe4 (address_range)
void scene_MapObj_806cdfe4(u32);

// 0x0x806ce034 (address_range)
void MapObj_validate_806ce034(int, u32);

// 0x0x806ce2f0 (address_range)
void scene_MapObj_806ce2f0(int);

// 0x0x806ce378 (address_range)
void scene_MapObj_806ce378(int, int, u32);

// 0x0x806ce418 (address_range)
void scene_MapObj_806ce418(int, int, u32);

// 0x0x806ce474 (address_range)
void scene_MapObj_806ce474(int, int, u32);

// 0x0x806ce4d0 (address_range)
void scene_MapObj_806ce4d0(void);

// 0x0x806ce708 (address_range)
void MapObj_validate_806ce708(int);

// 0x0x806ce858 (address_range)
void MapObj_validate_806ce858(int);

// 0x0x806ce984 (address_range)
uint scene_MapObj_806ce984(void);

// 0x0x806ce9a0 (address_range)
int scene_MapObj_806ce9a0(void);

// 0x0x806ce9b4 (address_range)
u32 scene_MapObj_806ce9b4(void);

// 0x0x806cea18 (address_range)
void MapObj_assertFail_806cea18(void);

// 0x0x806cec6c (address_range)
void MapObj_validate_806cec6c(int, u32);

// 0x0x806ced8c (address_range)
void MapObj_validate_806ced8c(int, int);

// 0x0x806cee18 (address_range)
void MapObj_assertFail_806cee18(void);

// 0x0x806cf14c (address_range)
void MapObj_assertFail_806cf14c(void);

// 0x0x806cf4a8 (address_range)
void MapObj_validate_806cf4a8(u32, int);

// 0x0x806cf55c (address_range)
void MapObj_assertFail_806cf55c(void);

// 0x0x806cf880 (address_range)
void scene_MapObj_806cf880(int, u32);

// 0x0x806cf894 (address_range)
void scene_MapObj_806cf894(void);

// 0x0x80740180 (address_range)
void Camera_validate_80740180(u32);

// 0x0x8074024c (address_range)
int Camera_validate_8074024c(int, int);

// 0x0x8074028c (address_range)
void scene_Camera_8074028c(int);

// 0x0x80740370 (address_range)
void scene_Camera_80740370(void);

// 0x0x807404f8 (address_range)
void scene_Camera_807404f8(int, int, int);

// 0x0x807405c4 (address_range)
void scene_Camera_807405c4(int);

// 0x0x807405d8 (address_range)
void Camera_validate_807405d8(u32);

// 0x0x80740630 (address_range)
int Camera_validate_80740630(int, int);

// 0x0x80740670 (address_range)
void Camera_validate_80740670(int);

// 0x0x80740808 (address_range)
void scene_Camera_80740808(u32, int);

// 0x0x807408f0 (address_range)
void scene_Camera_807408f0(int, uint, uint);

// 0x0x80740c84 (address_range)
void Camera_validate_80740c84(int);

// 0x0x80740e18 (address_range)
void scene_Camera_80740e18(int, u32);

// 0x0x80740ef8 (address_range)
void Camera_validate_80740ef8(u32, char);

// 0x0x80741480 (address_range)
int Camera_validate_80741480(int, int);

// 0x0x807414c0 (address_range)
void scene_Camera_807414c0(int);

// 0x0x80741528 (address_range)
void scene_Camera_80741528(int);

// 0x0x807417f8 (address_range)
void scene_Camera_807417f8(int, int);

// 0x0x807419b4 (address_range)
void scene_Camera_807419b4(int, int, u32);

// 0x0x807419dc (address_range)
void scene_Camera_807419dc(int, int);

// 0x0x80741a78 (address_range)
void scene_Camera_80741a78(int, int, int);

// 0x0x80741dc4 (address_range)
void scene_Camera_80741dc4(int, uint);

// 0x0x80741e78 (address_range)
void Camera_assertFail_80741e78(void);

// 0x0x807421c4 (address_range)
void scene_Camera_807421c4(int, uint, u32);

// 0x0x807422ac (address_range)
void Camera_validate_807422ac(int, uint, u32);

// 0x0x8074249c (address_range)
void Camera_validate_8074249c(int, u32, u32);

// 0x0x8074286c (address_range)
u32 scene_Camera_8074286c(int);

// 0x0x8074294c (address_range)
int Camera_validate_8074294c(int, int);

// 0x0x80742994 (address_range)
void Camera_validate_80742994(int, u32, int, int);

// 0x0x80742a98 (address_range)
u32 scene_Camera_80742a98(int);

// 0x0x80742bd0 (address_range)
u32 scene_Camera_80742bd0(void);

// 0x0x80742c28 (address_range)
u32 scene_Camera_80742c28(void);

// 0x0x80742c80 (address_range)
u32 scene_Camera_80742c80(void);

// 0x0x80742cfc (address_range)
int Camera_validate_80742cfc(int, int);

// 0x0x80742d3c (address_range)
void Camera_validate_80742d3c(int, u32, u32, u32, u32);

// 0x0x80742fb8 (address_range)
void scene_Camera_80742fb8(void);

// 0x0x807434d4 (address_range)
void scene_Camera_807434d4(void);

// 0x0x80743860 (address_range)
void Camera_validate_80743860(u32, u32);

// 0x0x80743a38 (address_range)
int Camera_validate_80743a38(int, int);

// 0x0x80743a78 (address_range)
void Camera_validate_80743a78(int);

// 0x0x80743d10 (address_range)
void scene_Camera_80743d10(int);

// 0x0x80743d84 (address_range)
void scene_Camera_80743d84(int);

// 0x0x80743f3c (address_range)
void scene_Camera_80743f3c(int, uint);

// 0x0x80744008 (address_range)
void scene_Camera_80744008(int, uint, int);

// 0x0x80744060 (address_range)
void scene_Camera_80744060(int, uint);

// 0x0x80744124 (address_range)
void scene_Camera_80744124(int, uint, u32);

// 0x0x807441ec (address_range)
int scene_Camera_807441ec(int, uint, int);

// 0x0x80744218 (address_range)
int Camera_validate_80744218(int, int);

// 0x0x80744258 (address_range)
int * scene_Camera_80744258(int);

// 0x0x80744368 (address_range)
void scene_Camera_80744368(int);

// 0x0x807443e8 (address_range)
int scene_Camera_807443e8(int, int);

// 0x0x8074447c (address_range)
void scene_Camera_8074447c(int);

// 0x0x807447ec (address_range)
void scene_Camera_807447ec(int);

// 0x0x80744948 (address_range)
void scene_Camera_80744948(int, int);

// 0x0x80744954 (address_range)
void scene_Camera_80744954(int, int, u32);

// 0x0x80744a8c (address_range)
void scene_Camera_80744a8c(int);

// 0x0x80744d04 (address_range)
void scene_Camera_80744d04(int);

// 0x0x80744f74 (address_range)
void scene_Camera_80744f74(int);

// 0x0x80745190 (address_range)
void scene_Camera_80745190(int);

// 0x0x807451ec (address_range)
void scene_Camera_807451ec(int);

// 0x0x80745248 (address_range)
void scene_Camera_80745248(int);

// 0x0x80745354 (address_range)
void scene_Camera_80745354(int, u32);

// 0x0x807453b8 (address_range)
u32 Camera_validate_807453b8(int);

// 0x0x807454cc (address_range)
int * scene_Camera_807454cc(int);

// 0x0x807455f0 (address_range)
void Camera_assertFail_807455f0(void);

// 0x0x807456d8 (address_range)
void scene_Camera_807456d8(int, u32);

// 0x0x80745734 (address_range)
int scene_Camera_80745734(int, int);

// 0x0x80745850 (address_range)
void scene_Camera_80745850(int);

// 0x0x80745b84 (address_range)
void scene_Camera_80745b84(int);

// 0x0x80745d10 (address_range)
void scene_Camera_80745d10(u32, int, uint);

// 0x0x80745e9c (address_range)
void scene_Camera_80745e9c(int, int, int);

// 0x0x80745f78 (address_range)
void scene_Camera_80745f78(u32);

// 0x0x8074604c (address_range)
int * scene_Camera_8074604c(int);

// 0x0x8074614c (address_range)
void scene_Camera_8074614c(void);

// 0x0x80746334 (address_range)
void scene_Camera_80746334(int);

// 0x0x80746394 (address_range)
void scene_Camera_80746394(int);

// 0x0x8074640c (address_range)
int Camera_validate_8074640c(int, int);

// 0x0x807464d8 (address_range)
int * scene_Camera_807464d8(int);

// 0x0x807465e8 (address_range)
void scene_Camera_807465e8(int);

// 0x0x80746640 (address_range)
int scene_Camera_80746640(int, int);

// 0x0x807466d4 (address_range)
void scene_Camera_807466d4(int);

// 0x0x80746848 (address_range)
void scene_Camera_80746848(int);

// 0x0x80746968 (address_range)
void scene_Camera_80746968(int, u32, int);

// 0x0x80746b14 (address_range)
void scene_Camera_80746b14(int);

// 0x0x80746b74 (address_range)
void scene_Camera_80746b74(int);

// 0x0x80746c58 (address_range)
void scene_Camera_80746c58(int, u32);

// 0x0x80746cb4 (address_range)
u32 Camera_validate_80746cb4(int);

// 0x0x80746dc0 (address_range)
int * scene_Camera_80746dc0(int);

// 0x0x80746ee8 (address_range)
u32 Camera_validate_80746ee8(u32, int);

// 0x0x80747054 (address_range)
void scene_Camera_80747054(int, u32);

// 0x0x807470b0 (address_range)
u32 Camera_validate_807470b0(u32, int);

// 0x0x807473b4 (address_range)
void scene_Camera_807473b4(int, int);

// 0x0x80747444 (address_range)
int Camera_validate_80747444(int, int);

// 0x0x807474e4 (address_range)
int * scene_Camera_807474e4(int);

// 0x0x807475f4 (address_range)
void Camera_assertFail_807475f4(void);

// 0x0x80747818 (address_range)
int scene_Camera_80747818(int, int);

// 0x0x807478bc (address_range)
int scene_Camera_807478bc(int);

// 0x0x8074792c (address_range)
void scene_Camera_8074792c(int);

// 0x0x80747a24 (address_range)
void scene_Camera_80747a24(int, int);

// 0x0x807480f8 (address_range)
void scene_Camera_807480f8(int, u32);

// 0x0x8074815c (address_range)
int Camera_validate_8074815c(int, int);

// 0x0x80748220 (address_range)
int * scene_Camera_80748220(int);

// 0x0x80748330 (address_range)
void scene_Camera_80748330(int);

// 0x0x80748370 (address_range)
int scene_Camera_80748370(int, int);

// 0x0x80748404 (address_range)
void scene_Camera_80748404(int);

// 0x0x80748450 (address_range)
void scene_Camera_80748450(int, int);

// 0x0x8074845c (address_range)
void scene_Camera_8074845c(u32, int, u32);

// 0x0x807484e0 (address_range)
void scene_Camera_807484e0(u32);

// 0x0x8074852c (address_range)
void scene_Camera_8074852c(int);

// 0x0x80748580 (address_range)
void scene_Camera_80748580(int);

// 0x0x807485e4 (address_range)
void scene_Camera_807485e4(int, u32);

// 0x0x80748648 (address_range)
u32 Camera_validate_80748648(int);

// 0x0x8074875c (address_range)
int * scene_Camera_8074875c(int);

// 0x0x8074886c (address_range)
void scene_Camera_8074886c(int);

// 0x0x807488dc (address_range)
int scene_Camera_807488dc(int, u32);

// 0x0x80748968 (address_range)
int scene_Camera_80748968(int);

// 0x0x807489d8 (address_range)
void scene_Camera_807489d8(int);

// 0x0x80748ac0 (address_range)
void scene_Camera_80748ac0(u32, int);

// 0x0x80748c00 (address_range)
void scene_Camera_80748c00(int, u32);

// 0x0x80748c64 (address_range)
int Camera_validate_80748c64(int, int);

// 0x0x80748d24 (address_range)
int * scene_Camera_80748d24(int);

// 0x0x80748e50 (address_range)
int scene_Camera_80748e50(int, int);

// 0x0x80748f10 (address_range)
void scene_Camera_80748f10(u32, u32, int);

// 0x0x80749020 (address_range)
void scene_Camera_80749020(int);

// 0x0x80749074 (address_range)
void scene_Camera_80749074(u32);

// 0x0x807490d0 (address_range)
void scene_Camera_807490d0(int, u32);

// 0x0x8074912c (address_range)
u32 Camera_validate_8074912c(int);

// 0x0x80749238 (address_range)
int * scene_Camera_80749238(int);

// 0x0x80749348 (address_range)
void Camera_assertFail_80749348(void);

// 0x0x80749818 (address_range)
void scene_Camera_80749818(int, u32);

// 0x0x80749878 (address_range)
u32 Camera_validate_80749878(u32, int);

// 0x0x807499d4 (address_range)
void Camera_validate_807499d4(int, int);

// 0x0x80749b04 (address_range)
void scene_Camera_80749b04(int);

// 0x0x80749c0c (address_range)
void Camera_assertFail_80749c0c(void);

// 0x0x80749d84 (address_range)
void scene_Camera_80749d84(int, int, int);

// 0x0x8074a078 (address_range)
void scene_Camera_8074a078(int, int);

// 0x0x8074a148 (address_range)
void scene_Camera_8074a148(int);

// 0x0x8074a208 (address_range)
int Camera_validate_8074a208(int, int);

// 0x0x8074a2a8 (address_range)
int * scene_Camera_8074a2a8(int);

// 0x0x8074a3b8 (address_range)
void scene_Camera_8074a3b8(void);

// 0x0x8074a898 (address_range)
void scene_Camera_8074a898(int, u32);

// 0x0x8074a8f8 (address_range)
void scene_Camera_8074a8f8(int);

// 0x0x8074a9a0 (address_range)
void scene_Camera_8074a9a0(int);

// 0x0x8074aa48 (address_range)
u32 Camera_validate_8074aa48(u32, int);

// 0x0x8074ab98 (address_range)
void Camera_validate_8074ab98(int, int);

// 0x0x8074acc8 (address_range)
void scene_Camera_8074acc8(int);

// 0x0x8074af9c (address_range)
void Camera_assertFail_8074af9c(void);

// 0x0x8074b4a8 (address_range)
void scene_Camera_8074b4a8(int, uint);

// 0x0x8074b5b4 (address_range)
void scene_Camera_8074b5b4(int);

// 0x0x8074b6a0 (address_range)
void scene_Camera_8074b6a0(void);

// 0x0x8074b8d4 (address_range)
int Camera_validate_8074b8d4(int, int);

// 0x0x8074b974 (address_range)
int * scene_Camera_8074b974(int);

// 0x0x8074ba98 (address_range)
int Camera_validate_8074ba98(int, int);

// 0x0x8074bb98 (address_range)
void scene_Camera_8074bb98(int);

// 0x0x8074bc44 (address_range)
void scene_Camera_8074bc44(int, u32);

// 0x0x8074bca8 (address_range)
int Camera_validate_8074bca8(int, int);

// 0x0x8074bd54 (address_range)
int * scene_Camera_8074bd54(int);

// 0x0x8074be64 (address_range)
void scene_Camera_8074be64(int);

// 0x0x8074bec0 (address_range)
void Camera_assertFail_8074bec0(void);

// 0x0x8074c078 (address_range)
void scene_Camera_8074c078(u32);

// 0x0x8074c628 (address_range)
void scene_Camera_8074c628(u32, int);

// 0x0x8074c750 (address_range)
void scene_Camera_8074c750(u32);

// 0x0x8074c7ac (address_range)
void scene_Camera_8074c7ac(int, u32);

// 0x0x8074c808 (address_range)
int Camera_validate_8074c808(int, int);

// 0x0x8074c8a8 (address_range)
int * scene_Camera_8074c8a8(int);

// 0x0x8074c9b8 (address_range)
int scene_Camera_8074c9b8(void);

// 0x0x8074ca20 (address_range)
void Camera_assertFail_8074ca20(void);

// 0x0x8074cab0 (address_range)
int scene_Camera_8074cab0(int, int);

// 0x0x8074ccf4 (address_range)
void scene_Camera_8074ccf4(int);

// 0x0x8074cf10 (address_range)
void scene_Camera_8074cf10(int);

// 0x0x8074d06c (address_range)
void scene_Camera_8074d06c(int, u32, u32);

// 0x0x8074d344 (address_range)
void scene_Camera_8074d344(int, int);

// 0x0x8074d400 (address_range)
void scene_Camera_8074d400(int, int);

// 0x0x8074d670 (address_range)
void scene_Camera_8074d670(u32, u32);

// 0x0x8074d6d0 (address_range)
void scene_Camera_8074d6d0(u32, u32);

// 0x0x8074d730 (address_range)
void scene_Camera_8074d730(int, u32, u32);

// 0x0x8074d8c8 (address_range)
int scene_Camera_8074d8c8(void);

// 0x0x8074d918 (address_range)
void scene_Camera_8074d918(int, u32);

// 0x0x8074d954 (address_range)
void scene_Camera_8074d954(int, int);

// 0x0x8074d9f0 (address_range)
void scene_Camera_8074d9f0(int, int, int);

// 0x0x8074db94 (address_range)
u32 scene_Camera_8074db94(void);

// 0x0x8074dcbc (address_range)
void scene_Camera_8074dcbc(int, u32);

// 0x0x8074dd20 (address_range)
int Camera_validate_8074dd20(int, int);

// 0x0x8074ddf0 (address_range)
void scene_Camera_8074ddf0(void);

// 0x0x8074df14 (address_range)
u32 scene_Camera_8074df14(int);

// 0x0x8074dfb0 (address_range)
void scene_Camera_8074dfb0(void);

// 0x0x8074e268 (address_range)
void scene_Camera_8074e268(int);

// 0x0x8074e3c0 (address_range)
void scene_Camera_8074e3c0(void);

// 0x0x8074e4f8 (address_range)
void Camera_validate_8074e4f8(int);

// 0x0x8074e728 (address_range)
void scene_Camera_8074e728(void);

// 0x0x8074e89c (address_range)
void Camera_validate_8074e89c(int);

// 0x0x8074ef74 (address_range)
void scene_Camera_8074ef74(void);

// 0x0x8074f19c (address_range)
void scene_Camera_8074f19c(int);

// 0x0x8074f654 (address_range)
u32 Camera_validate_8074f654(void);

// 0x0x8074f844 (address_range)
void Camera_validate_8074f844(int);

// 0x0x8074fdcc (address_range)
int Camera_validate_8074fdcc(int, int);

// 0x0x8074fe48 (address_range)
int Camera_validate_8074fe48(int, int);

// 0x0x8074fed4 (address_range)
int Camera_validate_8074fed4(int, int);

// 0x0x8074ff50 (address_range)
int Camera_validate_8074ff50(int, int);

// 0x0x8074ffcc (address_range)
int Camera_validate_8074ffcc(int, int);

// 0x0x80750084 (address_range)
int * scene_Camera_80750084(int);

// 0x0x80750194 (address_range)
void scene_Camera_80750194(int);

// 0x0x8075023c (address_range)
void Camera_assertFail_8075023c(void);

// 0x0x807502e8 (address_range)
void Camera_assertFail_807502e8(void);

// 0x0x807504b8 (address_range)
void scene_Camera_807504b8(int, int);

// 0x0x807505c4 (address_range)
void scene_Camera_807505c4(u32, int, u32);

// 0x0x8075090c (address_range)
void scene_Camera_8075090c(u32, int, u32);

// 0x0x80750a48 (address_range)
void scene_Camera_80750a48(u32, int, u32);

// 0x0x80750be4 (address_range)
void scene_Camera_80750be4(u32, int, u32);

// 0x0x80750cfc (address_range)
void scene_Camera_80750cfc(u32, int, u32);

// 0x0x80750ea8 (address_range)
void scene_Camera_80750ea8(int, u32);

// 0x0x80750f0c (address_range)
int Camera_validate_80750f0c(int, int);

// 0x0x80750fac (address_range)
ulonglong scene_Camera_80750fac(uint);

// 0x0x807528cc (address_range)
int scene_Camera_807528cc(void);

// 0x0x80752924 (address_range)
u32 scene_Camera_80752924(u32);

// 0x0x80752a08 (address_range)
u32 scene_Camera_80752a08(uint);

// 0x0x80752b38 (address_range)
u32 scene_Camera_80752b38(uint);

// 0x0x80752cf8 (address_range)
void scene_Camera_80752cf8(void);

// 0x0x80752d1c (address_range)
u32 scene_Camera_80752d1c(uint);

// 0x0x80752db4 (address_range)
void scene_Camera_80752db4(void);

// 0x0x80752dd8 (address_range)
u32 scene_Camera_80752dd8(int);

// 0x0x807533cc (address_range)
void scene_Camera_807533cc(uint, int);

// 0x0x8075349c (address_range)
void scene_Camera_8075349c(uint, int);

// 0x0x80753598 (address_range)
void Camera_validate_80753598(u32);

// 0x0x80753618 (address_range)
int Camera_validate_80753618(int, int);

// 0x0x80753658 (address_range)
int Camera_validate_80753658(int, int);

// 0x0x807536b4 (address_range)
int Camera_validate_807536b4(int, int);

// 0x0x8075370c (address_range)
void Camera_assertFail_8075370c(void);

// 0x0x80753b28 (address_range)
void scene_Camera_80753b28(int);

// 0x0x80753c70 (address_range)
void scene_Camera_80753c70(void);

// 0x0x80754334 (address_range)
void scene_Camera_80754334(int);

// 0x0x80754360 (address_range)
u32 scene_Camera_80754360(int, int);

// 0x0x80754584 (address_range)
void Camera_assertFail_80754584(void);

// 0x0x80754cc0 (address_range)
u32 scene_Camera_80754cc0(int, int);

// 0x0x80754da8 (address_range)
void Camera_assertFail_80754da8(void);

// 0x0x80755000 (address_range)
u32 scene_Camera_80755000(int);

// 0x0x80755118 (address_range)
u32 Camera_validate_80755118(int, int);

// 0x0x80755188 (address_range)
u32 scene_Camera_80755188(int);

// 0x0x80755224 (address_range)
void scene_Camera_80755224(int);

// 0x0x80755288 (address_range)
u32 scene_Camera_80755288(int, int);

// 0x0x8075533c (address_range)
void scene_Camera_8075533c(void);

// 0x0x80755530 (address_range)
void Camera_validate_80755530(int, int);

// 0x0x807555f4 (address_range)
void Camera_validate_807555f4(int, u32);

// 0x0x80755688 (address_range)
void Camera_validate_80755688(int, u32);

// 0x0x80755708 (address_range)
void Camera_validate_80755708(int, int);

// 0x0x80755844 (address_range)
int Camera_validate_80755844(int, int);

// 0x0x80755a58 (address_range)
u32 scene_Camera_80755a58(int, int, int);

// 0x0x80755bd4 (address_range)
void scene_Camera_80755bd4(int, u32, u32);

// 0x0x80755c50 (address_range)
void Camera_assertFail_80755c50(void);

// 0x0x80755d80 (address_range)
void Camera_validate_80755d80(int);

// 0x0x80755e08 (address_range)
void scene_Camera_80755e08(int, u32);

// 0x0x80755e9c (address_range)
void scene_Camera_80755e9c(int, int);

// 0x0x80755ff8 (address_range)
int scene_Camera_80755ff8(int);

// 0x0x80756074 (address_range)
int scene_Camera_80756074(int);

// 0x0x80756134 (address_range)
int scene_Camera_80756134(int, int);

// 0x0x80756298 (address_range)
void Camera_validate_80756298(int, int);

// 0x0x80756878 (address_range)
u32 Camera_validate_80756878(int);

// 0x0x807569b4 (address_range)
u32 Camera_validate_807569b4(u32);

// 0x0x80756a4c (address_range)
int Camera_validate_80756a4c(void);

// 0x0x80756ad4 (address_range)
void scene_Camera_80756ad4(void);

// 0x0x80756b08 (address_range)
int Camera_validate_80756b08(int, int);

// 0x0x80756bbc (address_range)
int scene_Camera_80756bbc(u32, int, int);

// 0x0x80756bf0 (address_range)
void scene_Camera_80756bf0(void);

// 0x0x80756c30 (address_range)
uint scene_Camera_80756c30(u32, uint);

// 0x0x80756c90 (address_range)
u32 scene_Camera_80756c90(u32, uint, uint);

// 0x0x80756cfc (address_range)
u32 * scene_Camera_80756cfc(u32);

// 0x0x80756d40 (address_range)
u32 * scene_Camera_80756d40(u32, u32, u32, u32, u32);

// 0x0x80756da4 (address_range)
void scene_Camera_80756da4(int);

// 0x0x80756dac (address_range)
int scene_Camera_80756dac(int, u32);

// 0x0x80756e6c (address_range)
int scene_Camera_80756e6c(int, u32);

// 0x0x80756f2c (address_range)
int scene_Camera_80756f2c(int, u32);

// 0x0x80756fec (address_range)
int scene_Camera_80756fec(int, u32);

// 0x0x807570ac (address_range)
int scene_Camera_807570ac(int, int, u32);

// 0x0x80757158 (address_range)
u32 Camera_validate_80757158(u32);

// 0x0x807572d4 (address_range)
int Camera_validate_807572d4(void);

// 0x0x807573f8 (address_range)
void Camera_assertFail_807573f8(void);

// 0x0x80757528 (address_range)
void Camera_assertFail_80757528(void);

// 0x0x80757620 (address_range)
int Camera_validate_80757620(int, int);

// 0x0x80757660 (address_range)
u32 Camera_validate_80757660(int);

// 0x0x80757798 (address_range)
void Camera_validate_80757798(int);

// 0x0x807579fc (address_range)
void Camera_validate_807579fc(int);

// 0x0x80757b70 (address_range)
void scene_Camera_80757b70(int);

// 0x0x80757ba8 (address_range)
void scene_Camera_80757ba8(int);

// 0x0x80757c54 (address_range)
void scene_Camera_80757c54(int);

// 0x0x80757d9c (address_range)
void scene_Camera_80757d9c(int);

// 0x0x80757db0 (address_range)
void scene_Camera_80757db0(int, int);

// 0x0x80757f90 (address_range)
u32 scene_Camera_80757f90(u32, int, int);

// 0x0x80757ff8 (address_range)
u32 scene_Camera_80757ff8(u32, int);

// 0x0x807580d8 (address_range)
void Camera_assertFail_807580d8(void);

// 0x0x8075823c (address_range)
void Camera_assertFail_8075823c(void);

// 0x0x80758370 (address_range)
int Camera_validate_80758370(int, uint);

// 0x0x80758448 (address_range)
int Camera_validate_80758448(int, int);

// 0x0x80758538 (address_range)
int scene_Camera_80758538(int, int, int);

// 0x0x80758550 (address_range)
int Camera_validate_80758550(int, int, u16, int, u32);

// 0x0x80758734 (address_range)
void scene_Camera_80758734(int, u32, int);

// 0x0x80758818 (address_range)
void Camera_assertFail_80758818(void);

// 0x0x807588e4 (address_range)
void scene_Camera_807588e4(int);

// 0x0x80758960 (address_range)
void scene_Camera_80758960(u32, int, u32);

// 0x0x807589d4 (address_range)
void scene_Camera_807589d4(int, u32);

// 0x0x80758aa4 (address_range)
void Camera_assertFail_80758aa4(void);

// 0x0x80758c78 (address_range)
void scene_Camera_80758c78(int, int);

// 0x0x80758d14 (address_range)
void scene_Camera_80758d14(int);

// 0x0x80758dd8 (address_range)
u32 * scene_Camera_80758dd8(u32);

// 0x0x80758e1c (address_range)
u32 * scene_Camera_80758e1c(u32, u32, char, u32);

// 0x0x80758eac (address_range)
void scene_Camera_80758eac(int, u32, char, u32);

// 0x0x80758ee0 (address_range)
int scene_Camera_80758ee0(int);

// 0x0x80759040 (address_range)
int scene_Camera_80759040(int);

// 0x0x807590f0 (address_range)
int scene_Camera_807590f0(int);

// 0x0x8075914c (address_range)
int scene_Camera_8075914c(int);

// 0x0x80759218 (address_range)
void scene_Camera_80759218(int, int, int);

// 0x0x8075928c (address_range)
void scene_Camera_8075928c(int);

// 0x0x8075929c (address_range)
int scene_Camera_8075929c(int, uint);

// 0x0x807592d0 (address_range)
uint scene_Camera_807592d0(int, uint);

// 0x0x80759338 (address_range)
void scene_Camera_80759338(int, uint);

// 0x0x807593f0 (address_range)
void scene_Camera_807593f0(int, int);

// 0x0x8075942c (address_range)
void Camera_assertFail_8075942c(void);

// 0x0x807594b4 (address_range)
void Camera_assertFail_807594b4(void);

// 0x0x807594f4 (address_range)
byte * Camera_validate_807594f4(byte);

// 0x0x80759608 (address_range)
int Camera_validate_80759608(int, int);

// 0x0x80759648 (address_range)
void scene_Camera_80759648(byte);

// 0x0x8075979c (address_range)
void scene_Camera_8075979c(byte);

// 0x0x807598b8 (address_range)
void scene_Camera_807598b8(byte);

// 0x0x80759a64 (address_range)
void scene_Camera_80759a64(byte, int, uint, u32, int, uint, int);

// 0x0x80759c40 (address_range)
void scene_Camera_80759c40(u32, uint, u32, u32, int, uint, int);

// 0x0x80759d4c (address_range)
void scene_Camera_80759d4c(u32, uint, uint, int, uint, int);

// 0x0x80759ee8 (address_range)
void scene_Camera_80759ee8(void);

// 0x0x8075aa7c (address_range)
void scene_Camera_8075aa7c(void);

// 0x0x8075abd4 (address_range)
int Camera_validate_8075abd4(int, int);

// 0x0x8075ac14 (address_range)
int * Camera_validate_8075ac14(int, int);

// 0x0x8075ad18 (address_range)
void Camera_assertFail_8075ad18(void);

// 0x0x8075ae20 (address_range)
u32 * Camera_validate_8075ae20(double, u32, u32, int, int);

// 0x0x8075afcc (address_range)
int Camera_validate_8075afcc(int, int);

// 0x0x8075b104 (address_range)
u32 * Camera_validate_8075b104(u32, int);

// 0x0x8075b244 (address_range)
void Camera_validate_8075b244(int);

// 0x0x8075b4b0 (address_range)
void scene_Camera_8075b4b0(int, int);

// 0x0x8075b51c (address_range)
void scene_Camera_8075b51c(int);

// 0x0x8075b678 (address_range)
void scene_Camera_8075b678(int, u32, u32, u32, int, uint);

// 0x0x8075b848 (address_range)
void scene_Camera_8075b848(int, u32, u32, u32, int);

// 0x0x8075ba54 (address_range)
void Camera_assertFail_8075ba54(void);

// 0x0x8075be0c (address_range)
void scene_Camera_8075be0c(int, u32);

// 0x0x8075c068 (address_range)
void scene_Camera_8075c068(int);

// 0x0x8075c0e0 (address_range)
void scene_Camera_8075c0e0(void);

// 0x0x8075c72c (address_range)
void scene_Camera_8075c72c(u64, u32, u32, u32);

// 0x0x8075c79c (address_range)
void scene_Camera_8075c79c(void);

// 0x0x8075c90c (address_range)
void scene_Camera_8075c90c(int);

// 0x0x8075c9d0 (address_range)
void scene_Camera_8075c9d0(int);

// 0x0x8075ca94 (address_range)
void Camera_assertFail_8075ca94(void);

// 0x0x8075cdf4 (address_range)
void scene_Camera_8075cdf4(void);

// 0x0x8075d0b8 (address_range)
void scene_Camera_8075d0b8(void);

// 0x0x8075da58 (address_range)
void Camera_assertFail_8075da58(void);

// 0x0x8075dcac (address_range)
void Camera_assertFail_8075dcac(void);

// 0x0x8075e750 (address_range)
void Camera_validate_8075e750(int);

// 0x0x8075e8bc (address_range)
void Camera_validate_8075e8bc(int);

// 0x0x8075ecbc (address_range)
void Camera_validate_8075ecbc(int);

// 0x0x8075ef28 (address_range)
void Camera_validate_8075ef28(int);

// 0x0x8075f518 (address_range)
void Camera_validate_8075f518(int);

// 0x0x8075f66c (address_range)
void scene_Camera_8075f66c(int);

// 0x0x8075f7dc (address_range)
void Camera_assertFail_8075f7dc(void);

// 0x0x8075fbe4 (address_range)
void scene_Camera_8075fbe4(void);

// 0x0x807609e0 (address_range)
void scene_Effects_807609e0(int);

// 0x0x80760a68 (address_range)
void Effects_assertFail_80760a68(void);

// 0x0x80760f5c (address_range)
void scene_Effects_80760f5c(int);

// 0x0x807610e8 (address_range)
void Effects_validate_807610e8(int);

// 0x0x80761480 (address_range)
void scene_Effects_80761480(void);

// 0x0x807616f4 (address_range)
void scene_Effects_807616f4(void);

// 0x0x80761824 (address_range)
void Effects_validate_80761824(int);

// 0x0x80761a60 (address_range)
void scene_Effects_80761a60(void);

// 0x0x80762340 (address_range)
void scene_Effects_80762340(void);

// 0x0x807624e0 (address_range)
void scene_Effects_807624e0(int);

// 0x0x80762570 (address_range)
u32 scene_Effects_80762570(int, int, u32);

// 0x0x8076263c (address_range)
void Effects_assertFail_8076263c(void);

// 0x0x80762724 (address_range)
void Effects_assertFail_80762724(void);

// 0x0x807627b4 (address_range)
void Effects_assertFail_807627b4(void);

// 0x0x80762818 (address_range)
void Effects_validate_80762818(int);

// 0x0x80762d6c (address_range)
int Effects_validate_80762d6c(int, int);

// 0x0x80762dac (address_range)
u32 Effects_validate_80762dac(int);

// 0x0x80762e14 (address_range)
u32 Effects_validate_80762e14(byte, int);

// 0x0x8076332c (address_range)
void scene_Effects_8076332c(byte);

// 0x0x80763e4c (address_range)
int Effects_validate_80763e4c(int, int);

// 0x0x80763e94 (address_range)
int Effects_validate_80763e94(int, int);

// 0x0x80763edc (address_range)
int Effects_validate_80763edc(int, int);

// 0x0x80763f24 (address_range)
int Effects_validate_80763f24(int, int);

// 0x0x80763f64 (address_range)
int Effects_validate_80763f64(int, int);

// 0x0x80763fac (address_range)
int Effects_validate_80763fac(int, int);

// 0x0x80763ff4 (address_range)
int Effects_validate_80763ff4(int, int);

// 0x0x8076403c (address_range)
void Effects_assertFail_8076403c(void);

// 0x0x80764f2c (address_range)
void scene_Effects_80764f2c(int, u32, u32);

// 0x0x80764f90 (address_range)
void scene_Effects_80764f90(int, u32, u32);

// 0x0x80764ff4 (address_range)
int Effects_validate_80764ff4(int, int);

// 0x0x80765034 (address_range)
void scene_Effects_80765034(int, u32, u32);

// 0x0x807650a8 (address_range)
void scene_Effects_807650a8(int, u32, u32);

// 0x0x8076510c (address_range)
void scene_Effects_8076510c(int, u32, u32);

// 0x0x80765178 (address_range)
void scene_Effects_80765178(int, u32, u32);

// 0x0x807651e4 (address_range)
void scene_Effects_807651e4(int, u32, u32);

// 0x0x8076524c (address_range)
int Effects_validate_8076524c(int, int);

// 0x0x8076528c (address_range)
void scene_Effects_8076528c(int, u32, u32);

// 0x0x807652f8 (address_range)
int Effects_validate_807652f8(int, int);

// 0x0x80765338 (address_range)
void scene_Effects_80765338(int, u32, u32);

// 0x0x807653a4 (address_range)
int Effects_validate_807653a4(int, int);

// 0x0x807653e4 (address_range)
void scene_Effects_807653e4(int, u32, u32);

// 0x0x80765450 (address_range)
int Effects_validate_80765450(int, int);

// 0x0x807654c0 (address_range)
int Effects_validate_807654c0(int, int);

// 0x0x80765530 (address_range)
int Effects_validate_80765530(int, int);

// 0x0x807655a0 (address_range)
int Effects_validate_807655a0(int, int);

// 0x0x807655e0 (address_range)
void scene_Effects_807655e0(int, u32, u32);

// 0x0x80765654 (address_range)
int Effects_validate_80765654(int, int);

// 0x0x80765694 (address_range)
void scene_Effects_80765694(int, u32, u32);

// 0x0x80765700 (address_range)
int Effects_validate_80765700(int, int);

// 0x0x80765740 (address_range)
int Effects_validate_80765740(int, int);

// 0x0x807657b0 (address_range)
void scene_Effects_807657b0(void);

// 0x0x8076865c (address_range)
void scene_Effects_8076865c(int, u32, u32);

// 0x0x807686c4 (address_range)
void scene_Effects_807686c4(int, u32, u32);

// 0x0x8076872c (address_range)
void scene_Effects_8076872c(int, u32, u32);

// 0x0x807687a4 (address_range)
void scene_Effects_807687a4(int, u32, u32);

// 0x0x8076880c (address_range)
void scene_Effects_8076880c(int, u32, u32);

// 0x0x80768874 (address_range)
void scene_Effects_80768874(int, u32, u32);

// 0x0x807688ec (address_range)
void scene_Effects_807688ec(int, u32, u32);

// 0x0x80768954 (address_range)
void scene_Effects_80768954(int, u32, u32);

// 0x0x807689bc (address_range)
void scene_Effects_807689bc(int, u32, u32);

// 0x0x80768a24 (address_range)
void scene_Effects_80768a24(int, u32, u32);

// 0x0x80768a8c (address_range)
void scene_Effects_80768a8c(int, u32, u32);

// 0x0x80768ae0 (address_range)
void scene_Effects_80768ae0(int, u32, u32);

// 0x0x80768b34 (address_range)
void scene_Effects_80768b34(int, u32, u32);

// 0x0x80768b88 (address_range)
void scene_Effects_80768b88(int, u32, u32);

// 0x0x80768c00 (address_range)
void scene_Effects_80768c00(int, u32, u32);

// 0x0x80768c68 (address_range)
void scene_Effects_80768c68(int, u32, u32);

// 0x0x80768cdc (address_range)
void Effects_assertFail_80768cdc(void);

// 0x0x80769ea0 (address_range)
void scene_Effects_80769ea0(int);

// 0x0x80769f30 (address_range)
void scene_Effects_80769f30(int, uint, int);

// 0x0x8076a01c (address_range)
void scene_Effects_8076a01c(int, int);

// 0x0x8076a0a8 (address_range)
void Effects_assertFail_8076a0a8(void);

// 0x0x8076a3fc (address_range)
void scene_Effects_8076a3fc(int, uint, uint, uint);

// 0x0x8076a598 (address_range)
u32 scene_Effects_8076a598(byte);

// 0x0x8076a670 (address_range)
void scene_Effects_8076a670(byte);

// 0x0x8076a794 (address_range)
void Effects_assertFail_8076a794(void);

// 0x0x8076a814 (address_range)
void scene_Effects_8076a814(void);

// 0x0x8076a858 (address_range)
void scene_Effects_8076a858(void);

// 0x0x8076af30 (address_range)
int Effects_validate_8076af30(int, int);

// 0x0x8076af74 (address_range)
int Effects_validate_8076af74(int, int);

// 0x0x8076afb4 (address_range)
u32 Effects_validate_8076afb4(int);

// 0x0x8076b0e8 (address_range)
uint scene_Effects_8076b0e8(int, uint, uint);

// 0x0x8076b160 (address_range)
void Effects_validate_8076b160(u32, u32);

// 0x0x8076b228 (address_range)
void scene_Effects_8076b228(void);

// 0x0x8076b470 (address_range)
void scene_Effects_8076b470(void);

// 0x0x8076b734 (address_range)
void Effects_validate_8076b734(int, int);

// 0x0x8076b7b4 (address_range)
void scene_Effects_8076b7b4(int);

// 0x0x8076b87c (address_range)
void scene_Effects_8076b87c(void);

// 0x0x8076bc60 (address_range)
void scene_Effects_8076bc60(void);

// 0x0x8076bdb8 (address_range)
void scene_Effects_8076bdb8(void);

// 0x0x8076bfec (address_range)
void scene_Effects_8076bfec(int);

// 0x0x8076c074 (address_range)
void scene_Effects_8076c074(u64, int, u32, u32, u32);

// 0x0x8076c11c (address_range)
int Effects_validate_8076c11c(int, int);

// 0x0x8076c15c (address_range)
u32 * scene_Effects_8076c15c(u32, int);

// 0x0x8076c324 (address_range)
int Effects_validate_8076c324(int, int);

// 0x0x8076c374 (address_range)
void scene_Effects_8076c374(int);

// 0x0x8076c470 (address_range)
int scene_Effects_8076c470(int, int);

// 0x0x8076c5d8 (address_range)
void scene_Effects_8076c5d8(int);

// 0x0x8076c778 (address_range)
void scene_Effects_8076c778(int, uint, uint);

// 0x0x8076c7f8 (address_range)
void scene_Effects_8076c7f8(void);

// 0x0x8076ca78 (address_range)
void scene_Effects_8076ca78(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x8076cb5c (address_range)
void scene_Effects_8076cb5c(void);

// 0x0x8076ce58 (address_range)
int Effects_validate_8076ce58(int, int);

// 0x0x8076cee4 (address_range)
void scene_Effects_8076cee4(int);

// 0x0x8076cfb4 (address_range)
void Effects_assertFail_8076cfb4(void);

// 0x0x8076dca8 (address_range)
void Effects_validate_8076dca8(int);

// 0x0x8076e308 (address_range)
u32 scene_Effects_8076e308(int, int, uint);

// 0x0x8076e44c (address_range)
void Effects_validate_8076e44c(int);

// 0x0x8076e528 (address_range)
void Effects_validate_8076e528(int);

// 0x0x8076e63c (address_range)
void scene_Effects_8076e63c(void);

// 0x0x8076ed28 (address_range)
int Effects_validate_8076ed28(int, int);

// 0x0x8076edf4 (address_range)
int Effects_validate_8076edf4(int, int);

// 0x0x8076eef4 (address_range)
void Effects_validate_8076eef4(int);

// 0x0x8076f074 (address_range)
void scene_Effects_8076f074(int, u32, u32, u32, u32);

// 0x0x8076f268 (address_range)
void scene_Effects_8076f268(int, u32, u32, u32);

// 0x0x8076f434 (address_range)
void scene_Effects_8076f434(int, u32, u32, u32);

// 0x0x8076f654 (address_range)
void scene_Effects_8076f654(void);

// 0x0x8076f828 (address_range)
void scene_Effects_8076f828(void);

// 0x0x8076fb24 (address_range)
void scene_Effects_8076fb24(void);

// 0x0x8076fd04 (address_range)
void scene_Effects_8076fd04(void);

// 0x0x80771428 (address_range)
void scene_Effects_80771428(int);

// 0x0x80771478 (address_range)
void Effects_validate_80771478(int);

// 0x0x80771894 (address_range)
void scene_Effects_80771894(int);

// 0x0x80771ab0 (address_range)
void scene_Effects_80771ab0(int);

// 0x0x80771cc8 (address_range)
void scene_Effects_80771cc8(int);

// 0x0x80771d18 (address_range)
void Effects_validate_80771d18(int);

// 0x0x80771f0c (address_range)
void scene_Effects_80771f0c(int);

// 0x0x80771f5c (address_range)
void scene_Effects_80771f5c(int);

// 0x0x80771fc8 (address_range)
void Effects_validate_80771fc8(int);

// 0x0x80772620 (address_range)
void Effects_validate_80772620(int);

// 0x0x80772c70 (address_range)
void scene_Effects_80772c70(void);

// 0x0x80772ee4 (address_range)
void Effects_validate_80772ee4(int);

// 0x0x8077302c (address_range)
void scene_Effects_8077302c(void);

// 0x0x807730bc (address_range)
void scene_Effects_807730bc(void);

// 0x0x80773428 (address_range)
int Effects_validate_80773428(int, int);

// 0x0x807734b4 (address_range)
void Effects_validate_807734b4(int);

// 0x0x80773808 (address_range)
void scene_Effects_80773808(void);

// 0x0x80775e1c (address_range)
u32 scene_Effects_80775e1c(int, int, u32, int);

// 0x0x80775f44 (address_range)
u32 scene_Effects_80775f44(int, int, u32, int);

// 0x0x807760bc (address_range)
void scene_Effects_807760bc(u32);

// 0x0x80776154 (address_range)
void scene_Effects_80776154(void);

// 0x0x807761e4 (address_range)
void scene_Effects_807761e4(void);

// 0x0x8077641c (address_range)
int Effects_validate_8077641c(int, int);

// 0x0x807764a8 (address_range)
void Effects_validate_807764a8(int);

// 0x0x80776720 (address_range)
void scene_Effects_80776720(void);

// 0x0x807767c8 (address_range)
void scene_Effects_807767c8(void);

// 0x0x80777040 (address_range)
void Effects_validate_80777040(int);

// 0x0x80777638 (address_range)
void scene_Effects_80777638(u32);

// 0x0x807776c8 (address_range)
u32 * scene_Effects_807776c8(u32, u32);

// 0x0x80777724 (address_range)
int Effects_validate_80777724(int, int);

// 0x0x80777774 (address_range)
void scene_Effects_80777774(int);

// 0x0x80777854 (address_range)
void scene_Effects_80777854(void);

// 0x0x80777984 (address_range)
void scene_Effects_80777984(u32);

// 0x0x807779fc (address_range)
u32 * scene_Effects_807779fc(u32, u32);

// 0x0x80777ad0 (address_range)
int Effects_validate_80777ad0(int, int);

// 0x0x80777b10 (address_range)
void scene_Effects_80777b10(void);

// 0x0x80777bfc (address_range)
void scene_Effects_80777bfc(void);

// 0x0x807780d4 (address_range)
void Effects_validate_807780d4(int);

// 0x0x80778220 (address_range)
void scene_Effects_80778220(u32);

// 0x0x80778290 (address_range)
u32 * scene_Effects_80778290(u32, char);

// 0x0x80778434 (address_range)
int Effects_validate_80778434(int, int);

// 0x0x80778474 (address_range)
void Effects_assertFail_80778474(void);

// 0x0x8077873c (address_range)
void scene_Effects_8077873c(int, uint);

// 0x0x807787e0 (address_range)
void scene_Effects_807787e0(void);

// 0x0x80778ddc (address_range)
void scene_Effects_80778ddc(int);

// 0x0x80778f20 (address_range)
void scene_Effects_80778f20(int, uint);

// 0x0x80778f64 (address_range)
void Effects_validate_80778f64(int);

// 0x0x80779148 (address_range)
void scene_Effects_80779148(int);

// 0x0x8077921c (address_range)
void scene_Effects_8077921c(void);

// 0x0x807793b4 (address_range)
u32 * scene_Effects_807793b4(u32, u32);

// 0x0x80779410 (address_range)
int Effects_validate_80779410(int, int);

// 0x0x80779460 (address_range)
void Effects_validate_80779460(int);

// 0x0x80779618 (address_range)
void scene_Effects_80779618(void);

// 0x0x80779f18 (address_range)
void scene_Effects_80779f18(u32);

// 0x0x80779f90 (address_range)
void scene_Effects_80779f90(void);

// 0x0x8077a020 (address_range)
int * scene_Effects_8077a020(int, u32);

// 0x0x8077a0dc (address_range)
int Effects_validate_8077a0dc(int, int);

// 0x0x8077a12c (address_range)
void scene_Effects_8077a12c(int);

// 0x0x8077a514 (address_range)
void scene_Effects_8077a514(int);

// 0x0x8077a5e8 (address_range)
void scene_Effects_8077a5e8(void);

// 0x0x8077a774 (address_range)
void scene_Effects_8077a774(void);

// 0x0x8077b4ec (address_range)
void scene_Effects_8077b4ec(void);

// 0x0x8077b804 (address_range)
void scene_Effects_8077b804(u32);

// 0x0x8077b83c (address_range)
int scene_Effects_8077b83c(int, u32, u32, int);

// 0x0x8077b9bc (address_range)
void scene_Effects_8077b9bc(int);

// 0x0x8077ba70 (address_range)
void Effects_assertFail_8077ba70(void);

// 0x0x8077bab8 (address_range)
void Effects_assertFail_8077bab8(void);

// 0x0x8077bb24 (address_range)
void Effects_validate_8077bb24(uint);

// 0x0x8077c120 (address_range)
int Effects_validate_8077c120(int, int);

// 0x0x8077c190 (address_range)
void scene_Effects_8077c190(int);

// 0x0x8077c210 (address_range)
void scene_Effects_8077c210(void);

// 0x0x8077c7e4 (address_range)
void Effects_validate_8077c7e4(double, double, u32, u32, int, u32);

// 0x0x8077c934 (address_range)
int Effects_validate_8077c934(int, int);

// 0x0x8077c974 (address_range)
void Effects_validate_8077c974(double, double, u32, u32, int, u16);

// 0x0x8077cacc (address_range)
int Effects_validate_8077cacc(int, int);

// 0x0x8077cb0c (address_range)
void Effects_validate_8077cb0c(double, double, u32, u32, int, u32);

// 0x0x8077cc64 (address_range)
int Effects_validate_8077cc64(int, int);

// 0x0x8077cca4 (address_range)
u32 Effects_validate_8077cca4(int);

// 0x0x8077cd70 (address_range)
u32 Effects_validate_8077cd70(int);

// 0x0x8077ce3c (address_range)
u32 Effects_validate_8077ce3c(int);

// 0x0x8077cf94 (address_range)
void scene_Effects_8077cf94(int);

// 0x0x8077d0a8 (address_range)
void scene_Effects_8077d0a8(void);

// 0x0x8077d584 (address_range)
void scene_Effects_8077d584(void);

// 0x0x8077da6c (address_range)
void scene_Effects_8077da6c(void);

// 0x0x8077df48 (address_range)
void scene_Effects_8077df48(int, uint);

// 0x0x8077e058 (address_range)
void scene_Effects_8077e058(int, uint);

// 0x0x8077e16c (address_range)
void scene_Effects_8077e16c(int, int);

// 0x0x8077e2dc (address_range)
u32 scene_Effects_8077e2dc(int, int, u32, u32);

// 0x0x8077e39c (address_range)
void scene_Effects_8077e39c(u32, u32, u32, u32);

// 0x0x8077e3f0 (address_range)
void scene_Effects_8077e3f0(u32, u32, u32, u32);

// 0x0x8077e444 (address_range)
void scene_Effects_8077e444(u32, u32, u32, u32);

// 0x0x8077e498 (address_range)
void scene_Effects_8077e498(int, uint, uint);

// 0x0x8077e688 (address_range)
void scene_Effects_8077e688(int, uint, uint);

// 0x0x8077e878 (address_range)
void scene_Effects_8077e878(int, uint, uint);

// 0x0x8077ea68 (address_range)
u32 scene_Effects_8077ea68(int);

// 0x0x8077eaa8 (address_range)
u32 scene_Effects_8077eaa8(int);

// 0x0x8077eae8 (address_range)
u32 scene_Effects_8077eae8(int);

// 0x0x8077eb28 (address_range)
uint scene_Effects_8077eb28(int, u32, u32, int, uint);

// 0x0x8077eca8 (address_range)
uint scene_Effects_8077eca8(int, u32, u32, int, uint);

// 0x0x8077ee2c (address_range)
void scene_Effects_8077ee2c(int, u32, u32, u32, uint);

// 0x0x8077efa4 (address_range)
void scene_Effects_8077efa4(u32, u32, u32);

// 0x0x8077efc0 (address_range)
void scene_Effects_8077efc0(void);

// 0x0x8077f014 (address_range)
u32 scene_Effects_8077f014(u32);

#ifdef __cplusplus
}
#endif
