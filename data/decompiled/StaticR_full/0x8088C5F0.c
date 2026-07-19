/* Function at 0x8088C5F0, size=68 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8088C5F0(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8088C5F8
    *(0x54 + r1) = r0; // stw @ 0x8088C5FC
    /* lis r0, 0x4330 */ // 0x8088C600
    /* lfd f2, 0(r4) */ // 0x8088C604
    *(0x4c + r1) = r31; // stw @ 0x8088C608
    r31 = r3;
    r5 = *(0x158 + r3); // lha @ 0x8088C610
    *(0x38 + r1) = r0; // stw @ 0x8088C614
    /* xoris r0, r5, 0x8000 */ // 0x8088C618
    /* lfs f0, 0x164(r3) */ // 0x8088C61C
    *(0x3c + r1) = r0; // stw @ 0x8088C620
    /* lfd f1, 0x38(r1) */ // 0x8088C624
    /* fsubs f1, f1, f2 */ // 0x8088C628
    /* fmuls f1, f0, f1 */ // 0x8088C62C
    FUN_805E3430(); // bl 0x805E3430
}