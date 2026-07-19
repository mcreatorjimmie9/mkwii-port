/* Function at 0x8069976C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069976C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069977C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80699784
    r30 = r3;
    if (==) goto 0x0x806997b8;
    /* li r4, -1 */ // 0x80699790
    r3 = r3 + 0x174; // 0x80699794
    FUN_806691A0(r4, r3); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x806997A0
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x806997b8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806997BC
    r30 = *(8 + r1); // lwz @ 0x806997C0
    r0 = *(0x14 + r1); // lwz @ 0x806997C4
    return;
}