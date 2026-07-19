/* Function at 0x8071D200, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_8071D200(int r3)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D200
    /* bnelr  */ // 0x8071D208
    /* lis r3, 0 */ // 0x8071D20C
    r3 = r3 + 0; // 0x8071D210
    r3 = r3 + 0xaa; // 0x8071D214
    /* b 0x807456e0 */ // 0x8071D218
}