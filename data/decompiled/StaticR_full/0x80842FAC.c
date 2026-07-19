/* Function at 0x80842FAC, size=124 bytes */
/* Stack frame: 0 bytes */

int FUN_80842FAC(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r5, 0 */ // 0x80842FAC
    /* lis r3, 0 */ // 0x80842FB0
    r5 = r5 + 0; // 0x80842FB4
    /* li r0, 0 */ // 0x80842FB8
    r7 = *(0x300 + r5); // lwz @ 0x80842FBC
    r6 = r5 + 0; // 0x80842FC0
    *(0x304 + r5) = r0; // stw @ 0x80842FC4
    /* lfs f1, 0(r3) */ // 0x80842FC8
    /* mtctr r7 */ // 0x80842FCC
    if (<=) goto 0x0x80843018;
    r3 = *(0 + r6); // lwz @ 0x80842FD8
    /* and. r3, r3, r4 */ // 0x80842FDC
    if (==) goto 0x0x80843010;
    /* lfs f0, 8(r6) */ // 0x80842FE4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80842FE8
    if (<=) goto 0x0x80842ffc;
    /* fmr f1, f0 */ // 0x80842FF0
    /* li r3, 1 */ // 0x80842FF4
    /* b 0x80843000 */ // 0x80842FF8
    /* li r3, 0 */ // 0x80842FFC
    if (==) goto 0x0x80843010;
    r0 = r6;
    *(0x304 + r5) = r6; // stw @ 0x8084300C
    r6 = r6 + 0xc; // 0x80843010
    if (counter-- != 0) goto 0x0x80842fd8;
    /* neg r3, r0 */ // 0x80843018
    r0 = r3 | r0; // 0x8084301C
    /* srwi r3, r0, 0x1f */ // 0x80843020
    return;
}