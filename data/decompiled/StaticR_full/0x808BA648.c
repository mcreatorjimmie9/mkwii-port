/* Function at 0x808BA648, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808BA648(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808BA658
    *(8 + r1) = r30; // stw @ 0x808BA65C
    r30 = r3;
    if (!=) goto 0x0x808ba698;
    r4 = *(0x654 + r3); // lwz @ 0x808BA668
    r5 = r3 + 0x6c4; // 0x808BA66C
    /* li r6, 0 */ // 0x808BA670
    r0 = r4 + 1; // 0x808BA674
    *(0x654 + r3) = r0; // stw @ 0x808BA678
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r30 + 0x6c4; // 0x808BA680
    /* li r4, 1 */ // 0x808BA684
    /* li r5, 0 */ // 0x808BA688
    FUN_808736B8(r3, r4, r5); // bl 0x808736B8
    r3 = r30 + 0x6c4; // 0x808BA690
    /* b 0x808ba738 */ // 0x808BA694
    if (!=) goto 0x0x808ba6c8;
    r4 = *(0x654 + r3); // lwz @ 0x808BA6A0
    r5 = r3 + 0x1c90; // 0x808BA6A4
    /* li r6, 0 */ // 0x808BA6A8
    r0 = r4 + 1; // 0x808BA6AC
    *(0x654 + r3) = r0; // stw @ 0x808BA6B0
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r30 + 0x1c90; // 0x808BA6B8
    FUN_80873EFC(r6, r3); // bl 0x80873EFC
    r3 = r30 + 0x1c90; // 0x808BA6C0
    /* b 0x808ba738 */ // 0x808BA6C4
    if (!=) goto 0x0x808ba734;
    /* li r3, 0x174 */ // 0x808BA6D0
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808ba6ec;
    FUN_8066D278(r3); // bl 0x8066D278
    r31 = r3;
    r4 = *(0x654 + r30); // lwz @ 0x808BA6EC
    r3 = r30;
}