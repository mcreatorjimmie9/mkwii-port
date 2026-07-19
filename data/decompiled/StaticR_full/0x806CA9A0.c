/* Function at 0x806CA9A0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806CA9A0(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806CA9AC
    r31 = r3;
    r0 = *(0x180 + r3); // lbz @ 0x806CA9B4
    if (==) goto 0x0x806ca9d8;
    /* lis r5, 0 */ // 0x806CA9C0
    /* lfs f0, 0(r5) */ // 0x806CA9C4
    /* stfs f0, 0x184(r3) */ // 0x806CA9C8
    FUN_8069FE14(r5); // bl 0x8069FE14
    r3 = r31;
    FUN_806CA9EC(r5, r3); // bl 0x806CA9EC
    r0 = *(0x14 + r1); // lwz @ 0x806CA9D8
    r31 = *(0xc + r1); // lwz @ 0x806CA9DC
    return;
}