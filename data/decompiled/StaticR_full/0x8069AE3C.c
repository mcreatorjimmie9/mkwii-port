/* Function at 0x8069AE3C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069AE3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069AE4C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069AE54
    r30 = r3;
    if (==) goto 0x0x8069ae88;
    /* li r4, -1 */ // 0x8069AE60
    r3 = r3 + 0x174; // 0x8069AE64
    FUN_806691A0(r4, r3); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x8069AE70
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8069ae88;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069AE8C
    r30 = *(8 + r1); // lwz @ 0x8069AE90
    r0 = *(0x14 + r1); // lwz @ 0x8069AE94
    return;
}