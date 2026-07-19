/* Function at 0x808ED344, size=188 bytes */
/* Stack frame: 0 bytes */

void FUN_808ED344(int r4)
{
    if (>=) goto 0x0x808ed36c;
    if (>=) goto 0x0x808ed360;
    if (>=) goto 0x0x808ed37c;
    /* b 0x808ed3d8 */ // 0x808ED35C
    if (>=) goto 0x0x808ed3a4;
    /* b 0x808ed390 */ // 0x808ED368
    if (==) goto 0x0x808ed3cc;
    if (>=) goto 0x0x808ed3d8;
    /* b 0x808ed3b8 */ // 0x808ED378
    r4 = r4 + 0xd53; // 0x808ED37C
    /* li r0, 0x1fa4 */ // 0x808ED380
    *(0x338 + r3) = r4; // stw @ 0x808ED384
    *(0x3e4 + r3) = r0; // stw @ 0x808ED388
    return;
    r4 = r4 + 0xd4f; // 0x808ED390
    /* li r0, 0x1fa5 */ // 0x808ED394
    *(0x338 + r3) = r4; // stw @ 0x808ED398
    *(0x3e4 + r3) = r0; // stw @ 0x808ED39C
    return;
    r4 = r4 + 0xd4b; // 0x808ED3A4
    /* li r0, 0x1fa6 */ // 0x808ED3A8
    *(0x338 + r3) = r4; // stw @ 0x808ED3AC
    *(0x3e4 + r3) = r0; // stw @ 0x808ED3B0
    return;
    r4 = r4 + 0xd47; // 0x808ED3B8
    /* li r0, 0x1fa7 */ // 0x808ED3BC
    *(0x338 + r3) = r4; // stw @ 0x808ED3C0
    *(0x3e4 + r3) = r0; // stw @ 0x808ED3C4
    return;
    /* li r0, 0x1fa8 */ // 0x808ED3CC
    *(0x3e4 + r3) = r0; // stw @ 0x808ED3D0
    return;
    if (<) goto 0x0x808ed3f4;
    if (>) goto 0x0x808ed3f4;
    r0 = r4 + 0x1f9d; // 0x808ED3E8
    *(0x3e4 + r3) = r0; // stw @ 0x808ED3EC
    return;
    r0 = r4 + 0x1fa7; // 0x808ED3F4
    *(0x3e4 + r3) = r0; // stw @ 0x808ED3F8
    return;
}