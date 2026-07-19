/* Function at 0x80602644, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80602644(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80602658
    r30 = r3;
    r3 = r3 + 4; // 0x80602660
    FUN_8061E03C(r3); // bl 0x8061E03C
    r4 = r3;
    r5 = r31;
    FUN_806026B4(r3, r4, r5, r3); // bl 0x806026B4
    r3 = r30 + 4; // 0x80602678
    FUN_8061E59C(r4, r5, r3, r3); // bl 0x8061E59C
    /* lfs f0, 8(r1) */ // 0x80602680
    /* stfs f0, 0x48(r3) */ // 0x80602684
    /* lfs f0, 0xc(r1) */ // 0x80602688
    /* stfs f0, 0x4c(r3) */ // 0x8060268C
    /* lfs f0, 0x10(r1) */ // 0x80602690
    /* stfs f0, 0x50(r3) */ // 0x80602694
    /* li r3, 5 */ // 0x80602698
    r31 = *(0x1c + r1); // lwz @ 0x8060269C
    r30 = *(0x18 + r1); // lwz @ 0x806026A0
    r0 = *(0x24 + r1); // lwz @ 0x806026A4
    return;
}