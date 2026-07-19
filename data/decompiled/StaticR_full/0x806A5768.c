/* Function at 0x806A5768, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A5768(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A5778
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A5780
    r30 = r3;
    if (==) goto 0x0x806a57a4;
    /* li r4, 0 */ // 0x806A578C
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x806a57a4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A57A8
    r30 = *(8 + r1); // lwz @ 0x806A57AC
    r0 = *(0x14 + r1); // lwz @ 0x806A57B0
    return;
}