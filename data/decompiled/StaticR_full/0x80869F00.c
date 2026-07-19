/* Function at 0x80869F00, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80869F00(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x80869F08
    *(0x18 + r1) = r30; // stw @ 0x80869F14
    /* li r30, 0 */ // 0x80869F18
    *(0x14 + r1) = r29; // stw @ 0x80869F1C
    r29 = r3;
    r31 = r29;
    r4 = *(0 + r4); // lwz @ 0x80869F28
    r0 = *(0x25 + r4); // lbz @ 0x80869F2C
    *(0 + r3) = r0; // stw @ 0x80869F30
    /* b 0x80869f5c */ // 0x80869F34
    /* li r3, 0xd0 */ // 0x80869F38
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80869f50;
    r4 = r30;
    FUN_808692C0(r3, r4); // bl 0x808692C0
    *(0x44 + r31) = r3; // stw @ 0x80869F50
    r31 = r31 + 4; // 0x80869F54
    r30 = r30 + 1; // 0x80869F58
    r0 = *(0 + r29); // lwz @ 0x80869F5C
    if (<) goto 0x0x80869f38;
    r31 = *(0x1c + r1); // lwz @ 0x80869F68
}