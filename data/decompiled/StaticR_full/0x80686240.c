/* Function at 0x80686240, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80686240(int r3)
{
    /* li r0, 1 */ // 0x80686240
    *(0x38e + r3) = r0; // stb @ 0x80686244
    /* lis r3, 0 */ // 0x80686248
    r3 = *(0 + r3); // lwz @ 0x8068624C
    /* b 0x806e5dc0 */ // 0x80686250
}