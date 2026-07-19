/* Function at 0x808292B8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808292B8(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x808292CC
    r30 = r3;
    *(4 + r3) = r6; // stw @ 0x808292D4
    *(8 + r3) = r4; // sth @ 0x808292D8
    *(0xa + r3) = r5; // sth @ 0x808292DC
    r12 = *(0 + r3); // lwz @ 0x808292E0
    r12 = *(0xc + r12); // lwz @ 0x808292E4
    /* mtctr r12 */ // 0x808292E8
    /* bctrl  */ // 0x808292EC
    /* li r0, 0 */ // 0x808292F0
    *(0x74 + r30) = r0; // stw @ 0x808292F4
    /* li r3, 0xac */ // 0x808292F8
    *(0x78 + r30) = r0; // stw @ 0x808292FC
    *(0x7c + r30) = r0; // stw @ 0x80829300
    FUN_805E3430(r3); // bl 0x805E3430
}