/* Function at 0x805E478C, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805E478C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r6, 0 */ // 0x805E4794
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805E47A4
    *(0x14 + r1) = r29; // stw @ 0x805E47A8
    *(0x10 + r1) = r28; // stw @ 0x805E47AC
    r6 = *(0 + r6); // lwz @ 0x805E47B0
    r0 = *(0xb70 + r6); // lwz @ 0x805E47B4
    if (!=) goto 0x0x805e4854;
    r0 = *(0xb9e + r6); // lhz @ 0x805E47C0
    if (!=) goto 0x0x805e4854;
    r6 = *(0x10 + r3); // lwz @ 0x805E47CC
    r0 = r4 + -1; // 0x805E47D0
    *(0x10 + r6) = r5; // stw @ 0x805E47D8
    /* li r0, 1 */ // 0x805E47DC
    *(0xc + r6) = r0; // stw @ 0x805E47E0
    if (>) goto 0x0x805e47fc;
    r3 = *(0x10 + r3); // lwz @ 0x805E47E8
    r12 = *(0 + r3); // lwz @ 0x805E47EC
    r12 = *(0xc + r12); // lwz @ 0x805E47F0
    /* mtctr r12 */ // 0x805E47F4
    /* bctrl  */ // 0x805E47F8
    /* li r28, 0 */ // 0x805E47FC
    /* lis r29, 0 */ // 0x805E4800
    /* lis r30, 0 */ // 0x805E4804
    /* b 0x805e4840 */ // 0x805E4808
    r3 = *(0 + r29); // lwz @ 0x805E480C
    r6 = r28 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E4814
    /* lwzx r3, r3, r6 */ // 0x805E4818
    r0 = *(0x38 + r3); // lwz @ 0x805E481C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E4820
    if (!=) goto 0x0x805e483c;
    r3 = *(0xc + r31); // lwz @ 0x805E4828
    /* li r4, 1 */ // 0x805E482C
    /* li r5, 0 */ // 0x805E4830
    /* lwzx r3, r3, r6 */ // 0x805E4834
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r28 = r28 + 1; // 0x805E483C
    r3 = *(0 + r30); // lwz @ 0x805E4840
    /* clrlwi r4, r28, 0x18 */ // 0x805E4844
    r0 = *(0x24 + r3); // lbz @ 0x805E4848
    if (<) goto 0x0x805e480c;
    r0 = *(0x24 + r1); // lwz @ 0x805E4854
    r31 = *(0x1c + r1); // lwz @ 0x805E4858
    r30 = *(0x18 + r1); // lwz @ 0x805E485C
    r29 = *(0x14 + r1); // lwz @ 0x805E4860
    r28 = *(0x10 + r1); // lwz @ 0x805E4864
    return;
}