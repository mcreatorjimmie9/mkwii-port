/*
 * Address: 0x805B9E10
 * REL Offset: 0x000A7574
 * Function: applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb
 * Size: 348 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb(/* unknown params */)
{
    // Has prologue (saves LR)

    /* 0xA7574 */ // beqlr 
    /* 0xA7578 */ r3 = *(u32*)(r3 + 0x18);
    /* 0xA757C */ goto loc_0x29CAD8;
    /* 0xA7580 */ return;
    /* 0xA7584 */ r3 = *(u32*)(r3 + 0x1C);
    /* 0xA7588 */ goto loc_0x298F78;
    /* 0xA758C */ r3 = *(u32*)(r3 + 0x24);
    /* 0xA7590 */ r0 = ROTL(r4, 2) & MASK(0x16, 0x1d);
    /* 0xA7594 */ r3 = *(u32*)(r3 + r0);
    /* 0xA7598 */ r3 = r3 + 0x8;
    /* 0xA759C */ return;
    /* 0xA75A0 */ r0 = *(u8*)(r3 + 0x20);
    /* 0xA75A4 */ // cmpwi r0, 0
    /* 0xA75A8 */ if (0x4c == 0) goto loc_0x004C;
    /* 0xA75AC */ r0 = r4 * 0xc;
    /* 0xA75B0 */ r3 = *(u32*)(r3 + 0x14);
    /* 0xA75B4 */ r3 = r3 + r0;
    /* 0xA75B8 */ r3 = *(u32*)(r3 + 0x18);
    /* 0xA75BC */ return;
    /* 0xA75C0 */ r3 = 0x0 /* 0 */;
    /* 0xA75C4 */ return;
    /* 0xA75C8 */ r0 = *(u8*)(r3 + 0x20);
    /* 0xA75CC */ // cmpwi r0, 0
    /* 0xA75D0 */ if (0x68 == 0) goto loc_0x0068;
    /* 0xA75D4 */ r3 = *(u32*)(r3 + 0x18);
    /* 0xA75D8 */ goto loc_0x29CB70;
    /* 0xA75DC */ r3 = 0x0 /* 0 */;
    /* 0xA75E0 */ return;
    /* 0xA75E4 */ r3 = *(u32*)(r3 + 0x24);
    /* 0xA75E8 */ r0 = ROTL(r4, 2) & MASK(0x16, 0x1d);
    /* 0xA75EC */ r3 = *(u32*)(r3 + r0);
    /* 0xA75F0 */ return;
    /* 0xA75F4 */ // stwu r1, -0x10(r1)
    /* 0xA75F8 */ // save/restore LR
    /* 0xA75FC */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7600 */ // stack frame setup/save/restore
    /* 0xA7604 */ r31 = 0x0 /* 0 */;
    /* 0xA7608 */ r0 = *(u8*)(r3 + 0x20);
    /* 0xA760C */ // cmpwi r0, 0
    /* 0xA7610 */ if (0xc0 == 0) goto loc_0x00C0;
    /* 0xA7614 */ r3 = *(u32*)(r3 + 0x18);
    /* 0xA7618 */ sub_0x0029CBA0();
    /* 0xA761C */ // cmpwi r3, 0
    /* 0xA7620 */ if (0xc0 == 0) goto loc_0x00C0;
    /* 0xA7624 */ r0 = *(u16*)(r3 + 0x24);
    /* 0xA7628 */ // clrlwi. r0, r0, 0x1f
    /* 0xA762C */ if (0xc0 == 0) goto loc_0x00C0;
    /* 0xA7630 */ r31 = *(u32*)(r3 + 0x20);
    /* 0xA7634 */ r3 = r31;
    /* 0xA7638 */ // stack frame setup/save/restore
    /* 0xA763C */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7640 */ // save/restore LR
    /* 0xA7644 */ r1 = r1 + 0x10;
    /* 0xA7648 */ return;
    /* 0xA764C */ r0 = ROTL(r4, 2) & MASK(0x16, 0x1d);
    /* 0xA7650 */ r3 = r3 + r0;
    /* 0xA7654 */ r3 = *(u32*)(r3 + 0x2C);
    /* 0xA7658 */ return;
    /* 0xA765C */ // stwu r1, -0x10(r1)
    /* 0xA7660 */ // save/restore LR
    /* 0xA7664 */ r3 = 0x00000;
    /* 0xA7668 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA766C */ r3 = *(r3);
    /* 0xA7670 */ r3 = *(r3);
    /* 0xA7674 */ r0 = *(r3);
    /* 0xA7678 */ // cmpwi r0, 0x4f
    /* 0xA767C */ if (0x194 == 0) goto loc_0x0194;
    /* 0xA7680 */ if (0x13c >= 0) goto loc_0x013C;
    /* 0xA7684 */ // cmpwi r0, 0x4b
    /* 0xA7688 */ if (0x12c >= 0) goto loc_0x012C;
    /* 0xA768C */ // cmpwi r0, 0x3f
    /* 0xA7690 */ if (0x194 >= 0) goto loc_0x0194;
    /* 0xA7694 */ // cmpwi r0, 0x3d
    /* 0xA7698 */ if (0x168 >= 0) goto loc_0x0168;
    /* 0xA769C */ goto loc_0x0194;
    /* 0xA76A0 */ // cmpwi r0, 0x4d
    /* 0xA76A4 */ if (0x194 == 0) goto loc_0x0194;
    /* 0xA76A8 */ if (0x168 >= 0) goto loc_0x0168;
    /* 0xA76AC */ goto loc_0x0170;
    /* 0xA76B0 */ // cmpwi r0, 0x54
    /* 0xA76B4 */ if (0x168 == 0) goto loc_0x0168;
    /* 0xA76B8 */ if (0x154 >= 0) goto loc_0x0154;
    /* 0xA76BC */ // cmpwi r0, 0x51
    /* 0xA76C0 */ if (0x194 >= 0) goto loc_0x0194;
    /* 0xA76C4 */ goto loc_0x0168;
    /* 0xA76C8 */ // cmpwi r0, 0x82
    /* 0xA76CC */ if (0x194 >= 0) goto loc_0x0194;
    /* 0xA76D0 */ // cmpwi r0, 0x7f
    /* 0xA76D4 */ if (0x168 >= 0) goto loc_0x0168;
    /* 0xA76D8 */ goto loc_0x0194;
    /* 0xA76DC */ r3 = 0x1 /* 1 */;
    /* 0xA76E0 */ goto loc_0x0198;
    /* 0xA76E4 */ sub_0x00288404();
    /* 0xA76E8 */ // clrlwi r4, r3, 0x18
    /* 0xA76EC */ r3 = 0x2 /* 2 */;
    /* 0xA76F0 */ r0 = r4 + 0x-2;
    /* 0xA76F4 */ r3 = r4 | r3;
    /* 0xA76F8 */ // srwi r0, r0, 1
    /* 0xA76FC */ r0 = r3 - r0;
    /* 0xA7700 */ // srwi r3, r0, 0x1f
    /* 0xA7704 */ goto loc_0x0198;
    /* 0xA7708 */ r3 = 0x0 /* 0 */;
    /* 0xA770C */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7710 */ // save/restore LR
    /* 0xA7714 */ r1 = r1 + 0x10;
    /* 0xA7718 */ return;
    /* 0xA771C */ // stwu r1, -0x10(r1)
    /* 0xA7720 */ // save/restore LR
    /* 0xA7724 */ r4 = 0x00000;
    /* 0xA7728 */ r5 = 0x5 /* 5 */;
    /* 0xA772C */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7730 */ r4 = r4 + 0x0;
    /* 0xA7734 */ r6 = 0x4 /* 4 */;
    /* 0xA7738 */ // stack frame setup/save/restore
    /* 0xA773C */ r31 = r3;
    /* 0xA7740 */ sub_0xFFFFFFFFFFFAA614();
    /* 0xA7744 */ r3 = 0x00000;
    /* 0xA7748 */ r0 = 0x0 /* 0 */;
    /* 0xA774C */ r3 = r3 + 0x0;
    /* 0xA7750 */ *(r31) = r3;
    /* 0xA7754 */ r3 = r31;
    /* 0xA7758 */ *(u8*)(r31 + 0x98) = r0;
    /* 0xA775C */ *(u16*)(r31 + 0x9A) = r0;
    /* 0xA7760 */ *(u16*)(r31 + 0x9C) = r0;
    /* 0xA7764 */ // stack frame setup/save/restore
    /* 0xA7768 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA776C */ // save/restore LR
    /* 0xA7770 */ r1 = r1 + 0x10;
    /* 0xA7774 */ return;
    /* 0xA7778 */ // stwu r1, -0x10(r1)
    /* 0xA777C */ // save/restore LR
    /* 0xA7780 */ // cmpwi r3, 0
    /* 0xA7784 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7788 */ // stack frame setup/save/restore
    /* 0xA778C */ r31 = r4;
    /* 0xA7790 */ // stack frame setup/save/restore
    /* 0xA7794 */ r30 = r3;
    /* 0xA7798 */ if (0x240 == 0) goto loc_0x0240;
    /* 0xA779C */ r4 = 0x0 /* 0 */;
    /* 0xA77A0 */ sub_0xFFFFFFFFFFFAA790();
    /* 0xA77A4 */ // cmpwi r31, 0
    /* 0xA77A8 */ if (0x240 <= 0) goto loc_0x0240;
    /* 0xA77AC */ r3 = r30;
    /* 0xA77B0 */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA77B4 */ r3 = r30;
    /* 0xA77B8 */ // stack frame setup/save/restore
    /* 0xA77BC */ // stack frame setup/save/restore
    /* 0xA77C0 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA77C4 */ // save/restore LR
    /* 0xA77C8 */ r1 = r1 + 0x10;
    /* 0xA77CC */ return;
    /* 0xA77D0 */ // stwu r1, -0x20(r1)
    /* 0xA77D4 */ // save/restore LR
    /* 0xA77D8 */ *(u32*)(r1 + 0x24) = r0;
    /* 0xA77DC */ // stack frame setup/save/restore
    /* 0xA77E0 */ // stack frame setup/save/restore
    /* 0xA77E4 */ // stack frame setup/save/restore
    /* 0xA77E8 */ r29 = r3;
    /* 0xA77EC */ sub_0xFFFFFFFFFFFAB208();
    /* 0xA77F0 */ r0 = *(u8*)(r29 + 0x98);
    /* 0xA77F4 */ // cmpwi r0, 0
    /* 0xA77F8 */ if (0x2d4 == 0) goto loc_0x02D4;
    /* 0xA77FC */ r4 = 0x00000;
    /* 0xA7800 */ r3 = *(u32*)(r29 + 0x24);
    /* 0xA7804 */ r4 = *(r4);
    /* 0xA7808 */ r4 = *(u32*)(r4 + 0x44);
    /* 0xA780C */ r4 = *(r4);
    /* 0xA7810 */ r31 = *(u16*)(r4 + 0x6);
    /* 0xA7814 */ r30 = *(u16*)(r4 + 0x4);
    /* 0xA7818 */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA781C */ *(u32*)(r1 + 0x8) = r3;
    /* 0xA7820 */ r4 = ROTL(r30, 0x1f) & MASK(0x11, 0x1f);
    /* 0xA7824 */ r0 = ROTL(r31, 0x1f) & MASK(0x11, 0x1f);
    /* 0xA7828 */ r3 = r1 + 0x8;
    /* 0xA782C */ r7 = *(u16*)(r29 + 0x9C);
    /* 0xA7830 */ r6 = *(u16*)(r29 + 0x9A);
    /* 0xA7834 */ // srwi r5, r7, 1
    /* 0xA7838 */ // srwi r8, r6, 1
    /* 0xA783C */ r4 = r4 - r8;
    /* 0xA7840 */ r5 = r0 - r5;
    /* 0xA7844 */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA7848 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA784C */ // stack frame setup/save/restore
    /* 0xA7850 */ // stack frame setup/save/restore
    /* 0xA7854 */ // stack frame setup/save/restore
    /* 0xA7858 */ // save/restore LR
    /* 0xA785C */ r1 = r1 + 0x20;
    /* 0xA7860 */ return;
    /* 0xA7864 */ *(u8*)(r3 + 0x98) = r4;
    /* 0xA7868 */ *(u16*)(r3 + 0x9A) = r5;
    /* 0xA786C */ *(u16*)(r3 + 0x9C) = r6;
    /* 0xA7870 */ return;
    /* 0xA7874 */ // stwu r1, -0x10(r1)
    /* 0xA7878 */ // save/restore LR
    /* 0xA787C */ r5 = 0x4 /* 4 */;
    /* 0xA7880 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7884 */ // stack frame setup/save/restore
    /* 0xA7888 */ r31 = r3;
    /* 0xA788C */ r3 = 0x28 /* 40 */;
    /* 0xA7890 */ r4 = *(u32*)(r31 + 0x10);
    /* 0xA7894 */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA7898 */ // cmpwi r3, 0
    /* 0xA789C */ if (0x334 == 0) goto loc_0x0334;
    /* 0xA78A0 */ r4 = r31;
    /* 0xA78A4 */ sub_0xFFFFFFFFFFFAA1EC();
    /* 0xA78A8 */ *(u32*)(r31 + 0x34) = r3;
    /* 0xA78AC */ r12 = *(u32*)(r3 + 0x18);
    /* 0xA78B0 */ r12 = *(u32*)(r12 + 0xC);
    /* 0xA78B4 */ // mtctr r12
    /* 0xA78B8 */ // bctrl 
    /* 0xA78BC */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA78C0 */ // stack frame setup/save/restore
    /* 0xA78C4 */ // save/restore LR
    /* 0xA78C8 */ r1 = r1 + 0x10;
    /* 0xA78CC */ return;
    /* 0xA78D0 */ // stwu r1, -0x20(r1)
    /* 0xA78D4 */ // save/restore LR
    /* 0xA78D8 */ // cmpwi r4, 0
    /* 0xA78DC */ *(u32*)(r1 + 0x24) = r0;
    /* 0xA78E0 */ // stack frame setup/save/restore
    /* 0xA78E4 */ r31 = r3;
    /* 0xA78E8 */ if (0x39c != 0) goto loc_0x039C;
    /* 0xA78EC */ r3 = *(u32*)(r3 + 0x18);
    /* 0xA78F0 */ r4 = r1 + 0x8;
    /* 0xA78F4 */ r5 = 0x40 /* 64 */;
    /* 0xA78F8 */ r6 = 0x40 /* 64 */;
    /* 0xA78FC */ r7 = 0x80 /* 128 */;
    /* 0xA7900 */ r8 = 0x80 /* 128 */;
    /* 0xA7904 */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA7908 */ *(u32*)(r31 + 0xA0) = r3;
    /* 0xA790C */ goto loc_0x03A0;
    /* 0xA7910 */ sub_0xFFFFFFFFFFFAAB18();
    /* 0xA7914 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA7918 */ // stack frame setup/save/restore
    /* 0xA791C */ // save/restore LR
    /* 0xA7920 */ r1 = r1 + 0x20;
    /* 0xA7924 */ return;
    /* 0xA7928 */ r0 = r4;
    /* 0xA792C */ r4 = *(u32*)(r3 + 0xA0);
    /* 0xA7930 */ r6 = r5;
    /* 0xA7934 */ r5 = r0;
    /* 0xA7938 */ goto loc_0xFFFFFFFFFFFABAE4;
    /* 0xA793C */ // stwu r1, -0x10(r1)
    /* 0xA7940 */ // save/restore LR
    /* 0xA7944 */ r5 = 0x1 /* 1 */;
    /* 0xA7948 */ r6 = 0x0 /* 0 */;
    /* 0xA794C */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7950 */ // stack frame setup/save/restore
    /* 0xA7954 */ r31 = r4;
    /* 0xA7958 */ r4 = 0x0 /* 0 */;
    /* 0xA795C */ // stack frame setup/save/restore
    /* 0xA7960 */ r30 = r3;
    /* 0xA7964 */ sub_0xFFFFFFFFFFFAA614();
    /* 0xA7968 */ r4 = 0x00000;
    /* 0xA796C */ *(u8*)(r30 + 0x98) = r31;
    /* 0xA7970 */ r4 = r4 + 0x0;
    /* 0xA7974 */ r3 = r30;
    /* 0xA7978 */ *(r30) = r4;
    /* 0xA797C */ // stack frame setup/save/restore
    /* 0xA7980 */ // stack frame setup/save/restore
    /* 0xA7984 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7988 */ // save/restore LR
    /* 0xA798C */ r1 = r1 + 0x10;
    /* 0xA7990 */ return;
    /* 0xA7994 */ // stwu r1, -0x10(r1)
    /* 0xA7998 */ // save/restore LR
    /* 0xA799C */ // cmpwi r3, 0
    /* 0xA79A0 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA79A4 */ // stack frame setup/save/restore
    /* 0xA79A8 */ r31 = r4;
    /* 0xA79AC */ // stack frame setup/save/restore
    /* 0xA79B0 */ r30 = r3;
    /* 0xA79B4 */ if (0x45c == 0) goto loc_0x045C;
    /* 0xA79B8 */ r4 = 0x0 /* 0 */;
    /* 0xA79BC */ sub_0xFFFFFFFFFFFAA790();
    /* 0xA79C0 */ // cmpwi r31, 0
    /* 0xA79C4 */ if (0x45c <= 0) goto loc_0x045C;
    /* 0xA79C8 */ r3 = r30;
    /* 0xA79CC */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA79D0 */ r3 = r30;
    /* 0xA79D4 */ // stack frame setup/save/restore
    /* 0xA79D8 */ // stack frame setup/save/restore
    /* 0xA79DC */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA79E0 */ // save/restore LR
    /* 0xA79E4 */ r1 = r1 + 0x10;
    /* 0xA79E8 */ return;
    /* 0xA79EC */ // stwu r1, -0x10(r1)
    /* 0xA79F0 */ // save/restore LR
    /* 0xA79F4 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA79F8 */ // stack frame setup/save/restore
    /* 0xA79FC */ r31 = r3;
    /* 0xA7A00 */ r0 = *(u8*)(r3 + 0x98);
    /* 0xA7A04 */ // cmpwi r0, 0
    /* 0xA7A08 */ if (0x4cc == 0) goto loc_0x04CC;
    /* 0xA7A0C */ r4 = *(u32*)(r31 + 0x10);
    /* 0xA7A10 */ r3 = 0x28 /* 40 */;
    /* 0xA7A14 */ r5 = 0x4 /* 4 */;
    /* 0xA7A18 */ sub_0xFFFFFFFFFFF9BDE4();
    /* 0xA7A1C */ // cmpwi r3, 0
    /* 0xA7A20 */ if (0x4b8 == 0) goto loc_0x04B8;
    /* 0xA7A24 */ r4 = r31;
    /* 0xA7A28 */ sub_0xFFFFFFFFFFFAA370();
    /* 0xA7A2C */ *(u32*)(r31 + 0x34) = r3;
    /* 0xA7A30 */ r12 = *(u32*)(r3 + 0x18);
    /* 0xA7A34 */ r12 = *(u32*)(r12 + 0xC);
    /* 0xA7A38 */ // mtctr r12
    /* 0xA7A3C */ // bctrl 
    /* 0xA7A40 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7A44 */ // stack frame setup/save/restore
    /* 0xA7A48 */ // save/restore LR
    /* 0xA7A4C */ r1 = r1 + 0x10;
    /* 0xA7A50 */ return;
    /* 0xA7A54 */ // stwu r1, -0x10(r1)
    /* 0xA7A58 */ // save/restore LR
    /* 0xA7A5C */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7A60 */ // stack frame setup/save/restore
    /* 0xA7A64 */ r31 = r3;
    /* 0xA7A68 */ sub_0xFFFFFFFFFFFEC988();
    /* 0xA7A6C */ r3 = 0x00000;
    /* 0xA7A70 */ r4 = 0x0 /* 0 */;
    /* 0xA7A74 */ r3 = r3 + 0x0;
    /* 0xA7A78 */ r0 = 0x1 /* 1 */;
    /* 0xA7A7C */ *(r31) = r3;
    /* 0xA7A80 */ r3 = r31;
    /* 0xA7A84 */ *(u8*)(r31 + 0x200) = r4;
    /* 0xA7A88 */ *(u8*)(r31 + 0x201) = r4;
    /* 0xA7A8C */ *(u32*)(r31 + 0x4C) = r0;
    /* 0xA7A90 */ // stack frame setup/save/restore
    /* 0xA7A94 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7A98 */ // save/restore LR
    /* 0xA7A9C */ r1 = r1 + 0x10;
    /* 0xA7AA0 */ return;
    /* 0xA7AA4 */ // stwu r1, -0x10(r1)
    /* 0xA7AA8 */ // save/restore LR
    /* 0xA7AAC */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7AB0 */ // stack frame setup/save/restore
    /* 0xA7AB4 */ r31 = r3;
    /* 0xA7AB8 */ sub_0xFFFFFFFFFFFED058();
    /* 0xA7ABC */ r3 = r31;
    /* 0xA7AC0 */ sub_0xFFFFFFFFFFFEB75C();
    /* 0xA7AC4 */ *(u32*)(r31 + 0x8) = r3;
    /* 0xA7AC8 */ r3 = r31;
    /* 0xA7ACC */ sub_0xFFFFFFFFFFFED880();
    /* 0xA7AD0 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7AD4 */ // stack frame setup/save/restore
    /* 0xA7AD8 */ // save/restore LR
    /* 0xA7ADC */ r1 = r1 + 0x10;
    /* 0xA7AE0 */ return;
}
