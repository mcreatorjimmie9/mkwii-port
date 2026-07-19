/* Function at 0x806375B8, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806375B8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806375C0
    /* lis r6, 0 */ // 0x806375C4
    *(0x24 + r1) = r0; // stw @ 0x806375C8
    r6 = r6 + 0; // 0x806375CC
    /* lfs f0, 0(r5) */ // 0x806375D0
    /* lis r5, 0 */ // 0x806375D4
    *(0x1c + r1) = r31; // stw @ 0x806375D8
    /* li r0, 0 */ // 0x806375DC
    /* lis r7, 0 */ // 0x806375E0
    r5 = r5 + 0; // 0x806375E4
    *(0x18 + r1) = r30; // stw @ 0x806375E8
    *(0x14 + r1) = r29; // stw @ 0x806375EC
    *(0x10 + r1) = r28; // stw @ 0x806375F0
    r28 = r3;
    *(4 + r3) = r4; // stw @ 0x806375F8
    /* li r4, 1 */ // 0x806375FC
    *(0 + r3) = r6; // stw @ 0x80637600
    /* li r6, 0 */ // 0x80637604
    /* stfs f0, 0x10(r3) */ // 0x80637608
    *(0x14 + r3) = r0; // stb @ 0x8063760C
    r3 = *(0 + r7); // lwz @ 0x80637610
    FUN_805CFD60(r6); // bl 0x805CFD60
    /* lis r4, 0 */ // 0x80637618
    r30 = r3;
    r0 = *(0 + r4); // lwz @ 0x80637620
    *(0xc + r28) = r0; // stw @ 0x80637624
    /* slwi r3, r0, 2 */ // 0x80637628
    FUN_805E3430(r4); // bl 0x805E3430
}