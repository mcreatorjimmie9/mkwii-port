/* Function at 0x808E5734, size=284 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_808E5734(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x3c + r1) = r31; // stw @ 0x808E5744
    /* li r31, 0 */ // 0x808E5748
    *(0x38 + r1) = r30; // stw @ 0x808E574C
    r30 = r3;
    *(0x6c8 + r3) = r31; // stw @ 0x808E5754
    if (!=) goto 0x0x808e57b8;
    r4 = *(0x654 + r3); // lwz @ 0x808E575C
    r5 = r3 + 0x854; // 0x808E5760
    /* li r6, 0 */ // 0x808E5764
    r0 = r4 + 1; // 0x808E5768
    *(0x654 + r3) = r0; // stw @ 0x808E576C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    *(0x9c8 + r30) = r31; // stw @ 0x808E5774
    r4 = r30 + 0x854; // 0x808E577C
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808E5784
    r6 = r6 + 0; // 0x808E578C
    /* li r7, 0 */ // 0x808E5790
    r4 = r6 + 0x31; // 0x808E5794
    r5 = r6 + 0x39; // 0x808E5798
    r6 = r6 + 0x4b; // 0x808E579C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808E57A8
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r30 + 0x854; // 0x808E57B0
    /* b 0x808e5838 */ // 0x808E57B4
    if (!=) goto 0x0x808e57f8;
    r4 = *(0x654 + r3); // lwz @ 0x808E57C0
    r5 = r3 + 0x6d0; // 0x808E57C4
    /* li r6, 0 */ // 0x808E57C8
    r0 = r4 + 1; // 0x808E57CC
    *(0x654 + r3) = r0; // stw @ 0x808E57D0
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x808E57D8
    r3 = r30 + 0x6d0; // 0x808E57DC
    r4 = r4 + 0; // 0x808E57E0
    /* li r5, 0 */ // 0x808E57E4
    r4 = r4 + 0x5d; // 0x808E57E8
    FUN_806CAC0C(r4, r3, r4, r5, r4); // bl 0x806CAC0C
    r3 = r30 + 0x6d0; // 0x808E57F0
    /* b 0x808e5838 */ // 0x808E57F4
    if (!=) goto 0x0x808e5834;
    r4 = *(0x654 + r3); // lwz @ 0x808E5800
    r5 = r3 + 0x9cc; // 0x808E5804
    /* li r6, 0 */ // 0x808E5808
    r0 = r4 + 1; // 0x808E580C
    *(0x654 + r3) = r0; // stw @ 0x808E5810
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r30 + 0x9cc; // 0x808E5818
    /* li r4, 7 */ // 0x808E581C
    /* li r5, 0 */ // 0x808E5820
    /* li r6, 0 */ // 0x808E5824
    FUN_808D3A00(r3, r4, r5, r6); // bl 0x808D3A00
    r3 = r30 + 0x9cc; // 0x808E582C
    /* b 0x808e5838 */ // 0x808E5830
    /* li r3, 0 */ // 0x808E5834
    r0 = *(0x44 + r1); // lwz @ 0x808E5838
    r31 = *(0x3c + r1); // lwz @ 0x808E583C
    r30 = *(0x38 + r1); // lwz @ 0x808E5840
    return;
}