/* Function at 0x80661BC0, size=220 bytes */
/* Stack frame: 0 bytes */

int FUN_80661BC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r6, 0 */ // 0x80661BC0
    /* li r12, 0 */ // 0x80661BC4
    r6 = r6 + 0; // 0x80661BC8
    /* li r11, 0 */ // 0x80661BCC
    /* li r8, 0 */ // 0x80661BD0
    /* li r9, 0 */ // 0x80661BD4
    /* li r0, 5 */ // 0x80661BD8
    /* b 0x80661c1c */ // 0x80661BDC
    r7 = r6;
    /* li r10, 0 */ // 0x80661BE4
    /* mtctr r0 */ // 0x80661BE8
    r5 = *(0 + r7); // lwz @ 0x80661BEC
    if (!=) goto 0x0x80661c08;
    r12 = r10;
    r11 = r9;
    /* li r8, 1 */ // 0x80661C00
    /* b 0x80661c14 */ // 0x80661C04
    r7 = r7 + 4; // 0x80661C08
    if (counter-- != 0) goto 0x0x80661bec;
    r6 = r6 + 0x14; // 0x80661C14
    r9 = r9 + 1; // 0x80661C18
    if (!=) goto 0x0x80661c2c;
    if (<) goto 0x0x80661be0;
    /* lis r5, 0 */ // 0x80661C2C
    /* li r6, 0 */ // 0x80661C30
    r5 = r5 + 0; // 0x80661C34
    /* b 0x80661c90 */ // 0x80661C38
    /* mulli r0, r11, 0x14 */ // 0x80661C3C
    /* slwi r4, r12, 2 */ // 0x80661C40
    r0 = r5 + r0; // 0x80661C44
    r4 = r4 + r0; // 0x80661C48
    /* b 0x80661c68 */ // 0x80661C4C
    r0 = *(0 + r4); // lwz @ 0x80661C50
    *(0xfc + r3) = r0; // stw @ 0x80661C58
    r3 = r3 + 4; // 0x80661C5C
    r6 = r6 + 1; // 0x80661C60
    r4 = r4 + 4; // 0x80661C64
    if (>=) goto 0x0x80661c78;
    if (<) goto 0x0x80661c50;
    /* li r12, 0 */ // 0x80661C7C
    /* srwi r4, r0, 0x1f */ // 0x80661C80
    /* clrlwi r0, r0, 0x1f */ // 0x80661C84
    r0 = r0 ^ r4; // 0x80661C88
    /* subf r11, r4, r0 */ // 0x80661C8C
    if (<) goto 0x0x80661c3c;
    return;
}