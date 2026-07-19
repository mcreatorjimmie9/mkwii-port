/* Function at 0x808E0E18, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808E0E18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808E0E2C
    r30 = r3;
    r5 = *(4 + r3); // lwz @ 0x808E0E34
    r0 = *(0x28 + r5); // lwz @ 0x808E0E38
    *(0xc + r3) = r0; // stw @ 0x808E0E3C
    r3 = r5;
    FUN_805ED710(r3); // bl 0x805ED710
    r4 = r3;
    *(0x10 + r30) = r3; // stw @ 0x808E0E4C
    r3 = *(4 + r30); // lwz @ 0x808E0E50
    /* li r5, 0 */ // 0x808E0E54
    FUN_805EF4F8(r4, r5); // bl 0x805EF4F8
    FUN_808DF104(r5, r3); // bl 0x808DF104
    r5 = *(4 + r30); // lwz @ 0x808E0E64
    r4 = r31;
    r6 = *(0x18 + r30); // lwz @ 0x808E0E6C
    FUN_808DF944(r4, r3); // bl 0x808DF944
    r3 = *(4 + r30); // lwz @ 0x808E0E78
    /* li r5, 0 */ // 0x808E0E7C
    r4 = *(0xc + r30); // lwz @ 0x808E0E80
    FUN_805EF4F8(r3, r5); // bl 0x805EF4F8
    /* li r4, -1 */ // 0x808E0E8C
    FUN_808DF11C(r5, r3, r4); // bl 0x808DF11C
    r0 = *(0x24 + r1); // lwz @ 0x808E0E94
    r31 = *(0x1c + r1); // lwz @ 0x808E0E98
    r30 = *(0x18 + r1); // lwz @ 0x808E0E9C
    return;
}