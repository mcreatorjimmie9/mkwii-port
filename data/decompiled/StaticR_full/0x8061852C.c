/* Function at 0x8061852C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061852C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x8061853C
    /* li r4, 4 */ // 0x80618540
    /* li r5, 0xf */ // 0x80618544
    *(0xc + r1) = r31; // stw @ 0x80618548
    r31 = r3;
    r3 = r3 + 4; // 0x80618550
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x80618558
    /* lfs f1, 4(r31) */ // 0x8061855C
    /* lfs f0, 0(r4) */ // 0x80618560
    /* fadds f0, f1, f0 */ // 0x80618564
    /* stfs f0, 4(r31) */ // 0x80618568
    r31 = *(0xc + r1); // lwz @ 0x8061856C
    r0 = *(0x14 + r1); // lwz @ 0x80618570
    return;
}