/* Function at 0x805D7F14, size=192 bytes */
/* Stack frame: 0 bytes */

int FUN_805D7F14(int r3, int r4, int r5, int r6, int r7)
{
    /* li r0, 5 */ // 0x805D7F14
    /* li r5, -1 */ // 0x805D7F18
    /* li r6, 0 */ // 0x805D7F1C
    /* li r7, 0 */ // 0x805D7F20
    /* mtctr r0 */ // 0x805D7F24
    /* addis r4, r3, 1 */ // 0x805D7F28
    r0 = *(-0x6d36 + r4); // lhz @ 0x805D7F2C
    if (<=) goto 0x0x805d7f40;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D7F40
    r7 = r7 + 1; // 0x805D7F44
    /* addis r4, r3, 1 */ // 0x805D7F48
    r0 = *(-0x6d36 + r4); // lhz @ 0x805D7F4C
    if (<=) goto 0x0x805d7f60;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D7F60
    r7 = r7 + 1; // 0x805D7F64
    /* addis r4, r3, 1 */ // 0x805D7F68
    r0 = *(-0x6d36 + r4); // lhz @ 0x805D7F6C
    if (<=) goto 0x0x805d7f80;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D7F80
    r7 = r7 + 1; // 0x805D7F84
    /* addis r4, r3, 1 */ // 0x805D7F88
    r0 = *(-0x6d36 + r4); // lhz @ 0x805D7F8C
    if (<=) goto 0x0x805d7fa0;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D7FA0
    r7 = r7 + 1; // 0x805D7FA4
    /* addis r4, r3, 1 */ // 0x805D7FA8
    r0 = *(-0x6d36 + r4); // lhz @ 0x805D7FAC
    if (<=) goto 0x0x805d7fc0;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D7FC0
    r7 = r7 + 1; // 0x805D7FC4
    if (counter-- != 0) goto 0x0x805d7f28;
    r3 = r5;
    return;
}