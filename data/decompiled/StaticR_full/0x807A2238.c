/* Function at 0x807A2238, size=92 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_807A2238(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 3 */ // 0x807A2240
    *(0x14 + r1) = r0; // stw @ 0x807A2244
    r0 = *(0xc + r3); // lbz @ 0x807A2248
    *(8 + r3) = r4; // stw @ 0x807A224C
    if (==) goto 0x0x807a2268;
    /* lis r3, 0 */ // 0x807A2258
    /* li r4, 0x14 */ // 0x807A225C
    r3 = *(0 + r3); // lwz @ 0x807A2260
    FUN_807881A8(r3, r4); // bl 0x807881A8
    FUN_807A07E8(r3, r4); // bl 0x807A07E8
    if (!=) goto 0x0x807a2278;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A2278
    r3 = *(0 + r3); // lwz @ 0x807A227C
    FUN_807AAC40(r3); // bl 0x807AAC40
    r0 = *(0x14 + r1); // lwz @ 0x807A2284
    return;
}