/* Function at 0x807D2DBC, size=160 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_807D2DBC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    *(0x34 + r1) = r0; // stw @ 0x807D2DC8
    /* stmw r27, 0x1c(r1) */ // 0x807D2DCC
    /* lis r31, 0 */ // 0x807D2DD0
    r27 = r4;
    r31 = r31 + 0; // 0x807D2DD8
    if (==) goto 0x0x807d2e74;
    /* lis r4, 0 */ // 0x807D2DE0
    r3 = *(0x18 + r5); // lwz @ 0x807D2DE4
    r4 = *(0 + r4); // lwz @ 0x807D2DE8
    r28 = *(4 + r31); // lha @ 0x807D2DEC
    r4 = *(0x20 + r4); // lwz @ 0x807D2DF0
    r0 = r4 u/ r3; // 0x807D2DF4
    r0 = r0 * r3; // 0x807D2DF8
    /* subf r29, r0, r4 */ // 0x807D2DFC
    /* slwi r0, r29, 2 */ // 0x807D2E00
    /* lwzx r30, r5, r0 */ // 0x807D2E04
    r3 = r30;
    FUN_807B5F00(r3); // bl 0x807B5F00
    if (==) goto 0x0x807d2e40;
    /* lis r3, 0 */ // 0x807D2E18
    r3 = *(0 + r3); // lwz @ 0x807D2E1C
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    if (!=) goto 0x0x807d2e34;
    r28 = *(6 + r31); // lha @ 0x807D2E2C
    /* b 0x807d2e40 */ // 0x807D2E30
    if (!=) goto 0x0x807d2e40;
    r28 = *(8 + r31); // lha @ 0x807D2E3C
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
    r7 = *(0 + r3); // lwz @ 0x807D2E48
    r6 = r28;
    r0 = *(4 + r3); // lwz @ 0x807D2E50
    /* clrlwi r4, r29, 0x10 */ // 0x807D2E54
    *(0xc + r1) = r0; // stw @ 0x807D2E58
}