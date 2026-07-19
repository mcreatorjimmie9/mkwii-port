/* Function at 0x807C469C, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_807C469C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807C46B4
    *(0x10 + r1) = r28; // stw @ 0x807C46B8
    r29 = *(4 + r3); // lwz @ 0x807C46BC
    if (<=) goto 0x0x807c47b8;
    r0 = *(0x2c + r3); // lwz @ 0x807C46C8
    if (==) goto 0x0x807c46e8;
    if (==) goto 0x0x807c46f0;
    if (==) goto 0x0x807c47b4;
    /* b 0x807c47b8 */ // 0x807C46E4
    FUN_807C3F5C(); // bl 0x807C3F5C
    /* b 0x807c47b8 */ // 0x807C46EC
    r5 = *(0x28 + r3); // lwz @ 0x807C46F0
    /* lis r4, 0 */ // 0x807C46F4
    r5 = r5 + 1; // 0x807C46F8
    *(0x28 + r3) = r5; // stw @ 0x807C46FC
    r0 = *(0 + r4); // lha @ 0x807C4700
    if (<=) goto 0x0x807c47b8;
    if (<=) goto 0x0x807c47a8;
    /* lis r30, 0 */ // 0x807C4714
    r4 = r29;
    r3 = *(0 + r30); // lwz @ 0x807C471C
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r29; // 0x807C4724
    r28 = *(4 + r31); // lwz @ 0x807C4728
    r0 = r0 * r29; // 0x807C472C
    /* subf r0, r0, r3 */ // 0x807C4730
    /* slwi r0, r0, 2 */ // 0x807C4734
    r3 = r31 + r0; // 0x807C4738
    r29 = *(0xc + r3); // lwz @ 0x807C473C
    if (==) goto 0x0x807c476c;
    r3 = *(0 + r30); // lwz @ 0x807C4748
    r4 = r28 + -1; // 0x807C474C
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r29); // lwz @ 0x807C4754
    r4 = r4 + 1; // 0x807C4758
    r0 = r4 / r28; // 0x807C475C
    r0 = r0 * r28; // 0x807C4760
    /* subf r4, r0, r4 */ // 0x807C4764
    /* b 0x807c477c */ // 0x807C4768
    r3 = *(0 + r30); // lwz @ 0x807C476C
    r4 = r28;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C4778
    r3 = r4 + r3; // 0x807C477C
    r4 = *(0x18 + r29); // lwz @ 0x807C4780
    r0 = r3 / r28; // 0x807C4784
    r0 = r0 * r28; // 0x807C4788
    /* subf r3, r0, r3 */ // 0x807C478C
    /* slwi r0, r3, 2 */ // 0x807C4790
    r3 = r31 + r0; // 0x807C4794
    r3 = *(0xc + r3); // lwz @ 0x807C4798
    r0 = *(0x18 + r3); // lwz @ 0x807C479C
    *(0x18 + r29) = r0; // stw @ 0x807C47A0
    *(0x18 + r3) = r4; // stw @ 0x807C47A4
    /* li r0, 0 */ // 0x807C47A8
    *(0x28 + r31) = r0; // stw @ 0x807C47AC
    /* b 0x807c47b8 */ // 0x807C47B0
    FUN_807C4388(); // bl 0x807C4388
    r0 = *(0x24 + r1); // lwz @ 0x807C47B8
    r31 = *(0x1c + r1); // lwz @ 0x807C47BC
    r30 = *(0x18 + r1); // lwz @ 0x807C47C0
    r29 = *(0x14 + r1); // lwz @ 0x807C47C4
    r28 = *(0x10 + r1); // lwz @ 0x807C47C8
    return;
}