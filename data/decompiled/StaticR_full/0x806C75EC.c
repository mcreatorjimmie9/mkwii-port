/* Function at 0x806C75EC, size=208 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_806C75EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r26 */
    /* stmw r26, 0x48(r1) */ // 0x806C75F8
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806C7600
    if (!=) goto 0x0x806c784c;
    /* lis r4, 0 */ // 0x806C760C
    r4 = *(0 + r4); // lwz @ 0x806C7610
    r4 = *(0 + r4); // lwz @ 0x806C7614
    r0 = *(0 + r4); // lwz @ 0x806C7618
    if (<) goto 0x0x806c762c;
    if (<=) goto 0x0x806c76d8;
    if (!=) goto 0x0x806c7828;
    /* li r4, 0 */ // 0x806C7634
    r3 = r3 + 0x634; // 0x806C7638
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* lis r28, 0 */ // 0x806C7640
    r27 = r3;
    r6 = *(0 + r28); // lwz @ 0x806C7648
    /* li r4, 0 */ // 0x806C7650
    /* li r5, 0x16 */ // 0x806C7654
    r6 = *(0x98 + r6); // lwz @ 0x806C7658
    r26 = *(0x4e8 + r6); // lbz @ 0x806C765C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r4 = r27 + 0x68; // 0x806C7668
    /* li r5, 0x14 */ // 0x806C766C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r29, 0 */ // 0x806C7674
    /* li r31, 0 */ // 0x806C7678
    *(0x38 + r1) = r31; // sth @ 0x806C767C
    r4 = r26;
    r3 = *(0 + r29); // lwz @ 0x806C7684
    r5 = r27 + 0x94; // 0x806C7688
    FUN_805D6B94(r4, r5, r6); // bl 0x805D6B94
    r3 = *(0 + r29); // lwz @ 0x806C7694
    r4 = r26;
    FUN_805D383C(r5, r6, r4); // bl 0x805D383C
    r3 = *(0 + r28); // lwz @ 0x806C76A0
    r5 = r27 + 0x94; // 0x806C76A4
    /* li r4, 0 */ // 0x806C76A8
    r3 = *(0x98 + r3); // lwz @ 0x806C76AC
    r3 = r3 + 0x238; // 0x806C76B0
    FUN_8066DE9C(r5, r4, r3); // bl 0x8066DE9C
    r3 = *(0 + r28); // lwz @ 0x806C76B8
}