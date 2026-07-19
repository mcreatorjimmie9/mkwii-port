/* Function at 0x8067208C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8067208C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80672094
    /* lis r5, 0 */ // 0x80672098
    *(0x24 + r1) = r0; // stw @ 0x8067209C
    r5 = r5 + 0; // 0x806720A0
    /* lfs f0, 0(r4) */ // 0x806720A4
    *(0x1c + r1) = r31; // stw @ 0x806720AC
    r31 = r3;
    r3 = r3 + 0x24; // 0x806720B4
    *(8 + r1) = r5; // stw @ 0x806720B8
    /* stfs f0, 0xc(r1) */ // 0x806720BC
    FUN_8064E1DC(r3); // bl 0x8064E1DC
    /* lfs f0, 0xc(r1) */ // 0x806720C4
    /* stfs f0, 0x14(r31) */ // 0x806720C8
    r31 = *(0x1c + r1); // lwz @ 0x806720CC
    r0 = *(0x24 + r1); // lwz @ 0x806720D0
    return;
}