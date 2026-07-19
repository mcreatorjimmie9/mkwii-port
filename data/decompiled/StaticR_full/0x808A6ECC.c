/* Function at 0x808A6ECC, size=172 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r14 */
/* Calls: 1 function(s) */

int FUN_808A6ECC(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r14 */
    /* lis r5, 0 */ // 0x808A6ED4
    r3 = *(0 + r4); // lwz @ 0x808A6ED8
    *(0x64 + r1) = r0; // stw @ 0x808A6EDC
    /* stmw r14, 0x18(r1) */ // 0x808A6EE0
    /* lis r31, 0 */ // 0x808A6EE4
    r31 = r31 + 0; // 0x808A6EE8
    /* li r14, 1 */ // 0x808A6EEC
    /* li r30, 1 */ // 0x808A6EF0
    /* li r29, 1 */ // 0x808A6EF4
    /* li r28, 1 */ // 0x808A6EF8
    /* li r27, 1 */ // 0x808A6EFC
    /* li r26, 1 */ // 0x808A6F00
    /* li r25, 1 */ // 0x808A6F04
    /* li r24, 1 */ // 0x808A6F08
    /* li r23, 1 */ // 0x808A6F0C
    /* li r22, 1 */ // 0x808A6F10
    /* li r21, 1 */ // 0x808A6F14
    /* li r20, 1 */ // 0x808A6F18
    /* li r19, 1 */ // 0x808A6F1C
    /* li r18, 1 */ // 0x808A6F20
    /* li r17, 1 */ // 0x808A6F24
    r4 = *(0 + r5); // lwz @ 0x808A6F28
    r0 = *(0 + r3); // lhz @ 0x808A6F2C
    r16 = *(4 + r4); // lwz @ 0x808A6F30
    r4 = r31 + 0x8e6; // 0x808A6F34
    /* slwi r15, r0, 1 */ // 0x808A6F38
    /* li r0, 1 */ // 0x808A6F3C
    r3 = *(0xc + r16); // lwz @ 0x808A6F40
    *(0xb + r1) = r0; // stb @ 0x808A6F44
    /* li r0, 1 */ // 0x808A6F48
    /* lhax r3, r3, r15 */ // 0x808A6F4C
    *(0xa + r1) = r0; // stb @ 0x808A6F50
    /* li r0, 1 */ // 0x808A6F54
    r5 = *(8 + r16); // lwz @ 0x808A6F58
    *(9 + r1) = r0; // stb @ 0x808A6F5C
    /* li r0, 1 */ // 0x808A6F60
    *(8 + r1) = r0; // stb @ 0x808A6F64
    /* mulli r0, r3, 0x74 */ // 0x808A6F68
    r3 = r5 + r0; // 0x808A6F6C
    r3 = r3 + 2; // 0x808A6F70
    FUN_805E3430(r3); // bl 0x805E3430
}