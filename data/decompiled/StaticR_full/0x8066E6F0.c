/* Function at 0x8066E6F0, size=160 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r14 */
/* Calls: 3 function(s) */

int FUN_8066E6F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r14 */
    *(0xe4 + r1) = r0; // stw @ 0x8066E6FC
    /* stmw r14, 0x98(r1) */ // 0x8066E700
    r25 = r3;
    r26 = r4;
    r16 = r5;
    r14 = r6;
    if (!=) goto 0x0x8066e728;
    r4 = r16;
    r5 = r14;
    FUN_8066E3B0(r4, r5); // bl 0x8066E3B0
    /* b 0x8066eb34 */ // 0x8066E724
    r4 = r14;
    FUN_8066E240(r4, r5, r4); // bl 0x8066E240
    r3 = *(4 + r26); // lwz @ 0x8066E730
    /* slwi r17, r16, 2 */ // 0x8066E734
    /* lwzx r0, r3, r17 */ // 0x8066E738
    if (==) goto 0x0x8066eb34;
    r3 = *(4 + r25); // lwz @ 0x8066E744
    /* slwi r15, r14, 2 */ // 0x8066E748
    /* lwzx r3, r3, r15 */ // 0x8066E74C
    if (==) goto 0x0x8066e76c;
    r12 = *(0 + r3); // lwz @ 0x8066E758
    /* li r4, 1 */ // 0x8066E75C
    r12 = *(8 + r12); // lwz @ 0x8066E760
    /* mtctr r12 */ // 0x8066E764
    /* bctrl  */ // 0x8066E768
    r4 = *(0x2c + r25); // lwz @ 0x8066E76C
    /* li r3, 0xb8 */ // 0x8066E770
    /* li r5, 4 */ // 0x8066E774
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x8066e79c;
    /* lis r5, 0 */ // 0x8066E788
    /* li r4, 7 */ // 0x8066E78C
}