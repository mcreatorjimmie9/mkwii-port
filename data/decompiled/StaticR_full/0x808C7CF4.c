/* Function at 0x808C7CF4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808C7CF4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808C7D08
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x808C7D10
    /* li r0, 0x258 */ // 0x808C7D14
    r3 = r3 + 0; // 0x808C7D18
    *(0 + r31) = r3; // stw @ 0x808C7D1C
    /* lis r4, 0 */ // 0x808C7D20
    /* lis r7, 0 */ // 0x808C7D24
    *(0x4c + r31) = r0; // stw @ 0x808C7D28
    r4 = r4 + 0; // 0x808C7D2C
    r3 = r31 + 0x64; // 0x808C7D30
    r6 = *(0 + r7); // lwzu @ 0x808C7D34
    *(8 + r1) = r6; // stw @ 0x808C7D38
    r5 = *(4 + r7); // lwz @ 0x808C7D3C
    r0 = *(8 + r7); // lwz @ 0x808C7D40
    *(0xc + r1) = r5; // stw @ 0x808C7D44
    *(0x10 + r1) = r0; // stw @ 0x808C7D48
    *(0x50 + r31) = r4; // stw @ 0x808C7D4C
    *(0x54 + r31) = r31; // stw @ 0x808C7D50
    *(0x58 + r31) = r6; // stw @ 0x808C7D54
    *(0x5c + r31) = r5; // stw @ 0x808C7D58
    *(0x60 + r31) = r0; // stw @ 0x808C7D5C
    FUN_8066880C(); // bl 0x8066880C
    /* lis r4, 0 */ // 0x808C7D64
    /* lis r5, 0 */ // 0x808C7D68
    r3 = r31 + 0x1a8; // 0x808C7D6C
    /* li r6, 0xc */ // 0x808C7D70
    r4 = r4 + 0; // 0x808C7D74
    r5 = r5 + 0; // 0x808C7D78
    /* li r7, 4 */ // 0x808C7D7C
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}