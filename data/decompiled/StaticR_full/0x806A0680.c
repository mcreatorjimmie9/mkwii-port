/* Function at 0x806A0680, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806A0680(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806A069C
    r28 = r3;
    r5 = *(0x64 + r3); // lwz @ 0x806A06A4
    r30 = *(8 + r5); // lwz @ 0x806A06A8
    if (!=) goto 0x0x806a06bc;
    /* li r30, 0 */ // 0x806A06B4
    /* b 0x806a0710 */ // 0x806A06B8
    /* lis r31, 0 */ // 0x806A06BC
    r31 = r31 + 0; // 0x806A06C0
    if (==) goto 0x0x806a070c;
    r12 = *(0 + r30); // lwz @ 0x806A06C8
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x806A06D0
    /* mtctr r12 */ // 0x806A06D4
    /* bctrl  */ // 0x806A06D8
    /* b 0x806a06f4 */ // 0x806A06DC
    if (!=) goto 0x0x806a06f0;
    /* li r0, 1 */ // 0x806A06E8
    /* b 0x806a0700 */ // 0x806A06EC
    r3 = *(0 + r3); // lwz @ 0x806A06F0
    if (!=) goto 0x0x806a06e0;
    /* li r0, 0 */ // 0x806A06FC
    if (==) goto 0x0x806a070c;
    /* b 0x806a0710 */ // 0x806A0708
    /* li r30, 0 */ // 0x806A070C
    r4 = r29;
    r3 = r30 + 0xa8; // 0x806A0714
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    *(0x170 + r28) = r3; // stw @ 0x806A071C
    r31 = *(0x1c + r1); // lwz @ 0x806A0720
    r30 = *(0x18 + r1); // lwz @ 0x806A0724
    r29 = *(0x14 + r1); // lwz @ 0x806A0728
    r28 = *(0x10 + r1); // lwz @ 0x806A072C
    r0 = *(0x24 + r1); // lwz @ 0x806A0730
    return;
}