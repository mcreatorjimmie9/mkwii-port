/* Function at 0x80842980, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_80842980(int r3, int r4, int r5)
{
    /* lis r3, 0 */ // 0x80842980
    /* lis r5, 0 */ // 0x80842984
    r3 = *(0 + r3); // lwz @ 0x80842988
    r5 = r5 + 0; // 0x8084298C
    r0 = *(0x20 + r3); // lwz @ 0x80842990
    *(8 + r5) = r0; // stw @ 0x80842994
    /* clrlwi r4, r0, 0x1f */ // 0x80842998
    /* clrlwi r3, r0, 0x1e */ // 0x8084299C
    /* clrlwi r0, r0, 0x1d */ // 0x808429A0
    *(0xc + r5) = r4; // stw @ 0x808429A4
    *(0x10 + r5) = r3; // stw @ 0x808429A8
    *(0x14 + r5) = r0; // stw @ 0x808429AC
    return;
}