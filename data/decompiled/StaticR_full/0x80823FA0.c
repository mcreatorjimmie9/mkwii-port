/* Function at 0x80823FA0, size=120 bytes */
/* Stack frame: 0 bytes */

int FUN_80823FA0(int r3, int r4, int r5, int r6)
{
    r0 = *(0x8c + r3); // lwz @ 0x80823FA0
    /* li r6, 0 */ // 0x80823FA4
    if (==) goto 0x0x80823fd0;
    /* mulli r0, r0, 0x1c */ // 0x80823FB0
    /* lis r5, 0 */ // 0x80823FB4
    r5 = r5 + 0; // 0x80823FB8
    r5 = r5 + r0; // 0x80823FBC
    r0 = *(4 + r5); // lwz @ 0x80823FC0
    if (!=) goto 0x0x80823fd0;
    r6 = *(0x90 + r3); // lwz @ 0x80823FCC
    r0 = *(0x58 + r3); // lwz @ 0x80823FD0
    if (==) goto 0x0x80824010;
    r0 = *(0x82 + r3); // lbz @ 0x80823FDC
    if (!=) goto 0x0x80824010;
    r0 = *(0x74 + r3); // lwz @ 0x80823FE8
    /* lis r3, 0 */ // 0x80823FEC
    r3 = r3 + 0; // 0x80823FF0
    /* mulli r0, r0, 0x1c */ // 0x80823FF4
    r3 = r3 + r0; // 0x80823FF8
    r0 = *(4 + r3); // lwz @ 0x80823FFC
    if (!=) goto 0x0x80824010;
    r0 = *(8 + r3); // lwz @ 0x80824008
    r6 = r6 + r0; // 0x8082400C
    r3 = r6;
    return;
}