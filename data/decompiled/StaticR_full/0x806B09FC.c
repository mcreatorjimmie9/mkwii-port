/* Function at 0x806B09FC, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806B09FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B0A0C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B0A14
    r30 = r3;
    if (==) goto 0x0x806b0a6c;
    /* li r4, -1 */ // 0x806B0A20
    r3 = r3 + 0x290; // 0x806B0A24
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x78; // 0x806B0A2C
    /* li r4, -1 */ // 0x806B0A30
    FUN_8064EE50(r4, r3, r3, r4); // bl 0x8064EE50
    r3 = r30 + 0x6c; // 0x806B0A38
    /* li r4, -1 */ // 0x806B0A3C
    FUN_8064ED24(r3, r4, r3, r4); // bl 0x8064ED24
    r3 = r30 + 0x58; // 0x806B0A44
    /* li r4, -1 */ // 0x806B0A48
    FUN_80668158(r3, r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806B0A54
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b0a6c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B0A70
    r30 = *(8 + r1); // lwz @ 0x806B0A74
    r0 = *(0x14 + r1); // lwz @ 0x806B0A78
    return;
}