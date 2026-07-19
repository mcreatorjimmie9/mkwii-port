/* Function at 0x807CDA80, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807CDA80(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807CDA88
    /* li r4, 1 */ // 0x807CDA8C
    *(0x14 + r1) = r0; // stw @ 0x807CDA90
    /* li r0, 0 */ // 0x807CDA94
    /* lfs f1, 0(r5) */ // 0x807CDA98
    /* li r5, 1 */ // 0x807CDA9C
    *(0xc + r1) = r31; // stw @ 0x807CDAA0
    /* lis r31, 0 */ // 0x807CDAA4
    /* lfs f2, 0(r31) */ // 0x807CDAA8
    *(8 + r1) = r30; // stw @ 0x807CDAAC
    r30 = r3;
    *(0xe8 + r3) = r0; // stw @ 0x807CDAB4
    *(0x33c + r3) = r0; // stw @ 0x807CDAB8
    r3 = *(8 + r3); // lwz @ 0x807CDABC
    r3 = *(0x28 + r3); // lwz @ 0x807CDAC0
    FUN_805E73A4(); // bl 0x805E73A4
    /* lfs f1, 0(r31) */ // 0x807CDAC8
    r3 = r30;
    FUN_807CB6B8(r3); // bl 0x807CB6B8
    r3 = *(0xec + r30); // lwz @ 0x807CDAD4
    /* li r0, 1 */ // 0x807CDAD8
    *(0x10 + r3) = r0; // stw @ 0x807CDADC
    r31 = *(0xc + r1); // lwz @ 0x807CDAE0
    r30 = *(8 + r1); // lwz @ 0x807CDAE4
    r0 = *(0x14 + r1); // lwz @ 0x807CDAE8
    return;
}