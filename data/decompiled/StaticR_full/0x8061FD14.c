/* Function at 0x8061FD14, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_8061FD14(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8061FD14
    r0 = *(0 + r5); // lwz @ 0x8061FD18
    if (==) goto 0x0x8061fd40;
    /* lis r5, 0 */ // 0x8061FD24
    /* mulli r0, r3, 0xa80 */ // 0x8061FD28
    r5 = *(0 + r5); // lwz @ 0x8061FD2C
    /* mulli r3, r4, 0x38 */ // 0x8061FD30
    r0 = r5 + r0; // 0x8061FD34
    r3 = r3 + r0; // 0x8061FD38
    return;
    /* li r3, 0 */ // 0x8061FD40
    return;
}