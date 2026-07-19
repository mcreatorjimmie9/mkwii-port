/* Function at 0x8088C3AC, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8088C3AC(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x8088C3C0
    /* lis r30, 0x4330 */ // 0x8088C3C4
    *(0x24 + r1) = r29; // stw @ 0x8088C3C8
    /* lis r29, 0 */ // 0x8088C3CC
    /* lfd f2, 0(r29) */ // 0x8088C3D0
    r0 = *(0x14a + r3); // lha @ 0x8088C3D4
    *(8 + r1) = r30; // stw @ 0x8088C3D8
    /* xoris r0, r0, 0x8000 */ // 0x8088C3DC
    /* lfs f0, 0x158(r3) */ // 0x8088C3E0
    *(0xc + r1) = r0; // stw @ 0x8088C3E4
    /* lfd f1, 8(r1) */ // 0x8088C3E8
    /* fsubs f1, f1, f2 */ // 0x8088C3EC
    /* fmuls f1, f0, f1 */ // 0x8088C3F0
    FUN_805E3430(); // bl 0x805E3430
}