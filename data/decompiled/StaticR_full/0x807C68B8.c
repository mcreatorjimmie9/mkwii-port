/* Function at 0x807C68B8, size=276 bytes */
/* Stack frame: 64 bytes */

int FUN_807C68B8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* li r0, 0 */ // 0x807C68BC
    r6 = r3;
    /* li r8, 0 */ // 0x807C68C4
    *(8 + r1) = r0; // stw @ 0x807C68C8
    *(0xc + r1) = r0; // stw @ 0x807C68D0
    *(0x10 + r1) = r0; // stw @ 0x807C68D4
    *(0x14 + r1) = r0; // stw @ 0x807C68D8
    *(0x18 + r1) = r0; // stw @ 0x807C68DC
    *(0x1c + r1) = r0; // stw @ 0x807C68E0
    *(0x20 + r1) = r0; // stw @ 0x807C68E4
    *(0x24 + r1) = r0; // stw @ 0x807C68E8
    *(0x28 + r1) = r0; // stw @ 0x807C68EC
    *(0x2c + r1) = r0; // stw @ 0x807C68F0
    *(0x30 + r1) = r0; // stw @ 0x807C68F4
    *(0x34 + r1) = r0; // stw @ 0x807C68F8
    /* b 0x807c6924 */ // 0x807C68FC
    r7 = *(0x148 + r6); // lwz @ 0x807C6900
    r0 = *(0x14 + r7); // lwz @ 0x807C6904
    if (<) goto 0x0x807c691c;
    /* slwi r0, r0, 2 */ // 0x807C6910
    r4 = r5 + r0; // 0x807C6914
    *(-4 + r4) = r7; // stw @ 0x807C6918
    r6 = r6 + 8; // 0x807C691C
    r8 = r8 + 1; // 0x807C6920
    r0 = *(0x17c + r3); // lwz @ 0x807C6924
    if (<) goto 0x0x807c6900;
    /* li r0, 2 */ // 0x807C6930
    /* li r5, 0 */ // 0x807C6938
    /* mtctr r0 */ // 0x807C693C
    r0 = *(0 + r4); // lwz @ 0x807C6940
    if (==) goto 0x0x807c6954;
    *(0x14c + r3) = r0; // stw @ 0x807C694C
    r3 = r3 + 8; // 0x807C6950
    r0 = *(4 + r4); // lwz @ 0x807C6954
    if (==) goto 0x0x807c6968;
    *(0x14c + r3) = r0; // stw @ 0x807C6960
    r3 = r3 + 8; // 0x807C6964
    r0 = *(8 + r4); // lwz @ 0x807C6968
    if (==) goto 0x0x807c697c;
    *(0x14c + r3) = r0; // stw @ 0x807C6974
    r3 = r3 + 8; // 0x807C6978
    r0 = *(0xc + r4); // lwz @ 0x807C697C
    if (==) goto 0x0x807c6990;
    *(0x14c + r3) = r0; // stw @ 0x807C6988
    r3 = r3 + 8; // 0x807C698C
    r0 = *(0x10 + r4); // lwz @ 0x807C6990
    if (==) goto 0x0x807c69a4;
    *(0x14c + r3) = r0; // stw @ 0x807C699C
    r3 = r3 + 8; // 0x807C69A0
    r0 = *(0x14 + r4); // lwz @ 0x807C69A4
    if (==) goto 0x0x807c69b8;
    *(0x14c + r3) = r0; // stw @ 0x807C69B0
    r3 = r3 + 8; // 0x807C69B4
    r4 = r4 + 0x18; // 0x807C69B8
    r5 = r5 + 5; // 0x807C69BC
    if (counter-- != 0) goto 0x0x807c6940;
    return;
}