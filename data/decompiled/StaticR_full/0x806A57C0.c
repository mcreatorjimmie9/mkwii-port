/* Function at 0x806A57C0, size=112 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A57C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xa8 + r1) = r30; // stw @ 0x806A57D0
    r30 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x806A57E4
    /* li r0, 0xc */ // 0x806A57E8
    r3 = r3 + 0; // 0x806A57EC
    r4 = r3 + -4; // 0x806A57F4
    /* mtctr r0 */ // 0x806A57F8
    r3 = *(4 + r4); // lwz @ 0x806A57FC
    r0 = *(8 + r4); // lwzu @ 0x806A5800
    *(4 + r5) = r3; // stw @ 0x806A5804
    *(8 + r5) = r0; // stwu @ 0x806A5808
    if (counter-- != 0) goto 0x0x806a57fc;
    /* lis r31, 0 */ // 0x806A5810
    r6 = r30;
    r31 = r31 + 0; // 0x806A5818
    r5 = r31 + 0xc; // 0x806A5820
    /* li r4, 0xf */ // 0x806A5824
    /* crclr cr1eq */ // 0x806A5828
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}