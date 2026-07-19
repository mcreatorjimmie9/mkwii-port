/* Function at 0x8075A698, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8075A698(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stmw r26, 0x18(r1) */ // 0x8075A6A4
    /* lis r29, 0 */ // 0x8075A6A8
    r30 = r3;
    /* li r31, 0 */ // 0x8075A6B0
    r29 = r29 + 0; // 0x8075A6B4
    /* li r28, 0 */ // 0x8075A6B8
    /* b 0x8075a790 */ // 0x8075A6BC
    r3 = *(0xd8 + r30); // lwz @ 0x8075A6C0
    /* lwzx r3, r3, r28 */ // 0x8075A6C4
    r0 = *(0x1b0 + r3); // lbz @ 0x8075A6C8
    if (==) goto 0x0x8075a788;
    r12 = *(0 + r3); // lwz @ 0x8075A6D4
    r12 = *(0x74 + r12); // lwz @ 0x8075A6D8
    /* mtctr r12 */ // 0x8075A6DC
    /* bctrl  */ // 0x8075A6E0
    /* li r26, 0 */ // 0x8075A6E4
    /* li r27, 0 */ // 0x8075A6E8
    /* b 0x8075a77c */ // 0x8075A6EC
    r4 = *(0 + r29); // lwz @ 0x8075A6F0
    r3 = *(4 + r29); // lwz @ 0x8075A6F4
    r0 = *(8 + r29); // lwz @ 0x8075A6F8
    *(8 + r1) = r4; // stw @ 0x8075A6FC
    *(0xc + r1) = r3; // stw @ 0x8075A700
    *(0x10 + r1) = r0; // stw @ 0x8075A704
    r0 = *(0xd8 + r30); // lwz @ 0x8075A708
    /* lwzx r3, r28, r0 */ // 0x8075A70C
    r0 = *(0x154 + r3); // lwz @ 0x8075A710
    if (!=) goto 0x0x8075a728;
    r0 = *(0x1d8 + r3); // lbz @ 0x8075A71C
    if (==) goto 0x0x8075a79c;
    r3 = *(0xd4 + r30); // lwz @ 0x8075A728
    /* lwzx r3, r3, r27 */ // 0x8075A72C
    r12 = *(0 + r3); // lwz @ 0x8075A730
    r12 = *(0xb4 + r12); // lwz @ 0x8075A734
    /* mtctr r12 */ // 0x8075A738
    /* bctrl  */ // 0x8075A73C
    r0 = *(0xd8 + r30); // lwz @ 0x8075A740
    r4 = r3;
    /* lwzx r3, r28, r0 */ // 0x8075A74C
    r12 = *(0 + r3); // lwz @ 0x8075A750
    r12 = *(0xd0 + r12); // lwz @ 0x8075A754
    /* mtctr r12 */ // 0x8075A758
    /* bctrl  */ // 0x8075A75C
    if (==) goto 0x0x8075a774;
    r3 = *(0xd4 + r30); // lwz @ 0x8075A768
    /* lwzx r3, r3, r27 */ // 0x8075A76C
    FUN_808A89B4(); // bl 0x808A89B4
    r27 = r27 + 4; // 0x8075A774
    r26 = r26 + 1; // 0x8075A778
    r0 = *(0xe4 + r30); // lwz @ 0x8075A77C
    if (<) goto 0x0x8075a6f0;
    r28 = r28 + 4; // 0x8075A788
    r31 = r31 + 1; // 0x8075A78C
    r0 = *(0xec + r30); // lwz @ 0x8075A790
    if (<) goto 0x0x8075a6c0;
    r0 = *(0x34 + r1); // lwz @ 0x8075A7A0
    return;
}