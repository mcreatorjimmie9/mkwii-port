/* Function at 0x808C70A4, size=260 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r25 */
/* Calls: 4 function(s) */

int FUN_808C70A4(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r25 */
    /* stmw r25, 0x64(r1) */ // 0x808C70B0
    r31 = r3;
    FUN_808B3318(); // bl 0x808B3318
    /* lis r3, 0 */ // 0x808C70BC
    r5 = *(0 + r3); // lwz @ 0x808C70C0
    r0 = *(0x36 + r5); // lha @ 0x808C70C4
    if (<) goto 0x0x808c70ec;
    /* lis r3, 1 */ // 0x808C70D0
    /* clrlwi r4, r0, 0x18 */ // 0x808C70D4
    r0 = r3 + -0x6c10; // 0x808C70D8
    r0 = r0 * r4; // 0x808C70DC
    r3 = r5 + r0; // 0x808C70E0
    r28 = r3 + 0x38; // 0x808C70E4
    /* b 0x808c70f0 */ // 0x808C70E8
    /* li r28, 0 */ // 0x808C70EC
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* addis r4, r28, 1 */ // 0x808C70F4
    /* slwi r0, r3, 2 */ // 0x808C70F8
    r3 = r4 + r0; // 0x808C70FC
    /* lis r29, 0 */ // 0x808C7100
    r27 = *(-0x6ed8 + r3); // lwz @ 0x808C7104
    r29 = r29 + 0; // 0x808C710C
    /* li r25, 0 */ // 0x808C7110
    /* slwi r0, r27, 2 */ // 0x808C7114
    /* li r28, 1 */ // 0x808C7118
    r26 = r26 + r0; // 0x808C711C
    /* li r30, 0xa */ // 0x808C7120
    r3 = *(0x6bc + r31); // lwz @ 0x808C7124
    r0 = r28 << r25; // slw
    /* and. r0, r3, r0 */ // 0x808C712C
    if (==) goto 0x0x808c7140;
    r4 = r25;
    r3 = r31 + 0x6c4; // 0x808C7138
    FUN_80675534(r4, r3); // bl 0x80675534
    r4 = r29 + -4; // 0x808C7144
    /* mtctr r30 */ // 0x808C7148
    r3 = *(4 + r4); // lwz @ 0x808C714C
    r0 = *(8 + r4); // lwzu @ 0x808C7150
    *(4 + r5) = r3; // stw @ 0x808C7154
    *(8 + r5) = r0; // stwu @ 0x808C7158
    if (counter-- != 0) goto 0x0x808c714c;
    r0 = *(0x8d0 + r31); // lwz @ 0x808C7160
    if (<) goto 0x0x808c7188;
    if (<) goto 0x0x808c7188;
    /* slwi r0, r0, 4 */ // 0x808C7174
    r3 = *(0x2bc + r31); // lwz @ 0x808C7178
    /* lwzx r4, r26, r0 */ // 0x808C717C
    /* li r5, 0 */ // 0x808C7180
    FUN_808D5A00(r5); // bl 0x808D5A00
    r25 = r25 + 1; // 0x808C7188
    if (<) goto 0x0x808c7124;
    r0 = *(0x84 + r1); // lwz @ 0x808C7198
    return;
}