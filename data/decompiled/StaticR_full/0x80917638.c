/* Function at 0x80917638, size=72 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80917638(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x80917640
    /* li r6, 1 */ // 0x80917644
    *(0x24 + r1) = r0; // stw @ 0x80917648
    /* li r0, 0 */ // 0x8091764C
    r5 = *(0 + r4); // lwz @ 0x80917654
    *(0x10 + r1) = r5; // stw @ 0x8091765C
    *(0xc + r1) = r0; // stw @ 0x80917664
    *(8 + r1) = r0; // stb @ 0x80917668
    FUN_808A1444(r4, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80917670
    return;
}