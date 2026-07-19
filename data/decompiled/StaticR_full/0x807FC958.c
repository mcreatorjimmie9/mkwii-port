/* Function at 0x807FC958, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FC958(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FC964
    r31 = r3;
    FUN_8080F1E0(); // bl 0x8080F1E0
    /* li r0, 0 */ // 0x807FC970
    *(0xb0 + r31) = r0; // stw @ 0x807FC974
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x807FC97C
    r12 = *(0x90 + r12); // lwz @ 0x807FC980
    /* mtctr r12 */ // 0x807FC984
    /* bctrl  */ // 0x807FC988
    r12 = *(0 + r31); // lwz @ 0x807FC98C
    r3 = r31;
    /* li r4, 0 */ // 0x807FC994
    r12 = *(0x68 + r12); // lwz @ 0x807FC998
    /* mtctr r12 */ // 0x807FC99C
    /* bctrl  */ // 0x807FC9A0
    r0 = *(0x14 + r1); // lwz @ 0x807FC9A4
    r31 = *(0xc + r1); // lwz @ 0x807FC9A8
    return;
}