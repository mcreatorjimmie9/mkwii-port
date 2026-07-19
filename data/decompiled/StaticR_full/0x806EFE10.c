/* Function at 0x806EFE10, size=264 bytes */
/* Stack frame: 0 bytes */

int FUN_806EFE10(int r3, int r4, int r5)
{
    /* li r0, 3 */ // 0x806EFE10
    /* li r5, 0 */ // 0x806EFE14
    /* mtctr r0 */ // 0x806EFE18
    /* clrlwi r0, r5, 0x18 */ // 0x806EFE1C
    /* mulli r0, r0, 0x30 */ // 0x806EFE20
    r4 = r3 + r0; // 0x806EFE24
    r4 = *(0x34 + r4); // lwz @ 0x806EFE28
    if (>) goto 0x0x806efe38;
    /* b 0x806efe3c */ // 0x806EFE34
    /* li r4, -1 */ // 0x806EFE38
    if (==) goto 0x0x806efe54;
    r3 = r3 + r0; // 0x806EFE44
    r0 = *(0x38 + r3); // lwz @ 0x806EFE48
    /* srwi r3, r0, 0x1f */ // 0x806EFE4C
    return;
    r5 = r5 + 1; // 0x806EFE54
    /* clrlwi r0, r5, 0x18 */ // 0x806EFE58
    /* mulli r0, r0, 0x30 */ // 0x806EFE5C
    r4 = r3 + r0; // 0x806EFE60
    r4 = *(0x34 + r4); // lwz @ 0x806EFE64
    if (>) goto 0x0x806efe74;
    /* b 0x806efe78 */ // 0x806EFE70
    /* li r4, -1 */ // 0x806EFE74
    if (==) goto 0x0x806efe90;
    r3 = r3 + r0; // 0x806EFE80
    r0 = *(0x38 + r3); // lwz @ 0x806EFE84
    /* srwi r3, r0, 0x1f */ // 0x806EFE88
    return;
    r5 = r5 + 1; // 0x806EFE90
    /* clrlwi r0, r5, 0x18 */ // 0x806EFE94
    /* mulli r0, r0, 0x30 */ // 0x806EFE98
    r4 = r3 + r0; // 0x806EFE9C
    r4 = *(0x34 + r4); // lwz @ 0x806EFEA0
    if (>) goto 0x0x806efeb0;
    /* b 0x806efeb4 */ // 0x806EFEAC
    /* li r4, -1 */ // 0x806EFEB0
    if (==) goto 0x0x806efecc;
    r3 = r3 + r0; // 0x806EFEBC
    r0 = *(0x38 + r3); // lwz @ 0x806EFEC0
    /* srwi r3, r0, 0x1f */ // 0x806EFEC4
    return;
    r5 = r5 + 1; // 0x806EFECC
    /* clrlwi r0, r5, 0x18 */ // 0x806EFED0
    /* mulli r0, r0, 0x30 */ // 0x806EFED4
    r4 = r3 + r0; // 0x806EFED8
    r4 = *(0x34 + r4); // lwz @ 0x806EFEDC
    if (>) goto 0x0x806efeec;
    /* b 0x806efef0 */ // 0x806EFEE8
    /* li r4, -1 */ // 0x806EFEEC
    if (==) goto 0x0x806eff08;
    r3 = r3 + r0; // 0x806EFEF8
    r0 = *(0x38 + r3); // lwz @ 0x806EFEFC
    /* srwi r3, r0, 0x1f */ // 0x806EFF00
    return;
    r5 = r5 + 1; // 0x806EFF08
    if (counter-- != 0) goto 0x0x806efe1c;
    /* li r3, 2 */ // 0x806EFF10
    return;
}