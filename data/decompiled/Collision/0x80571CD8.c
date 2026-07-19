/*
 * Address: 0x80571CD8
 * REL Offset: 0x0005F43C
 * Function: PlayerSub18_checkPlayerCollision
 * Size: 655 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_checkPlayerCollision(/* unknown params */)
{

    /* 0x5F43C */ r3 = *(r5);
    /* 0x5F440 */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x5F444 */ // cmpwi r5, 3
    /* 0x5F448 */ if (0x64 != 0) goto loc_0x0064;
    /* 0x5F44C */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5F450 */ // cmpwi r4, 0
    /* 0x5F454 */ if (0x3c != 0) goto loc_0x003C;
    /* 0x5F458 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F45C */ // clrlwi r4, r0, 0x18
    /* 0x5F460 */ // clrlwi r5, r19, 0x18
    /* 0x5F464 */ r12 = *(r3);
    /* 0x5F468 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5F46C */ // mtctr r12
    /* 0x5F470 */ // bctrl 
    /* 0x5F474 */ goto loc_0x00C4;
    /* 0x5F478 */ // cmpwi r4, 1
    /* 0x5F47C */ if (0xc4 != 0) goto loc_0x00C4;
    /* 0x5F480 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F484 */ // clrlwi r4, r0, 0x18
    /* 0x5F488 */ // clrlwi r5, r19, 0x18
    /* 0x5F48C */ r12 = *(r3);
    /* 0x5F490 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5F494 */ // mtctr r12
    /* 0x5F498 */ // bctrl 
    /* 0x5F49C */ goto loc_0x00C4;
    /* 0x5F4A0 */ // cmpwi r5, 9
    /* 0x5F4A4 */ if (0x74 == 0) goto loc_0x0074;
    /* 0x5F4A8 */ // cmpwi r5, 0xa
    /* 0x5F4AC */ if (0xc4 != 0) goto loc_0x00C4;
    /* 0x5F4B0 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5F4B4 */ // cmpwi r4, 0
    /* 0x5F4B8 */ if (0xa0 != 0) goto loc_0x00A0;
    /* 0x5F4BC */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F4C0 */ // clrlwi r4, r0, 0x18
    /* 0x5F4C4 */ // clrlwi r5, r19, 0x18
    /* 0x5F4C8 */ r12 = *(r3);
    /* 0x5F4CC */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5F4D0 */ // mtctr r12
    /* 0x5F4D4 */ // bctrl 
    /* 0x5F4D8 */ goto loc_0x00C4;
    /* 0x5F4DC */ // cmpwi r4, 1
    /* 0x5F4E0 */ if (0xc4 != 0) goto loc_0x00C4;
    /* 0x5F4E4 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F4E8 */ // clrlwi r4, r0, 0x18
    /* 0x5F4EC */ // clrlwi r5, r19, 0x18
    /* 0x5F4F0 */ r12 = *(r3);
    /* 0x5F4F4 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5F4F8 */ // mtctr r12
    /* 0x5F4FC */ // bctrl 
    /* 0x5F500 */ r3 = r30 + 0x4;
    /* 0x5F504 */ sub_0x0001FC24();
    /* 0x5F508 */ r3 = r31;
    /* 0x5F50C */ sub_0x0001FC48();
    /* 0x5F510 */ goto loc_0x0478;
    /* 0x5F514 */ r18 = 0x1 /* 1 */;
    /* 0x5F518 */ goto loc_0x0478;
    /* 0x5F51C */ // cmpwi r24, 0
    /* 0x5F520 */ if (0xf8 == 0) goto loc_0x00F8;
    /* 0x5F524 */ // cmpwi r23, 0
    /* 0x5F528 */ if (0xf8 != 0) goto loc_0x00F8;
    /* 0x5F52C */ // cmpwi r21, 0
    /* 0x5F530 */ if (0x110 == 0) goto loc_0x0110;
    /* 0x5F534 */ // cmpwi r24, 0
    /* 0x5F538 */ if (0x46c != 0) goto loc_0x046C;
    /* 0x5F53C */ // cmpwi r22, 0
    /* 0x5F540 */ if (0x46c != 0) goto loc_0x046C;
    /* 0x5F544 */ // cmpwi r23, 0
    /* 0x5F548 */ if (0x46c == 0) goto loc_0x046C;
    /* 0x5F54C */ // cmpwi r23, 0
    /* 0x5F550 */ r0 = 0x0 /* 0 */;
    /* 0x5F554 */ r3 = 0x0 /* 0 */;
    /* 0x5F558 */ if (0x130 == 0) goto loc_0x0130;
    /* 0x5F55C */ // cmpwi r24, 0
    /* 0x5F560 */ if (0x130 != 0) goto loc_0x0130;
    /* 0x5F564 */ r0 = 0x1 /* 1 */;
    /* 0x5F568 */ goto loc_0x0144;
    /* 0x5F56C */ // cmpwi r24, 0
    /* 0x5F570 */ if (0x144 == 0) goto loc_0x0144;
    /* 0x5F574 */ // cmpwi r23, 0
    /* 0x5F578 */ if (0x144 != 0) goto loc_0x0144;
    /* 0x5F57C */ r3 = 0x1 /* 1 */;
    /* 0x5F580 */ // cmpwi r0, 0
    /* 0x5F584 */ if (0x2d4 == 0) goto loc_0x02D4;
    /* 0x5F588 */ r3 = r31;
    /* 0x5F58C */ sub_0x0001EDC4();
    /* 0x5F590 */ r19 = r3;
    /* 0x5F594 */ r3 = r30 + 0x4;
    /* 0x5F598 */ sub_0x0001F088();
    /* 0x5F59C */ r12 = *(u32*)(r3 + 0xC);
    /* 0x5F5A0 */ // clrlwi r8, r19, 0x18
    /* 0x5F5A4 */ r4 = 0xD /* 13 */;
    /* 0x5F5A8 */ r5 = 0x1 /* 1 */;
    /* 0x5F5AC */ r12 = *(u32*)(r12 + 0xC);
    /* 0x5F5B0 */ r6 = 0x0 /* 0 */;
    /* 0x5F5B4 */ r7 = 0x0 /* 0 */;
    /* 0x5F5B8 */ r9 = 0x0 /* 0 */;
    /* 0x5F5BC */ // mtctr r12
    /* 0x5F5C0 */ // bctrl 
    /* 0x5F5C4 */ // cmpwi r3, 0
    /* 0x5F5C8 */ if (0x478 == 0) goto loc_0x0478;
    /* 0x5F5CC */ r3 = r30 + 0x4;
    /* 0x5F5D0 */ sub_0x0001EAFC();
    /* 0x5F5D4 */ r12 = *(r3);
    /* 0x5F5D8 */ r4 = 0x110 /* 272 */;
    /* 0x5F5DC */ f1 = *(f32*)(r28 + 0x0);
    /* 0x5F5E0 */ r12 = *(u32*)(r12 + 0xE4);
    /* 0x5F5E4 */ // mtctr r12
    /* 0x5F5E8 */ // bctrl 
    /* 0x5F5EC */ r3 = r31;
    /* 0x5F5F0 */ r4 = 0x5 /* 5 */;
    /* 0x5F5F4 */ sub_0x0001EB18();
    /* 0x5F5F8 */ f1 = *(f32*)(r28 + 0x4);
    /* 0x5F5FC */ r3 = r31;
    /* 0x5F600 */ r4 = 0x1C /* 28 */;
    /* 0x5F604 */ r5 = 0x1 /* 1 */;
    /* 0x5F608 */ sub_0x0001E784();
    /* 0x5F60C */ // cmpwi r29, 0
    /* 0x5F610 */ if (0x2c0 == 0) goto loc_0x02C0;
    /* 0x5F614 */ r3 = r30 + 0x4;
    /* 0x5F618 */ sub_0x0001EDC4();
    /* 0x5F61C */ r19 = r3;
    /* 0x5F620 */ r3 = r31;
    /* 0x5F624 */ sub_0x0001EDC4();
    /* 0x5F628 */ r4 = 0x00000;
    /* 0x5F62C */ r5 = 0x00000;
    /* 0x5F630 */ r4 = *(r4);
    /* 0x5F634 */ r0 = r3;
    /* 0x5F638 */ r3 = *(r5);
    /* 0x5F63C */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x5F640 */ // cmpwi r5, 3
    /* 0x5F644 */ if (0x260 != 0) goto loc_0x0260;
    /* 0x5F648 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5F64C */ // cmpwi r4, 0
    /* 0x5F650 */ if (0x238 != 0) goto loc_0x0238;
    /* 0x5F654 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F658 */ // clrlwi r4, r0, 0x18
    /* 0x5F65C */ // clrlwi r5, r19, 0x18
    /* 0x5F660 */ r12 = *(r3);
    /* 0x5F664 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F668 */ // mtctr r12
    /* 0x5F66C */ // bctrl 
    /* 0x5F670 */ goto loc_0x02C0;
    /* 0x5F674 */ // cmpwi r4, 1
    /* 0x5F678 */ if (0x2c0 != 0) goto loc_0x02C0;
    /* 0x5F67C */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F680 */ // clrlwi r4, r0, 0x18
    /* 0x5F684 */ // clrlwi r5, r19, 0x18
    /* 0x5F688 */ r12 = *(r3);
    /* 0x5F68C */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F690 */ // mtctr r12
    /* 0x5F694 */ // bctrl 
    /* 0x5F698 */ goto loc_0x02C0;
    /* 0x5F69C */ // cmpwi r5, 9
    /* 0x5F6A0 */ if (0x270 == 0) goto loc_0x0270;
    /* 0x5F6A4 */ // cmpwi r5, 0xa
    /* 0x5F6A8 */ if (0x2c0 != 0) goto loc_0x02C0;
    /* 0x5F6AC */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5F6B0 */ // cmpwi r4, 0
    /* 0x5F6B4 */ if (0x29c != 0) goto loc_0x029C;
    /* 0x5F6B8 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F6BC */ // clrlwi r4, r0, 0x18
    /* 0x5F6C0 */ // clrlwi r5, r19, 0x18
    /* 0x5F6C4 */ r12 = *(r3);
    /* 0x5F6C8 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F6CC */ // mtctr r12
    /* 0x5F6D0 */ // bctrl 
    /* 0x5F6D4 */ goto loc_0x02C0;
    /* 0x5F6D8 */ // cmpwi r4, 1
    /* 0x5F6DC */ if (0x2c0 != 0) goto loc_0x02C0;
    /* 0x5F6E0 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F6E4 */ // clrlwi r4, r0, 0x18
    /* 0x5F6E8 */ // clrlwi r5, r19, 0x18
    /* 0x5F6EC */ r12 = *(r3);
    /* 0x5F6F0 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F6F4 */ // mtctr r12
    /* 0x5F6F8 */ // bctrl 
    /* 0x5F6FC */ r3 = r30 + 0x4;
    /* 0x5F700 */ sub_0x0001FC48();
    /* 0x5F704 */ r3 = r31;
    /* 0x5F708 */ sub_0x0001FC24();
    /* 0x5F70C */ goto loc_0x0478;
    /* 0x5F710 */ // cmpwi r3, 0
    /* 0x5F714 */ if (0x464 == 0) goto loc_0x0464;
    /* 0x5F718 */ r3 = r30 + 0x4;
    /* 0x5F71C */ sub_0x0001EDC4();
    /* 0x5F720 */ r19 = r3;
    /* 0x5F724 */ r3 = r31;
    /* 0x5F728 */ sub_0x0001F088();
    /* 0x5F72C */ r12 = *(u32*)(r3 + 0xC);
    /* 0x5F730 */ // clrlwi r8, r19, 0x18
    /* 0x5F734 */ r4 = 0xD /* 13 */;
    /* 0x5F738 */ r5 = 0x1 /* 1 */;
    /* 0x5F73C */ r12 = *(u32*)(r12 + 0xC);
    /* 0x5F740 */ r6 = 0x0 /* 0 */;
    /* 0x5F744 */ r7 = 0x0 /* 0 */;
    /* 0x5F748 */ r9 = 0x0 /* 0 */;
    /* 0x5F74C */ // mtctr r12
    /* 0x5F750 */ // bctrl 
    /* 0x5F754 */ // cmpwi r3, 0
    /* 0x5F758 */ if (0x478 == 0) goto loc_0x0478;
    /* 0x5F75C */ r3 = r31;
    /* 0x5F760 */ sub_0x0001EAFC();
    /* 0x5F764 */ r12 = *(r3);
    /* 0x5F768 */ r4 = 0x110 /* 272 */;
    /* 0x5F76C */ f1 = *(f32*)(r28 + 0x0);
    /* 0x5F770 */ r12 = *(u32*)(r12 + 0xE4);
    /* 0x5F774 */ // mtctr r12
    /* 0x5F778 */ // bctrl 
    /* 0x5F77C */ r3 = r30 + 0x4;
    /* 0x5F780 */ r4 = 0x5 /* 5 */;
    /* 0x5F784 */ sub_0x0001EB18();
    /* 0x5F788 */ f1 = *(f32*)(r28 + 0x4);
    /* 0x5F78C */ r3 = r30 + 0x4;
    /* 0x5F790 */ r4 = 0x1C /* 28 */;
    /* 0x5F794 */ r5 = 0x1 /* 1 */;
    /* 0x5F798 */ sub_0x0001E784();
    /* 0x5F79C */ // cmpwi r29, 0
    /* 0x5F7A0 */ if (0x450 == 0) goto loc_0x0450;
    /* 0x5F7A4 */ r3 = r31;
    /* 0x5F7A8 */ sub_0x0001EDC4();
    /* 0x5F7AC */ r19 = r3;
    /* 0x5F7B0 */ r3 = r30 + 0x4;
    /* 0x5F7B4 */ sub_0x0001EDC4();
    /* 0x5F7B8 */ r4 = 0x00000;
    /* 0x5F7BC */ r5 = 0x00000;
    /* 0x5F7C0 */ r4 = *(r4);
    /* 0x5F7C4 */ r0 = r3;
    /* 0x5F7C8 */ r3 = *(r5);
    /* 0x5F7CC */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x5F7D0 */ // cmpwi r5, 3
    /* 0x5F7D4 */ if (0x3f0 != 0) goto loc_0x03F0;
    /* 0x5F7D8 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5F7DC */ // cmpwi r4, 0
    /* 0x5F7E0 */ if (0x3c8 != 0) goto loc_0x03C8;
    /* 0x5F7E4 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F7E8 */ // clrlwi r4, r0, 0x18
    /* 0x5F7EC */ // clrlwi r5, r19, 0x18
    /* 0x5F7F0 */ r12 = *(r3);
    /* 0x5F7F4 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F7F8 */ // mtctr r12
    /* 0x5F7FC */ // bctrl 
    /* 0x5F800 */ goto loc_0x0450;
    /* 0x5F804 */ // cmpwi r4, 1
    /* 0x5F808 */ if (0x450 != 0) goto loc_0x0450;
    /* 0x5F80C */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F810 */ // clrlwi r4, r0, 0x18
    /* 0x5F814 */ // clrlwi r5, r19, 0x18
    /* 0x5F818 */ r12 = *(r3);
    /* 0x5F81C */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F820 */ // mtctr r12
    /* 0x5F824 */ // bctrl 
    /* 0x5F828 */ goto loc_0x0450;
    /* 0x5F82C */ // cmpwi r5, 9
    /* 0x5F830 */ if (0x400 == 0) goto loc_0x0400;
    /* 0x5F834 */ // cmpwi r5, 0xa
    /* 0x5F838 */ if (0x450 != 0) goto loc_0x0450;
    /* 0x5F83C */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5F840 */ // cmpwi r4, 0
    /* 0x5F844 */ if (0x42c != 0) goto loc_0x042C;
    /* 0x5F848 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F84C */ // clrlwi r4, r0, 0x18
    /* 0x5F850 */ // clrlwi r5, r19, 0x18
    /* 0x5F854 */ r12 = *(r3);
    /* 0x5F858 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F85C */ // mtctr r12
    /* 0x5F860 */ // bctrl 
    /* 0x5F864 */ goto loc_0x0450;
    /* 0x5F868 */ // cmpwi r4, 1
    /* 0x5F86C */ if (0x450 != 0) goto loc_0x0450;
    /* 0x5F870 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5F874 */ // clrlwi r4, r0, 0x18
    /* 0x5F878 */ // clrlwi r5, r19, 0x18
    /* 0x5F87C */ r12 = *(r3);
    /* 0x5F880 */ r12 = *(u32*)(r12 + 0x2C);
    /* 0x5F884 */ // mtctr r12
    /* 0x5F888 */ // bctrl 
    /* 0x5F88C */ r3 = r30 + 0x4;
    /* 0x5F890 */ sub_0x0001FC24();
    /* 0x5F894 */ r3 = r31;
    /* 0x5F898 */ sub_0x0001FC48();
    /* 0x5F89C */ goto loc_0x0478;
    /* 0x5F8A0 */ r18 = 0x1 /* 1 */;
    /* 0x5F8A4 */ goto loc_0x0478;
    /* 0x5F8A8 */ r18 = 0x1 /* 1 */;
    /* 0x5F8AC */ goto loc_0x0478;
    /* 0x5F8B0 */ r18 = 0x1 /* 1 */;
    /* 0x5F8B4 */ // cmpwi r18, 0
    /* 0x5F8B8 */ if (0xa3c == 0) goto loc_0x0A3C;
    /* 0x5F8BC */ r3 = r31;
    /* 0x5F8C0 */ r4 = r1 + 0x14;
    /* 0x5F8C4 */ sub_0x0001EFAC();
    /* 0x5F8C8 */ r3 = r31;
    /* 0x5F8CC */ sub_0x0001EAE4();
    /* 0x5F8D0 */ r5 = r3;
    /* 0x5F8D4 */ r3 = r1 + 0x14;
    /* 0x5F8D8 */ r4 = r3;
    /* 0x5F8DC */ r6 = 0x1 /* 1 */;
    /* 0x5F8E0 */ r5 = r5 + 0x5C;
    /* 0x5F8E4 */ sub_0x00038650();
    /* 0x5F8E8 */ r3 = r1 + 0x20;
    /* 0x5F8EC */ r4 = r1 + 0x80;
    /* 0x5F8F0 */ r5 = r1 + 0x14;
    /* 0x5F8F4 */ sub_0x000387EC();
    /* 0x5F8F8 */ r3 = r1 + 0x20;
    /* 0x5F8FC */ sub_0xFFFFFFFFFFFE3F1C();
    /* 0x5F900 */ // cmpwi r30, 0
    /* 0x5F904 */ r18 = r30;
    /* 0x5F908 */ if (0x4d4 == 0) goto loc_0x04D4;
    /* 0x5F90C */ r18 = r30 + 0x4;
    /* 0x5F910 */ r3 = r18;
    /* 0x5F914 */ r4 = r1 + 0x8;
    /* 0x5F918 */ sub_0x0001EFAC();
    /* 0x5F91C */ r3 = r18;
    /* 0x5F920 */ sub_0x0001EAE4();
    /* 0x5F924 */ r5 = r3;
    /* 0x5F928 */ r3 = r1 + 0x8;
    /* 0x5F92C */ r4 = r3;
    /* 0x5F930 */ r6 = 0x1 /* 1 */;
    /* 0x5F934 */ r5 = r5 + 0x5C;
    /* 0x5F938 */ sub_0x00038650();
    /* 0x5F93C */ r3 = r1 + 0x2C;
    /* 0x5F940 */ r4 = r1 + 0x20;
    /* 0x5F944 */ r5 = r1 + 0x8;
    /* 0x5F948 */ sub_0x000387EC();
    /* 0x5F94C */ r3 = r1 + 0x2C;
    /* 0x5F950 */ sub_0xFFFFFFFFFFFE3F1C();
    /* 0x5F954 */ r3 = *(r31);
    /* 0x5F958 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5F95C */ r0 = *(u32*)(r3 + 0xC);
    /* 0x5F960 */ // rlwinm. r0, r0, 0, 4, 4
    /* 0x5F964 */ if (0x554 != 0) goto loc_0x0554;
    /* 0x5F968 */ // cmpwi r30, 0
    /* 0x5F96C */ r4 = r30;
    /* 0x5F970 */ if (0x53c == 0) goto loc_0x053C;
    /* 0x5F974 */ r4 = r30 + 0x4;
    /* 0x5F978 */ f1 = *(f32*)(r28 + 0x4);
    /* 0x5F97C */ r3 = r30;
    /* 0x5F980 */ r5 = r31;
    /* 0x5F984 */ r6 = r1 + 0x20;
    /* 0x5F988 */ r7 = r1 + 0x80;
    /* 0x5F98C */ sub_0x00000AE4();
    /* 0x5F990 */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5F994 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5F998 */ r0 = *(u32*)(r3 + 0xC);
    /* 0x5F99C */ // rlwinm. r0, r0, 0, 4, 4
    /* 0x5F9A0 */ if (0x590 != 0) goto loc_0x0590;
    /* 0x5F9A4 */ // cmpwi r30, 0
    /* 0x5F9A8 */ r5 = r30;
    /* 0x5F9AC */ if (0x578 == 0) goto loc_0x0578;
    /* 0x5F9B0 */ r5 = r30 + 0x4;
    /* 0x5F9B4 */ f1 = *(f32*)(r28 + 0x14);
    /* 0x5F9B8 */ r3 = r30;
    /* 0x5F9BC */ r4 = r31;
    /* 0x5F9C0 */ r6 = r1 + 0x2C;
    /* 0x5F9C4 */ r7 = r1 + 0x80;
    /* 0x5F9C8 */ sub_0x00000AE4();
    /* 0x5F9CC */ r3 = r30 + 0x4;
    /* 0x5F9D0 */ sub_0x0001EDA8();
    /* 0x5F9D4 */ r4 = r1 + 0x50;
    /* 0x5F9D8 */ r5 = 0x1 /* 1 */;
    /* 0x5F9DC */ r6 = 0x0 /* 0 */;
    /* 0x5F9E0 */ sub_0x00259A98();
    /* 0x5F9E4 */ r3 = r31;
    /* 0x5F9E8 */ sub_0x0001EDA8();
    /* 0x5F9EC */ r4 = r1 + 0x50;
    /* 0x5F9F0 */ r5 = 0x1 /* 1 */;
    /* 0x5F9F4 */ r6 = 0x0 /* 0 */;
    /* 0x5F9F8 */ sub_0x00259A98();
    /* 0x5F9FC */ r3 = r30 + 0x4;
    /* 0x5FA00 */ sub_0x0001EDD4();
    /* 0x5FA04 */ // cmpwi r3, 1
    /* 0x5FA08 */ if (0x600 != 0) goto loc_0x0600;
    /* 0x5FA0C */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5FA10 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5FA14 */ r0 = *(u32*)(r3 + 0x4);
    /* 0x5FA18 */ // rlwinm. r0, r0, 0, 2, 2
    /* 0x5FA1C */ if (0x600 == 0) goto loc_0x0600;
    /* 0x5FA20 */ r3 = r31;
    /* 0x5FA24 */ sub_0x0001EDC4();
    /* 0x5FA28 */ r18 = r3;
    /* 0x5FA2C */ r3 = r30 + 0x4;
    /* 0x5FA30 */ sub_0x0001EAE4();
    /* 0x5FA34 */ // clrlwi r4, r18, 0x18
    /* 0x5FA38 */ sub_0x00008294();
    /* 0x5FA3C */ r3 = r31;
    /* 0x5FA40 */ sub_0x0001EDD4();
    /* 0x5FA44 */ // cmpwi r3, 1
    /* 0x5FA48 */ if (0x640 != 0) goto loc_0x0640;
    /* 0x5FA4C */ r3 = *(r31);
    /* 0x5FA50 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5FA54 */ r0 = *(u32*)(r3 + 0x4);
    /* 0x5FA58 */ // rlwinm. r0, r0, 0, 2, 2
    /* 0x5FA5C */ if (0x640 == 0) goto loc_0x0640;
    /* 0x5FA60 */ r3 = r30 + 0x4;
    /* 0x5FA64 */ sub_0x0001EDC4();
    /* 0x5FA68 */ r18 = r3;
    /* 0x5FA6C */ r3 = r31;
    /* 0x5FA70 */ sub_0x0001EAE4();
    /* 0x5FA74 */ // clrlwi r4, r18, 0x18
    /* 0x5FA78 */ sub_0x00008294();
    /* 0x5FA7C */ r3 = *(u32*)(r30 + 0x4);
    /* 0x5FA80 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5FA84 */ r0 = *(u32*)(r3 + 0x4);
    /* 0x5FA88 */ // rlwinm. r4, r0, 0, 5, 5
    /* 0x5FA8C */ if (0x820 == 0) goto loc_0x0820;
    /* 0x5FA90 */ r5 = *(r31);
    /* 0x5FA94 */ r12 = *(u32*)(r5 + 0x4);
    /* 0x5FA98 */ r18 = *(u32*)(r12 + 0x4);
    /* 0x5FA9C */ // rlwinm. r5, r18, 0, 5, 5
    /* 0x5FAA0 */ if (0x820 != 0) goto loc_0x0820;
    /* 0x5FAA4 */ r19 = *(u32*)(r12 + 0x8);
    /* 0x5FAA8 */ r7 = 0x1 /* 1 */;
    /* 0x5FAAC */ r8 = 0x1 /* 1 */;
    /* 0x5FAB0 */ r9 = 0x1 /* 1 */;
    /* 0x5FAB4 */ r5 = r19 & 0x102;
    /* 0x5FAB8 */ r10 = 0x1 /* 1 */;
    /* 0x5FABC */ r11 = 0x1 /* 1 */;
    /* 0x5FAC0 */ if (0x6a0 != 0) goto loc_0x06A0;
    /* 0x5FAC4 */ r5 = 0x20C0000;
    /* 0x5FAC8 */ r6 = *(u32*)(r12 + 0xC);
    /* 0x5FACC */ r5 = r5 + 0x6000;
    /* 0x5FAD0 */ // and. r5, r6, r5
    /* 0x5FAD4 */ if (0x6a0 != 0) goto loc_0x06A0;
    /* 0x5FAD8 */ r11 = 0x0 /* 0 */;
    /* 0x5FADC */ // cmpwi r11, 0
    /* 0x5FAE0 */ if (0x6b4 != 0) goto loc_0x06B4;
    /* 0x5FAE4 */ // rlwinm. r5, r18, 0, 0x1b, 0x1b
    /* 0x5FAE8 */ if (0x6b4 != 0) goto loc_0x06B4;
    /* 0x5FAEC */ r10 = 0x0 /* 0 */;
    /* 0x5FAF0 */ // cmpwi r10, 0
    /* 0x5FAF4 */ if (0x6cc != 0) goto loc_0x06CC;
    /* 0x5FAF8 */ r5 = *(u32*)(r12 + 0x14);
    /* 0x5FAFC */ // rlwinm. r5, r5, 0, 0x18, 0x18
    /* 0x5FB00 */ if (0x6cc != 0) goto loc_0x06CC;
    /* 0x5FB04 */ r9 = 0x0 /* 0 */;
    /* 0x5FB08 */ // cmpwi r9, 0
    /* 0x5FB0C */ if (0x6e8 != 0) goto loc_0x06E8;
    /* 0x5FB10 */ r5 = 0x-80000000;
    /* 0x5FB14 */ r5 = r5 + 0x19;
    /* 0x5FB18 */ // and. r5, r19, r5
    /* 0x5FB1C */ if (0x6e8 != 0) goto loc_0x06E8;
    /* 0x5FB20 */ r8 = 0x0 /* 0 */;
    /* 0x5FB24 */ // cmpwi r8, 0
    /* 0x5FB28 */ if (0x708 != 0) goto loc_0x0708;
    /* 0x5FB2C */ r5 = 0xA010000;
    /* 0x5FB30 */ r6 = *(u32*)(r12 + 0xC);
    /* 0x5FB34 */ r5 = r5 + 0x-8000;
    /* 0x5FB38 */ // and. r5, r6, r5
    /* 0x5FB3C */ if (0x708 != 0) goto loc_0x0708;
    /* 0x5FB40 */ r7 = 0x0 /* 0 */;
    /* 0x5FB44 */ // cmpwi r7, 0
    /* 0x5FB48 */ if (0x820 != 0) goto loc_0x0820;
    /* 0x5FB4C */ // cmpwi r29, 0
    /* 0x5FB50 */ if (0x72c == 0) goto loc_0x072C;
    /* 0x5FB54 */ // cmpwi r27, 0
    /* 0x5FB58 */ if (0x72c != 0) goto loc_0x072C;
    /* 0x5FB5C */ r3 = r31;
    /* 0x5FB60 */ sub_0x0001EAE4();
    /* 0x5FB64 */ sub_0x0000FCD0();
    /* 0x5FB68 */ // cmpwi r27, 0
    /* 0x5FB6C */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FB70 */ r3 = r30 + 0x4;
    /* 0x5FB74 */ sub_0x0001EDC4();
    /* 0x5FB78 */ r18 = r3;
    /* 0x5FB7C */ r3 = r31;
    /* 0x5FB80 */ sub_0x0001EDC4();
    /* 0x5FB84 */ r4 = 0x00000;
    /* 0x5FB88 */ r5 = 0x00000;
    /* 0x5FB8C */ r4 = *(r4);
    /* 0x5FB90 */ r0 = r3;
    /* 0x5FB94 */ r3 = *(r5);
    /* 0x5FB98 */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x5FB9C */ // cmpwi r5, 3
    /* 0x5FBA0 */ if (0x7bc != 0) goto loc_0x07BC;
    /* 0x5FBA4 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5FBA8 */ // cmpwi r4, 0
    /* 0x5FBAC */ if (0x794 != 0) goto loc_0x0794;
    /* 0x5FBB0 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FBB4 */ // clrlwi r4, r0, 0x18
    /* 0x5FBB8 */ // clrlwi r5, r18, 0x18
    /* 0x5FBBC */ r12 = *(r3);
    /* 0x5FBC0 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FBC4 */ // mtctr r12
    /* 0x5FBC8 */ // bctrl 
    /* 0x5FBCC */ goto loc_0x09F0;
    /* 0x5FBD0 */ // cmpwi r4, 1
    /* 0x5FBD4 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FBD8 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FBDC */ // clrlwi r4, r0, 0x18
    /* 0x5FBE0 */ // clrlwi r5, r18, 0x18
    /* 0x5FBE4 */ r12 = *(r3);
    /* 0x5FBE8 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FBEC */ // mtctr r12
    /* 0x5FBF0 */ // bctrl 
    /* 0x5FBF4 */ goto loc_0x09F0;
    /* 0x5FBF8 */ // cmpwi r5, 9
    /* 0x5FBFC */ if (0x7cc == 0) goto loc_0x07CC;
    /* 0x5FC00 */ // cmpwi r5, 0xa
    /* 0x5FC04 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FC08 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5FC0C */ // cmpwi r4, 0
    /* 0x5FC10 */ if (0x7f8 != 0) goto loc_0x07F8;
    /* 0x5FC14 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FC18 */ // clrlwi r4, r0, 0x18
    /* 0x5FC1C */ // clrlwi r5, r18, 0x18
    /* 0x5FC20 */ r12 = *(r3);
    /* 0x5FC24 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FC28 */ // mtctr r12
    /* 0x5FC2C */ // bctrl 
    /* 0x5FC30 */ goto loc_0x09F0;
    /* 0x5FC34 */ // cmpwi r4, 1
    /* 0x5FC38 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FC3C */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FC40 */ // clrlwi r4, r0, 0x18
    /* 0x5FC44 */ // clrlwi r5, r18, 0x18
    /* 0x5FC48 */ r12 = *(r3);
    /* 0x5FC4C */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FC50 */ // mtctr r12
    /* 0x5FC54 */ // bctrl 
    /* 0x5FC58 */ goto loc_0x09F0;
    /* 0x5FC5C */ // cmpwi r4, 0
    /* 0x5FC60 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FC64 */ r11 = *(u32*)(r3 + 0x8);
    /* 0x5FC68 */ r6 = 0x1 /* 1 */;
    /* 0x5FC6C */ r7 = 0x1 /* 1 */;
    /* 0x5FC70 */ r8 = 0x1 /* 1 */;
    /* 0x5FC74 */ r4 = r11 & 0x102;
    /* 0x5FC78 */ r9 = 0x1 /* 1 */;
    /* 0x5FC7C */ r10 = 0x1 /* 1 */;
    /* 0x5FC80 */ if (0x860 != 0) goto loc_0x0860;
    /* 0x5FC84 */ r4 = 0x20C0000;
    /* 0x5FC88 */ r5 = *(u32*)(r3 + 0xC);
    /* 0x5FC8C */ r4 = r4 + 0x6000;
    /* 0x5FC90 */ // and. r4, r5, r4
    /* 0x5FC94 */ if (0x860 != 0) goto loc_0x0860;
    /* 0x5FC98 */ r10 = 0x0 /* 0 */;
    /* 0x5FC9C */ // cmpwi r10, 0
    /* 0x5FCA0 */ if (0x874 != 0) goto loc_0x0874;
    /* 0x5FCA4 */ // rlwinm. r0, r0, 0, 0x1b, 0x1b
    /* 0x5FCA8 */ if (0x874 != 0) goto loc_0x0874;
    /* 0x5FCAC */ r9 = 0x0 /* 0 */;
    /* 0x5FCB0 */ // cmpwi r9, 0
    /* 0x5FCB4 */ if (0x88c != 0) goto loc_0x088C;
    /* 0x5FCB8 */ r0 = *(u32*)(r3 + 0x14);
    /* 0x5FCBC */ // rlwinm. r0, r0, 0, 0x18, 0x18
    /* 0x5FCC0 */ if (0x88c != 0) goto loc_0x088C;
    /* 0x5FCC4 */ r8 = 0x0 /* 0 */;
    /* 0x5FCC8 */ // cmpwi r8, 0
    /* 0x5FCCC */ if (0x8a8 != 0) goto loc_0x08A8;
    /* 0x5FCD0 */ r4 = 0x-80000000;
    /* 0x5FCD4 */ r0 = r4 + 0x19;
    /* 0x5FCD8 */ // and. r0, r11, r0
    /* 0x5FCDC */ if (0x8a8 != 0) goto loc_0x08A8;
    /* 0x5FCE0 */ r7 = 0x0 /* 0 */;
    /* 0x5FCE4 */ // cmpwi r7, 0
    /* 0x5FCE8 */ if (0x8c8 != 0) goto loc_0x08C8;
    /* 0x5FCEC */ r4 = 0xA010000;
    /* 0x5FCF0 */ r3 = *(u32*)(r3 + 0xC);
    /* 0x5FCF4 */ r0 = r4 + 0x-8000;
    /* 0x5FCF8 */ // and. r0, r3, r0
    /* 0x5FCFC */ if (0x8c8 != 0) goto loc_0x08C8;
    /* 0x5FD00 */ r6 = 0x0 /* 0 */;
    /* 0x5FD04 */ // cmpwi r6, 0
    /* 0x5FD08 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FD0C */ r3 = *(r31);
    /* 0x5FD10 */ r3 = *(u32*)(r3 + 0x4);
    /* 0x5FD14 */ r0 = *(u32*)(r3 + 0x4);
    /* 0x5FD18 */ // rlwinm. r0, r0, 0, 5, 5
    /* 0x5FD1C */ if (0x9f0 == 0) goto loc_0x09F0;
    /* 0x5FD20 */ // cmpwi r29, 0
    /* 0x5FD24 */ if (0x900 == 0) goto loc_0x0900;
    /* 0x5FD28 */ // cmpwi r27, 0
    /* 0x5FD2C */ if (0x900 != 0) goto loc_0x0900;
    /* 0x5FD30 */ r3 = r30 + 0x4;
    /* 0x5FD34 */ sub_0x0001EAE4();
    /* 0x5FD38 */ sub_0x0000FCD0();
    /* 0x5FD3C */ // cmpwi r27, 0
    /* 0x5FD40 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FD44 */ r3 = r31;
    /* 0x5FD48 */ sub_0x0001EDC4();
    /* 0x5FD4C */ r18 = r3;
    /* 0x5FD50 */ r3 = r30 + 0x4;
    /* 0x5FD54 */ sub_0x0001EDC4();
    /* 0x5FD58 */ r4 = 0x00000;
    /* 0x5FD5C */ r5 = 0x00000;
    /* 0x5FD60 */ r4 = *(r4);
    /* 0x5FD64 */ r0 = r3;
    /* 0x5FD68 */ r3 = *(r5);
    /* 0x5FD6C */ r5 = *(u32*)(r4 + 0xB70);
    /* 0x5FD70 */ // cmpwi r5, 3
    /* 0x5FD74 */ if (0x990 != 0) goto loc_0x0990;
    /* 0x5FD78 */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5FD7C */ // cmpwi r4, 0
    /* 0x5FD80 */ if (0x968 != 0) goto loc_0x0968;
    /* 0x5FD84 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FD88 */ // clrlwi r4, r0, 0x18
    /* 0x5FD8C */ // clrlwi r5, r18, 0x18
    /* 0x5FD90 */ r12 = *(r3);
    /* 0x5FD94 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FD98 */ // mtctr r12
    /* 0x5FD9C */ // bctrl 
    /* 0x5FDA0 */ goto loc_0x09F0;
    /* 0x5FDA4 */ // cmpwi r4, 1
    /* 0x5FDA8 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FDAC */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FDB0 */ // clrlwi r4, r0, 0x18
    /* 0x5FDB4 */ // clrlwi r5, r18, 0x18
    /* 0x5FDB8 */ r12 = *(r3);
    /* 0x5FDBC */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FDC0 */ // mtctr r12
    /* 0x5FDC4 */ // bctrl 
    /* 0x5FDC8 */ goto loc_0x09F0;
    /* 0x5FDCC */ // cmpwi r5, 9
    /* 0x5FDD0 */ if (0x9a0 == 0) goto loc_0x09A0;
    /* 0x5FDD4 */ // cmpwi r5, 0xa
    /* 0x5FDD8 */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FDDC */ r4 = *(u32*)(r4 + 0xB78);
    /* 0x5FDE0 */ // cmpwi r4, 0
    /* 0x5FDE4 */ if (0x9cc != 0) goto loc_0x09CC;
    /* 0x5FDE8 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FDEC */ // clrlwi r4, r0, 0x18
    /* 0x5FDF0 */ // clrlwi r5, r18, 0x18
    /* 0x5FDF4 */ r12 = *(r3);
    /* 0x5FDF8 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FDFC */ // mtctr r12
    /* 0x5FE00 */ // bctrl 
    /* 0x5FE04 */ goto loc_0x09F0;
    /* 0x5FE08 */ // cmpwi r4, 1
    /* 0x5FE0C */ if (0x9f0 != 0) goto loc_0x09F0;
    /* 0x5FE10 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x5FE14 */ // clrlwi r4, r0, 0x18
    /* 0x5FE18 */ // clrlwi r5, r18, 0x18
    /* 0x5FE1C */ r12 = *(r3);
    /* 0x5FE20 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FE24 */ // mtctr r12
    /* 0x5FE28 */ // bctrl 
    /* 0x5FE2C */ r3 = r30 + 0x4;
    /* 0x5FE30 */ sub_0x0001EAE4();
    /* 0x5FE34 */ r12 = *(u32*)(r3 + 0xC);
    /* 0x5FE38 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FE3C */ // mtctr r12
    /* 0x5FE40 */ // bctrl 
    /* 0x5FE44 */ r3 = r31;
    /* 0x5FE48 */ sub_0x0001EAE4();
    /* 0x5FE4C */ r12 = *(u32*)(r3 + 0xC);
    /* 0x5FE50 */ r12 = *(u32*)(r12 + 0x30);
    /* 0x5FE54 */ // mtctr r12
    /* 0x5FE58 */ // bctrl 
    /* 0x5FE5C */ r3 = r30 + 0x4;
    /* 0x5FE60 */ sub_0x0001EAFC();
    /* 0x5FE64 */ r18 = r3;
    /* 0x5FE68 */ r3 = r31;
    /* 0x5FE6C */ sub_0x0001EAFC();
    /* 0x5FE70 */ r4 = r18;
    /* 0x5FE74 */ sub_0x00197394();
}
