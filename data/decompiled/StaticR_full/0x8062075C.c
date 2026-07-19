/* Function at 0x8062075C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8062075C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80620768
    r31 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x80620770
    if (==) goto 0x0x806207b4;
    FUN_8061E920(); // bl 0x8061E920
    r4 = *(0x7c + r31); // lwz @ 0x80620780
    /* li r5, 0 */ // 0x80620784
    FUN_805FA4A0(r5); // bl 0x805FA4A0
    r3 = *(0x88 + r31); // lwz @ 0x8062078C
    if (==) goto 0x0x806207b4;
    r12 = *(0 + r3); // lwz @ 0x80620798
    /* neg r0, r3 */ // 0x8062079C
    r0 = r0 | r3; // 0x806207A0
    r12 = *(0x10 + r12); // lwz @ 0x806207A4
    /* srwi r4, r0, 0x1f */ // 0x806207A8
    /* mtctr r12 */ // 0x806207AC
    /* bctrl  */ // 0x806207B0
    r0 = *(0x14 + r1); // lwz @ 0x806207B4
    r31 = *(0xc + r1); // lwz @ 0x806207B8
    return;
}