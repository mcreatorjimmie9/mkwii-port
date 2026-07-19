/* Function at 0x807B6960, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807B6960(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807B6968
    *(0x18 + r1) = r30; // stw @ 0x807B6974
    *(0x14 + r1) = r29; // stw @ 0x807B6978
    r29 = r3;
    r5 = *(0xc0 + r3); // lwz @ 0x807B6980
    r0 = *(0 + r4); // lha @ 0x807B6984
    r6 = *(0xc4 + r3); // lwz @ 0x807B6988
    r30 = *(0 + r6); // lwz @ 0x807B6990
    if (<=) goto 0x0x807b69f8;
    FUN_807B67D8(); // bl 0x807B67D8
    r31 = r3;
    if (==) goto 0x0x807b6a00;
    r3 = *(0x10 + r30); // lwz @ 0x807B69A8
    r3 = *(0x144 + r3); // lwz @ 0x807B69AC
    r12 = *(0x34 + r3); // lwz @ 0x807B69B0
    r12 = *(0x44 + r12); // lwz @ 0x807B69B4
    /* mtctr r12 */ // 0x807B69B8
    /* bctrl  */ // 0x807B69BC
    r12 = *(0 + r3); // lwz @ 0x807B69C0
    r12 = *(0x30 + r12); // lwz @ 0x807B69C4
    /* mtctr r12 */ // 0x807B69C8
    /* bctrl  */ // 0x807B69CC
    if (==) goto 0x0x807b69ec;
    *(0xc8 + r29) = r31; // stw @ 0x807B69D8
    r3 = r29;
    r4 = r29 + 0x90; // 0x807B69E0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807b6a00 */ // 0x807B69E8
    /* li r0, 0 */ // 0x807B69EC
    *(0xc0 + r29) = r0; // stw @ 0x807B69F0
    /* b 0x807b6a00 */ // 0x807B69F4
    r0 = r5 + 1; // 0x807B69F8
    *(0xc0 + r3) = r0; // stw @ 0x807B69FC
    r0 = *(0x24 + r1); // lwz @ 0x807B6A00
    r31 = *(0x1c + r1); // lwz @ 0x807B6A04
    r30 = *(0x18 + r1); // lwz @ 0x807B6A08
    r29 = *(0x14 + r1); // lwz @ 0x807B6A0C
    return;
}