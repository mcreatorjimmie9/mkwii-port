/* Function at 0x806EFCA8, size=360 bytes */
/* Stack frame: 0 bytes */

int FUN_806EFCA8(int r3, int r4, int r5, int r6)
{
    /* li r0, 3 */ // 0x806EFCA8
    /* li r6, 0 */ // 0x806EFCAC
    /* mtctr r0 */ // 0x806EFCB0
    /* clrlwi r0, r6, 0x18 */ // 0x806EFCB4
    /* mulli r0, r0, 0x30 */ // 0x806EFCB8
    r4 = r3 + r0; // 0x806EFCBC
    r5 = *(0x34 + r4); // lwz @ 0x806EFCC0
    if (>) goto 0x0x806efcd4;
    r0 = r5;
    /* b 0x806efcd8 */ // 0x806EFCD0
    /* li r0, -1 */ // 0x806EFCD4
    if (==) goto 0x0x806efd04;
    r0 = *(0x20 + r4); // lwz @ 0x806EFCE0
    if (==) goto 0x0x806efd04;
    if (>) goto 0x0x806efcfc;
    r3 = *(0x34 + r4); // lwz @ 0x806EFCF4
    return;
    /* li r3, -1 */ // 0x806EFCFC
    return;
    r6 = r6 + 1; // 0x806EFD04
    /* clrlwi r0, r6, 0x18 */ // 0x806EFD08
    /* mulli r0, r0, 0x30 */ // 0x806EFD0C
    r4 = r3 + r0; // 0x806EFD10
    r5 = *(0x34 + r4); // lwz @ 0x806EFD14
    if (>) goto 0x0x806efd28;
    r0 = r5;
    /* b 0x806efd2c */ // 0x806EFD24
    /* li r0, -1 */ // 0x806EFD28
    if (==) goto 0x0x806efd58;
    r0 = *(0x20 + r4); // lwz @ 0x806EFD34
    if (==) goto 0x0x806efd58;
    if (>) goto 0x0x806efd50;
    r3 = *(0x34 + r4); // lwz @ 0x806EFD48
    return;
    /* li r3, -1 */ // 0x806EFD50
    return;
    r6 = r6 + 1; // 0x806EFD58
    /* clrlwi r0, r6, 0x18 */ // 0x806EFD5C
    /* mulli r0, r0, 0x30 */ // 0x806EFD60
    r4 = r3 + r0; // 0x806EFD64
    r5 = *(0x34 + r4); // lwz @ 0x806EFD68
    if (>) goto 0x0x806efd7c;
    r0 = r5;
    /* b 0x806efd80 */ // 0x806EFD78
    /* li r0, -1 */ // 0x806EFD7C
    if (==) goto 0x0x806efdac;
    r0 = *(0x20 + r4); // lwz @ 0x806EFD88
    if (==) goto 0x0x806efdac;
    if (>) goto 0x0x806efda4;
    r3 = *(0x34 + r4); // lwz @ 0x806EFD9C
    return;
    /* li r3, -1 */ // 0x806EFDA4
    return;
    r6 = r6 + 1; // 0x806EFDAC
    /* clrlwi r0, r6, 0x18 */ // 0x806EFDB0
    /* mulli r0, r0, 0x30 */ // 0x806EFDB4
    r4 = r3 + r0; // 0x806EFDB8
    r5 = *(0x34 + r4); // lwz @ 0x806EFDBC
    if (>) goto 0x0x806efdd0;
    r0 = r5;
    /* b 0x806efdd4 */ // 0x806EFDCC
    /* li r0, -1 */ // 0x806EFDD0
    if (==) goto 0x0x806efe00;
    r0 = *(0x20 + r4); // lwz @ 0x806EFDDC
    if (==) goto 0x0x806efe00;
    if (>) goto 0x0x806efdf8;
    r3 = *(0x34 + r4); // lwz @ 0x806EFDF0
    return;
    /* li r3, -1 */ // 0x806EFDF8
    return;
    r6 = r6 + 1; // 0x806EFE00
    if (counter-- != 0) goto 0x0x806efcb4;
    /* li r3, -1 */ // 0x806EFE08
    return;
}