/* Function at 0x805D07AC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805D07AC(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805D07BC
    r30 = r3;
    r0 = *(0x619 + r3); // lbz @ 0x805D07C4
    if (==) goto 0x0x805d07f0;
    /* li r0, 1 */ // 0x805D07D0
    *(0x618 + r3) = r0; // stb @ 0x805D07D4
    /* lis r6, 0x1000 */ // 0x805D07D8
    r3 = *(0x584 + r3); // lwz @ 0x805D07DC
    r6 = r6 + 1; // 0x805D07E0
    FUN_805E3430(r6, r6); // bl 0x805E3430
    r31 = r3;
    /* b 0x805d07f4 */ // 0x805D07EC
    /* li r31, 0 */ // 0x805D07F0
    if (==) goto 0x0x805d0804;
    r3 = r30;
    FUN_805CEC04(r3); // bl 0x805CEC04
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805D0808
    r30 = *(8 + r1); // lwz @ 0x805D080C
    r0 = *(0x14 + r1); // lwz @ 0x805D0810
}