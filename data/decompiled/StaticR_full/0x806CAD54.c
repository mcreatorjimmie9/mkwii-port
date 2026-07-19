/* Function at 0x806CAD54, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_806CAD54(int r4)
{
    r0 = r4 + -0x6d; // 0x806CAD54
    if (<=) goto 0x0x806cad68;
    if (!=) goto 0x0x806cad74;
    /* li r0, 1 */ // 0x806CAD68
    *(0x17c + r3) = r0; // stb @ 0x806CAD6C
    return;
    /* li r0, 0 */ // 0x806CAD74
    *(0x17c + r3) = r0; // stb @ 0x806CAD78
    return;
}