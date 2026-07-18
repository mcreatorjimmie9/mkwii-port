/*
 * Address: 0x80570EEC
 * REL Offset: 0x0005E650
 * Function: processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb
 * Size: 198 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb(/* unknown params */)
{
    // Has prologue (saves LR)

    /* 0x5E650 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5E654 */ r0 = *(u16*)(r4 + 0x4);
    /* 0x5E658 */ r0 = ROTL(r0, 0x1b) & MASK(0x1d, 0x1f);
    /* 0x5E65C */ *(u32*)(r3 + 0x80) = r0;
    /* 0x5E660 */ r3 = *(u32*)(r31 + 0x4);
    /* 0x5E664 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5E668 */ r0 = *(u32*)(r3 + 0x8);
    /* 0x5E66C */ r0 = r0 | 0x8;
    /* 0x5E670 */ *(u32*)(r3 + 0x8) = r0;
    /* 0x5E674 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x5E678 */ // stack frame setup/save/restore
    /* 0x5E67C */ // save/restore LR
    /* 0x5E680 */ r1 = r1 + 0x10;
    /* 0x5E684 */ return;
    /* 0x5E688 */ // stwu r1, -0x20(r1)
    /* 0x5E68C */ // save/restore LR
    /* 0x5E690 */ *(u32*)(r1 + 0x24) = r0;
    /* 0x5E694 */ // stack frame setup/save/restore
    /* 0x5E698 */ r31 = r4;
    /* 0x5E69C */ // stack frame setup/save/restore
    /* 0x5E6A0 */ r30 = r3;
    /* 0x5E6A4 */ // stack frame setup/save/restore
    /* 0x5E6A8 */ r0 = *(r4);
    /* 0x5E6AC */ // rlwinm. r0, r0, 0, 7, 7
    /* 0x5E6B0 */ if (0x74 == 0) goto loc_0x0074;
    /* 0x5E6B4 */ r3 = r31;
    /* 0x5E6B8 */ r4 = 0x1000000;
    /* 0x5E6BC */ sub_0x00244884();
    /* 0x5E6C0 */ goto loc_0x0078;
    /* 0x5E6C4 */ r3 = 0x0 /* 0 */;
    /* 0x5E6C8 */ // cmpwi r3, 0
    /* 0x5E6CC */ if (0x9c == 0) goto loc_0x009C;
    /* 0x5E6D0 */ r3 = r30 + 0x4;
    /* 0x5E6D4 */ sub_0x0001F8E8();
    /* 0x5E6D8 */ r4 = 0x00000;
    /* 0x5E6DC */ r4 = *(r4);
    /* 0x5E6E0 */ r0 = *(u16*)(r4 + 0x4);
    /* 0x5E6E4 */ r4 = ROTL(r0, 0x1b) & MASK(0x1d, 0x1f);
    /* 0x5E6E8 */ sub_0x00197B18();
    /* 0x5E6EC */ r3 = r30;
    /* 0x5E6F0 */ r4 = r31;
    /* 0x5E6F4 */ r5 = 0x0 /* 0 */;
    /* 0x5E6F8 */ sub_0x000028C0();
    /* 0x5E6FC */ r0 = *(r31);
    /* 0x5E700 */ // rlwinm. r0, r0, 0, 0xd, 0xd
    /* 0x5E704 */ if (0x100 == 0) goto loc_0x0100;
    /* 0x5E708 */ r3 = r30 + 0x4;
    /* 0x5E70C */ sub_0x00020214();
    /* 0x5E710 */ r4 = 0x1 /* 1 */;
    /* 0x5E714 */ sub_0x001B790C();
    /* 0x5E718 */ r3 = r30 + 0x4;
    /* 0x5E71C */ sub_0x0001F360();
    /* 0x5E720 */ r29 = r3;
    /* 0x5E724 */ r3 = r30 + 0x4;
    /* 0x5E728 */ sub_0x0001FBB0();
    /* 0x5E72C */ r4 = 0x00000;
    /* 0x5E730 */ // clrlwi r0, r3, 0x18
    /* 0x5E734 */ r3 = *(r4);
    /* 0x5E738 */ r0 = r0 * 0x248;
    /* 0x5E73C */ r4 = r29;
    /* 0x5E740 */ r3 = *(u32*)(r3 + 0x14);
    /* 0x5E744 */ r3 = r3 + r0;
    /* 0x5E748 */ sub_0x00225678();
    /* 0x5E74C */ goto loc_0x0110;
    /* 0x5E750 */ r3 = r30 + 0x4;
    /* 0x5E754 */ sub_0x00020214();
    /* 0x5E758 */ r4 = 0x0 /* 0 */;
    /* 0x5E75C */ sub_0x001B790C();
    /* 0x5E760 */ r0 = *(r31);
    /* 0x5E764 */ // rlwinm. r0, r0, 0, 0xe, 0xe
    /* 0x5E768 */ if (0x12c == 0) goto loc_0x012C;
    /* 0x5E76C */ r3 = r31;
    /* 0x5E770 */ r4 = 0x20000;
    /* 0x5E774 */ sub_0x00244884();
    /* 0x5E778 */ goto loc_0x0130;
    /* 0x5E77C */ r3 = 0x0 /* 0 */;
    /* 0x5E780 */ // cmpwi r3, 0
    /* 0x5E784 */ if (0x168 == 0) goto loc_0x0168;
    /* 0x5E788 */ r4 = 0x00000;
    /* 0x5E78C */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5E790 */ r4 = *(r4);
    /* 0x5E794 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5E798 */ r0 = *(u16*)(r4 + 0x4);
    /* 0x5E79C */ r0 = ROTL(r0, 0x1b) & MASK(0x1d, 0x1f);
    /* 0x5E7A0 */ *(u32*)(r3 + 0x80) = r0;
    /* 0x5E7A4 */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5E7A8 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5E7AC */ r0 = *(u32*)(r3 + 0x8);
    /* 0x5E7B0 */ r0 = r0 | 0x8;
    /* 0x5E7B4 */ *(u32*)(r3 + 0x8) = r0;
    /* 0x5E7B8 */ r0 = *(r31);
    /* 0x5E7BC */ // rlwinm. r0, r0, 0, 5, 5
    /* 0x5E7C0 */ if (0x184 == 0) goto loc_0x0184;
    /* 0x5E7C4 */ r3 = r31;
    /* 0x5E7C8 */ r4 = 0x4000000;
    /* 0x5E7CC */ sub_0x00244884();
    /* 0x5E7D0 */ goto loc_0x0188;
    /* 0x5E7D4 */ r3 = 0x0 /* 0 */;
    /* 0x5E7D8 */ // cmpwi r3, 0
    /* 0x5E7DC */ if (0x248 == 0) goto loc_0x0248;
    /* 0x5E7E0 */ r3 = 0x00000;
    /* 0x5E7E4 */ r3 = *(r3);
    /* 0x5E7E8 */ r4 = *(u16*)(r3 + 0x4);
    /* 0x5E7EC */ r0 = ROTL(r4, 0x1b) & MASK(0x1d, 0x1f);
    /* 0x5E7F0 */ // cmpwi r0, 1
    /* 0x5E7F4 */ if (0x1b4 != 0) goto loc_0x01B4;
    /* 0x5E7F8 */ r3 = r30 + 0x4;
    /* 0x5E7FC */ r4 = ROTL(r4, 0x18) & MASK(0x1d, 0x1f);
    /* 0x5E800 */ sub_0x00020AD0();
    /* 0x5E804 */ r3 = 0x00000;
    /* 0x5E808 */ r3 = *(r3);
    /* 0x5E80C */ r0 = *(u16*)(r3 + 0x4);
    /* 0x5E810 */ // rlwinm. r3, r0, 0x1b, 0x1d, 0x1f
    /* 0x5E814 */ if (0x1e0 != 0) goto loc_0x01E0;
    /* 0x5E818 */ r3 = r30 + 0x4;
    /* 0x5E81C */ r4 = ROTL(r0, 0x18) & MASK(0x1d, 0x1f);
    /* 0x5E820 */ sub_0x00020AD0();
    /* 0x5E824 */ r3 = r30 + 0x4;
    /* 0x5E828 */ sub_0x0001FF34();
    /* 0x5E82C */ goto loc_0x0248;
    /* 0x5E830 */ // cmpwi r3, 2
    /* 0x5E834 */ if (0x210 != 0) goto loc_0x0210;
    /* 0x5E838 */ r3 = r30 + 0x4;
    /* 0x5E83C */ sub_0x0001FBB0();
    /* 0x5E840 */ r4 = 0x00000;
    /* 0x5E844 */ r0 = ROTL(r3, 2) & MASK(0x16, 0x1d);
    /* 0x5E848 */ r3 = *(r4);
    /* 0x5E84C */ r4 = r31;
    /* 0x5E850 */ r3 = *(u32*)(r3 + 0x68);
    /* 0x5E854 */ r3 = *(u32*)(r3 + r0);
    /* 0x5E858 */ sub_0x0013CD90();
    /* 0x5E85C */ goto loc_0x0248;
    /* 0x5E860 */ // cmpwi r3, 4
    /* 0x5E864 */ if (0x248 != 0) goto loc_0x0248;
    /* 0x5E868 */ r3 = r30 + 0x4;
    /* 0x5E86C */ sub_0x00020A58();
    /* 0x5E870 */ r4 = 0x1 /* 1 */;
    /* 0x5E874 */ sub_0x00045DA4();
    /* 0x5E878 */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5E87C */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5E880 */ r0 = *(u32*)(r3 + 0x10);
    /* 0x5E884 */ r0 = r0 | 0x800;
    /* 0x5E888 */ *(u32*)(r3 + 0x10) = r0;
    /* 0x5E88C */ r0 = *(u32*)(r30 + 0x2C);
    /* 0x5E890 */ r0 = r0 | 0x1;
    /* 0x5E894 */ *(u32*)(r30 + 0x2C) = r0;
    /* 0x5E898 */ r0 = *(u32*)(r1 + 0x24);
    /* 0x5E89C */ // stack frame setup/save/restore
    /* 0x5E8A0 */ // stack frame setup/save/restore
    /* 0x5E8A4 */ // stack frame setup/save/restore
    /* 0x5E8A8 */ // save/restore LR
    /* 0x5E8AC */ r1 = r1 + 0x20;
    /* 0x5E8B0 */ return;
    /* 0x5E8B4 */ // stwu r1, -0x10(r1)
    /* 0x5E8B8 */ // save/restore LR
    /* 0x5E8BC */ r5 = 0x20E80000;
    /* 0x5E8C0 */ *(u32*)(r1 + 0x14) = r0;
    /* 0x5E8C4 */ r5 = r5 + 0xFFF;
    /* 0x5E8C8 */ // stack frame setup/save/restore
    /* 0x5E8CC */ r31 = r3;
    /* 0x5E8D0 */ // stack frame setup/save/restore
    /* 0x5E8D4 */ r30 = r4;
    /* 0x5E8D8 */ r0 = *(r4);
    /* 0x5E8DC */ // and. r0, r0, r5
    /* 0x5E8E0 */ if (0x2a4 == 0) goto loc_0x02A4;
    /* 0x5E8E4 */ r3 = r30;
    /* 0x5E8E8 */ r4 = r5;
    /* 0x5E8EC */ sub_0x00244884();
    /* 0x5E8F0 */ goto loc_0x02A8;
    /* 0x5E8F4 */ r3 = 0x0 /* 0 */;
    /* 0x5E8F8 */ // cmpwi r3, 0
    /* 0x5E8FC */ if (0x2c8 == 0) goto loc_0x02C8;
    /* 0x5E900 */ r4 = 0x00000;
    /* 0x5E904 */ r3 = r31 + 0x4;
    /* 0x5E908 */ r4 = *(r4);
    /* 0x5E90C */ r0 = *(u16*)(r4 + 0x4);
    /* 0x5E910 */ r4 = ROTL(r0, 0x18) & MASK(0x1d, 0x1f);
    /* 0x5E914 */ sub_0x00020AD0();
    /* 0x5E918 */ r3 = 0x-2FEF0000;
    /* 0x5E91C */ r4 = *(r30);
    /* 0x5E920 */ r0 = r3 + 0x-1000;
    /* 0x5E924 */ // and. r0, r4, r0
    /* 0x5E928 */ if (0x2e8 == 0) goto loc_0x02E8;
    /* 0x5E92C */ r0 = *(u32*)(r31 + 0x2C);
    /* 0x5E930 */ r0 = r0 | 0x1;
    /* 0x5E934 */ *(u32*)(r31 + 0x2C) = r0;
    /* 0x5E938 */ r0 = *(r30);
    /* 0x5E93C */ // rlwinm. r0, r0, 0, 0x15, 0x15
    /* 0x5E940 */ if (0x300 == 0) goto loc_0x0300;
    /* 0x5E944 */ r0 = *(u32*)(r31 + 0x2C);
    /* 0x5E948 */ r0 = r0 | 0x2;
    /* 0x5E94C */ *(u32*)(r31 + 0x2C) = r0;
    /* 0x5E950 */ r0 = *(u32*)(r1 + 0x14);
    /* 0x5E954 */ // stack frame setup/save/restore
    /* 0x5E958 */ // stack frame setup/save/restore
    /* 0x5E95C */ // save/restore LR
    /* 0x5E960 */ r1 = r1 + 0x10;
    /* 0x5E964 */ return;
}
