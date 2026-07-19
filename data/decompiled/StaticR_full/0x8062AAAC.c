/* Function at 0x8062AAAC, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_8062AAAC(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8062AAAC
    /* li r0, 0 */ // 0x8062AAB0
    r5 = r5 + 0; // 0x8062AAB4
    /* li r4, 0xc */ // 0x8062AAB8
    *(0 + r5) = r0; // stb @ 0x8062AABC
    r3 = r5 + 8; // 0x8062AAC0
    *(4 + r5) = r0; // stw @ 0x8062AAC4
    /* b 0x805e3430 */ // 0x8062AAC8
}