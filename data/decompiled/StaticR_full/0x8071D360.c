/* Function at 0x8071D360, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_8071D360(int r3)
{
    r0 = *(0x33 + r3); // lbz @ 0x8071D360
    /* bnelr  */ // 0x8071D368
    r0 = *(0x30 + r3); // lbz @ 0x8071D36C
    if (!=) goto 0x0x8071d388;
    /* lis r3, 0 */ // 0x8071D378
    r3 = r3 + 0; // 0x8071D37C
    r3 = r3 + 0xfc; // 0x8071D380
    /* b 0x807456e0 */ // 0x8071D384
    /* lis r3, 0 */ // 0x8071D388
    r3 = r3 + 0; // 0x8071D38C
    r3 = r3 + 0x109; // 0x8071D390
    /* b 0x807456e0 */ // 0x8071D394
}