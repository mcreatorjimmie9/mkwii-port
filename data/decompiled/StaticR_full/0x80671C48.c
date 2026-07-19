/* Function at 0x80671C48, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80671C48(int r3, int r4)
{
    if (==) goto 0x0x80671c54;
    *(0x10 + r3) = r4; // stw @ 0x80671C50
    /* li r0, 1 */ // 0x80671C54
    /* stfs f1, 0x18(r3) */ // 0x80671C58
    *(0xc + r3) = r0; // stb @ 0x80671C5C
    return;
}