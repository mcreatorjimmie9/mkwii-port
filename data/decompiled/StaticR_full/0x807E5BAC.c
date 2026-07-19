/* Function at 0x807E5BAC, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807E5BAC(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x807E5BB4
    /* lis r4, 0 */ // 0x807E5BB8
    *(0x24 + r1) = r0; // stw @ 0x807E5BBC
    r5 = r5 + 0; // 0x807E5BC0
    /* li r0, 0 */ // 0x807E5BC4
    r8 = *(0 + r4); // lwz @ 0x807E5BCC
    r5 = *(0 + r5); // lwz @ 0x807E5BD4
    /* li r6, 1 */ // 0x807E5BD8
    *(0x10 + r1) = r5; // stw @ 0x807E5BDC
    *(0xc + r1) = r8; // stw @ 0x807E5BE4
    *(8 + r1) = r0; // stb @ 0x807E5BE8
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807E5BF0
    return;
}