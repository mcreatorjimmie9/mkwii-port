/* Function at 0x8074D350, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8074D350(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074D35C
    r31 = r3;
    r4 = *(0x20 + r3); // lwz @ 0x8074D364
    r5 = *(0x134 + r3); // lwz @ 0x8074D368
    r0 = *(0x46 + r4); // lha @ 0x8074D36C
    r4 = *(8 + r4); // lwz @ 0x8074D370
    /* slwi r0, r0, 4 */ // 0x8074D374
    r4 = r4 + r0; // 0x8074D378
    r0 = *(0xc + r4); // lhz @ 0x8074D37C
    if (<=) goto 0x0x8074d390;
    /* li r0, 2 */ // 0x8074D388
    *(0x130 + r3) = r0; // stw @ 0x8074D38C
    r3 = *(8 + r3); // lwz @ 0x8074D390
    /* li r4, 0 */ // 0x8074D394
    r3 = *(0x28 + r3); // lwz @ 0x8074D398
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074D3A0
    if (==) goto 0x0x8074d3dc;
    r0 = *(0x120 + r31); // lwz @ 0x8074D3AC
    if (!=) goto 0x0x8074d3dc;
    r4 = *(8 + r31); // lwz @ 0x8074D3B8
    /* lis r3, 0 */ // 0x8074D3BC
    /* lis r5, 0 */ // 0x8074D3C0
    /* lfs f1, 0(r3) */ // 0x8074D3C4
    r3 = *(0x28 + r4); // lwz @ 0x8074D3C8
    /* li r4, 0 */ // 0x8074D3CC
    /* lfs f2, 0(r5) */ // 0x8074D3D0
    /* li r5, 1 */ // 0x8074D3D4
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r0 = *(0x14 + r1); // lwz @ 0x8074D3DC
    r31 = *(0xc + r1); // lwz @ 0x8074D3E0
    return;
}