/* Function at 0x806278A8, size=128 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806278A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x806278B0
    /* lis r4, 0 */ // 0x806278B4
    *(0x74 + r1) = r0; // stw @ 0x806278B8
    /* lfs f1, 0(r5) */ // 0x806278BC
    *(0x6c + r1) = r31; // stw @ 0x806278C0
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x806278C8
    *(0x68 + r1) = r30; // stw @ 0x806278CC
    r6 = *(0x10 + r3); // lwz @ 0x806278D0
    r5 = *(0x10 + r6); // lwz @ 0x806278D4
    r0 = *(0x14 + r6); // lwz @ 0x806278D8
    *(0x54 + r1) = r0; // stw @ 0x806278DC
    *(0x50 + r1) = r5; // stw @ 0x806278E0
    r0 = *(0x18 + r6); // lwz @ 0x806278E4
    *(0x58 + r1) = r0; // stw @ 0x806278E8
    /* stfs f1, 0x44(r1) */ // 0x806278EC
    /* stfs f0, 0x48(r1) */ // 0x806278F0
    /* stfs f1, 0x4c(r1) */ // 0x806278F4
    r0 = *(0x18 + r3); // lwz @ 0x806278F8
    if (!=) goto 0x0x80627910;
    /* lfs f0, 0x50(r1) */ // 0x80627904
    /* fneg f0, f0 */ // 0x80627908
    /* stfs f0, 0x50(r1) */ // 0x8062790C
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r3 = r3 + 0x100; // 0x80627918
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
}