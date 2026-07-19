/* Function at 0x808A9794, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808A9794(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808A97A0
    r31 = r3;
    FUN_808A8B3C(); // bl 0x808A8B3C
    /* lis r4, 0 */ // 0x808A97AC
    /* li r0, 0 */ // 0x808A97B0
    /* lfs f0, 0(r4) */ // 0x808A97B4
    /* lis r4, 0 */ // 0x808A97B8
    r4 = r4 + 0; // 0x808A97BC
    *(0xec + r31) = r0; // stw @ 0x808A97C0
    r3 = r31 + 0xf0; // 0x808A97C4
    *(0 + r31) = r4; // stw @ 0x808A97C8
    /* stfs f0, 0xf0(r31) */ // 0x808A97CC
    /* stfs f0, 0xf4(r31) */ // 0x808A97D0
    /* stfs f0, 0xf8(r31) */ // 0x808A97D4
    /* stfs f0, 0xfc(r31) */ // 0x808A97D8
    /* stfs f0, 0x100(r31) */ // 0x808A97DC
    /* stfs f0, 0x104(r31) */ // 0x808A97E0
    *(0x148 + r31) = r0; // stw @ 0x808A97E4
    FUN_80847CA0(); // bl 0x80847CA0
    r0 = *(0x148 + r31); // lwz @ 0x808A97EC
    r3 = r31;
    *(0x14c + r31) = r0; // stw @ 0x808A97F4
    r31 = *(0xc + r1); // lwz @ 0x808A97F8
    r0 = *(0x14 + r1); // lwz @ 0x808A97FC
    return;
}