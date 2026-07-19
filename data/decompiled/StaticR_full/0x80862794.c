/* Function at 0x80862794, size=44 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80862794(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8086279C
    /* lfs f0, 0(r4) */ // 0x808627A0
    *(0x54 + r1) = r0; // stw @ 0x808627A8
    /* fmuls f1, f0, f1 */ // 0x808627AC
    *(0x4c + r1) = r31; // stw @ 0x808627B0
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}