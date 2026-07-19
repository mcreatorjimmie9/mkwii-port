/* Function at 0x805A8920, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A8920(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A8930
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A8938
    r30 = r3;
    if (==) goto 0x0x805a89dc;
    r0 = *(0x20 + r3); // lwz @ 0x805A8944
    /* lis r4, 0 */ // 0x805A8948
    r4 = r4 + 0; // 0x805A894C
    *(0 + r3) = r4; // stw @ 0x805A8950
    if (!=) goto 0x0x805a8964;
    r3 = *(4 + r3); // lwz @ 0x805A895C
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(8 + r30); // lwz @ 0x805A8964
    if (==) goto 0x0x805a8994;
    r3 = *(0x10 + r30); // lwz @ 0x805A8970
    r12 = *(0 + r3); // lwz @ 0x805A8974
    r12 = *(0x18 + r12); // lwz @ 0x805A8978
    /* mtctr r12 */ // 0x805A897C
    /* bctrl  */ // 0x805A8980
    /* li r0, 0 */ // 0x805A8984
    *(8 + r30) = r0; // stw @ 0x805A8988
    *(0xc + r30) = r0; // stw @ 0x805A898C
    *(0x10 + r30) = r0; // stw @ 0x805A8990
    r4 = *(0x14 + r30); // lwz @ 0x805A8994
    if (==) goto 0x0x805a89c4;
    r3 = *(0x1c + r30); // lwz @ 0x805A89A0
    r12 = *(0 + r3); // lwz @ 0x805A89A4
    r12 = *(0x18 + r12); // lwz @ 0x805A89A8
    /* mtctr r12 */ // 0x805A89AC
    /* bctrl  */ // 0x805A89B0
    /* li r0, 0 */ // 0x805A89B4
    *(0x14 + r30) = r0; // stw @ 0x805A89B8
    *(0x18 + r30) = r0; // stw @ 0x805A89BC
    *(0x1c + r30) = r0; // stw @ 0x805A89C0
    /* li r0, 0 */ // 0x805A89C8
    *(0x20 + r30) = r0; // stw @ 0x805A89CC
    if (<=) goto 0x0x805a89dc;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805A89E0
    r30 = *(8 + r1); // lwz @ 0x805A89E4
    r0 = *(0x14 + r1); // lwz @ 0x805A89E8
    return;
}