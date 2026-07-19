/* Function at 0x805E0ED8, size=228 bytes */
/* Stack frame: 0 bytes */

int FUN_805E0ED8(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x805E0ED8
    /* li r0, 4 */ // 0x805E0EDC
    /* li r5, 0 */ // 0x805E0EE0
    r4 = r4 + 0; // 0x805E0EE4
    /* mtctr r0 */ // 0x805E0EE8
    r0 = *(0 + r4); // lwz @ 0x805E0EEC
    if (!=) goto 0x0x805e0f00;
    r3 = r5;
    return;
    r0 = *(4 + r4); // lwz @ 0x805E0F00
    r5 = r5 + 1; // 0x805E0F04
    if (!=) goto 0x0x805e0f18;
    r3 = r5;
    return;
    r0 = *(8 + r4); // lwz @ 0x805E0F18
    r5 = r5 + 1; // 0x805E0F1C
    if (!=) goto 0x0x805e0f30;
    r3 = r5;
    return;
    r0 = *(0xc + r4); // lwz @ 0x805E0F30
    r5 = r5 + 1; // 0x805E0F34
    if (!=) goto 0x0x805e0f48;
    r3 = r5;
    return;
    r0 = *(0x10 + r4); // lwz @ 0x805E0F48
    r5 = r5 + 1; // 0x805E0F4C
    if (!=) goto 0x0x805e0f60;
    r3 = r5;
    return;
    r0 = *(0x14 + r4); // lwz @ 0x805E0F60
    r5 = r5 + 1; // 0x805E0F64
    if (!=) goto 0x0x805e0f78;
    r3 = r5;
    return;
    r0 = *(0x18 + r4); // lwz @ 0x805E0F78
    r5 = r5 + 1; // 0x805E0F7C
    if (!=) goto 0x0x805e0f90;
    r3 = r5;
    return;
    r0 = *(0x1c + r4); // lwz @ 0x805E0F90
    r5 = r5 + 1; // 0x805E0F94
    if (!=) goto 0x0x805e0fa8;
    r3 = r5;
    return;
    r5 = r5 + 1; // 0x805E0FA8
    r4 = r4 + 0x20; // 0x805E0FAC
    if (counter-- != 0) goto 0x0x805e0eec;
    /* li r3, -1 */ // 0x805E0FB4
    return;
}