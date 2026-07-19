/*
 * Address: 0x80575108
 * REL Offset: 0x0006286C
 * Function: PlayerSub18_findCollision
 * Size: 76 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

f32 PlayerSub18_findCollision(/* unknown params */)
{
    // Has prologue (saves LR)

    /* 0x6286C */ r3 = r1 + 0x8;
    /* 0x62870 */ sub_0xFFFFFFFFFFFFEE50();
    /* 0x62874 */ f1 = *(f32*)(r30 + 0x20);
    /* 0x62878 */ r3 = 0x-1 /* -1 */;
    /* 0x6287C */ f0 = *(f32*)(r1 + 0x8);
    /* 0x62880 */ r0 = *(u32*)(r30 + 0x2C);
    /* 0x62884 */ f0 = f1 + f0;
    /* 0x62888 */ f2 = *(f32*)(r30 + 0x24);
    /* 0x6288C */ f1 = *(f32*)(r30 + 0x28);
    /* 0x62890 */ r0 = r0 | 0x8;
    /* 0x62894 */ *(f32*)(r30 + 0x20) = f0;
    /* 0x62898 */ f0 = *(f32*)(r1 + 0xC);
    /* 0x6289C */ f0 = f2 + f0;
    /* 0x628A0 */ *(f32*)(r30 + 0x24) = f0;
    /* 0x628A4 */ f0 = *(f32*)(r1 + 0x10);
    /* 0x628A8 */ f0 = f1 + f0;
    /* 0x628AC */ *(u32*)(r30 + 0x2C) = r0;
    /* 0x628B0 */ *(f32*)(r30 + 0x28) = f0;
    /* 0x628B4 */ // stack frame setup/save/restore
    /* 0x628B8 */ // stack frame setup/save/restore
    /* 0x628BC */ r0 = *(u32*)(r1 + 0x24);
    /* 0x628C0 */ // save/restore LR
    /* 0x628C4 */ r1 = r1 + 0x20;
    /* 0x628C8 */ return;
    /* 0x628CC */ // stwu r1, -0x10(r1)
    /* 0x628D0 */ // save/restore LR
    /* 0x628D4 */ r3 = r3 + 0x4;
    /* 0x628D8 */ *(u32*)(r1 + 0x14) = r0;
    /* 0x628DC */ sub_0x0001B6B4();
    /* 0x628E0 */ r4 = 0x00000;
    /* 0x628E4 */ f1 = *(f32*)(r3 + 0x20);
    /* 0x628E8 */ f0 = *(f32*)(r4 + 0x0);
    /* 0x628EC */ f0 = f1 * f0;
    /* 0x628F0 */ *(f32*)(r3 + 0x20) = f0;
    /* 0x628F4 */ r3 = 0x-1 /* -1 */;
    /* 0x628F8 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x628FC */ // save/restore LR
    /* 0x62900 */ r1 = r1 + 0x10;
    /* 0x62904 */ return;
    /* 0x62908 */ r4 = *(u32*)(r3 + 0x4);
    /* 0x6290C */ r4 = *(u32*)(r4 + 0x4);
    /* 0x62910 */ r0 = *(u32*)(r4 + 0xC);
    /* 0x62914 */ r0 = r0 | 0x1000;
    /* 0x62918 */ *(u32*)(r4 + 0xC) = r0;
    /* 0x6291C */ r0 = *(u32*)(r3 + 0x2C);
    /* 0x62920 */ r0 = r0 | 0x40;
    /* 0x62924 */ *(u32*)(r3 + 0x2C) = r0;
    /* 0x62928 */ r3 = 0x-1 /* -1 */;
    /* 0x6292C */ return;
    /* 0x62930 */ // stwu r1, -0x20(r1)
    /* 0x62934 */ // save/restore LR
    /* 0x62938 */ *(u32*)(r1 + 0x24) = r0;
    /* 0x6293C */ // stack frame setup/save/restore
    /* 0x62940 */ r31 = r4;
    /* 0x62944 */ // stack frame setup/save/restore
    /* 0x62948 */ r30 = r3;
    /* 0x6294C */ r3 = r3 + 0x4;
    /* 0x62950 */ sub_0x0001B6F8();
    /* 0x62954 */ r4 = r3;
    /* 0x62958 */ r5 = r31;
    /* 0x6295C */ r3 = r1 + 0x8;
    /* 0x62960 */ sub_0xFFFFFFFFFFFFEE50();
    /* 0x62964 */ r3 = r30 + 0x4;
    /* 0x62968 */ sub_0x0001B6B4();
    /* 0x6296C */ r5 = 0x00000;
    /* 0x62970 */ r4 = r1 + 0x8;
    /* 0x62974 */ f1 = *(f32*)(r5 + 0x0);
    /* 0x62978 */ r5 = 0x0 /* 0 */;
    /* 0x6297C */ sub_0x00011CEC();
    /* 0x62980 */ // stack frame setup/save/restore
    /* 0x62984 */ r3 = 0x-1 /* -1 */;
    /* 0x62988 */ // stack frame setup/save/restore
    /* 0x6298C */ r0 = *(u32*)(r1 + 0x24);
    /* 0x62990 */ // save/restore LR
    /* 0x62994 */ r1 = r1 + 0x20;
    /* 0x62998 */ return;
}
