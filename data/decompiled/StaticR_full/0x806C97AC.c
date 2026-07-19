/* Function at 0x806C97AC, size=324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806C97AC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806C97B4
    *(0x14 + r1) = r29; // stw @ 0x806C97C4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806C97CC
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806C97D4
    r3 = *(0 + r3); // lwz @ 0x806C97D8
    r30 = *(0x140 + r3); // lwz @ 0x806C97DC
    if (!=) goto 0x0x806c97f0;
    /* li r30, 0 */ // 0x806C97E8
    /* b 0x806c9844 */ // 0x806C97EC
    /* lis r31, 0 */ // 0x806C97F0
    r31 = r31 + 0; // 0x806C97F4
    if (==) goto 0x0x806c9840;
    r12 = *(0 + r30); // lwz @ 0x806C97FC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C9804
    /* mtctr r12 */ // 0x806C9808
    /* bctrl  */ // 0x806C980C
    /* b 0x806c9828 */ // 0x806C9810
    if (!=) goto 0x0x806c9824;
    /* li r0, 1 */ // 0x806C981C
    /* b 0x806c9834 */ // 0x806C9820
    r3 = *(0 + r3); // lwz @ 0x806C9824
    if (!=) goto 0x0x806c9814;
    /* li r0, 0 */ // 0x806C9830
    if (==) goto 0x0x806c9840;
    /* b 0x806c9844 */ // 0x806C983C
    /* li r30, 0 */ // 0x806C9840
    r12 = *(0 + r30); // lwz @ 0x806C9844
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C984C
    /* mtctr r12 */ // 0x806C9850
    /* bctrl  */ // 0x806C9854
    r3 = r30;
    /* li r4, 0x86e */ // 0x806C985C
    /* li r5, 0 */ // 0x806C9860
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r30;
    /* li r4, 0 */ // 0x806C986C
    /* li r5, 0x7d2 */ // 0x806C9870
    /* li r6, 0 */ // 0x806C9874
    /* li r7, -1 */ // 0x806C9878
    /* li r8, 0 */ // 0x806C987C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r30;
    /* li r4, 1 */ // 0x806C9888
    /* li r5, 0x7d3 */ // 0x806C988C
    /* li r6, 0 */ // 0x806C9890
    /* li r7, -1 */ // 0x806C9894
    /* li r8, 0 */ // 0x806C9898
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x806C98A0
    *(0x27c + r30) = r0; // stw @ 0x806C98A4
    r3 = r28;
    /* li r4, 0x4e */ // 0x806C98AC
    r12 = *(0 + r28); // lwz @ 0x806C98B0
    /* li r5, 0 */ // 0x806C98B4
    r12 = *(0x24 + r12); // lwz @ 0x806C98B8
    /* mtctr r12 */ // 0x806C98BC
    /* bctrl  */ // 0x806C98C0
    r3 = r29;
    /* li r4, 0 */ // 0x806C98C8
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x24 + r1); // lwz @ 0x806C98D0
    r31 = *(0x1c + r1); // lwz @ 0x806C98D4
    r30 = *(0x18 + r1); // lwz @ 0x806C98D8
    r29 = *(0x14 + r1); // lwz @ 0x806C98DC
    r28 = *(0x10 + r1); // lwz @ 0x806C98E0
    return;
}