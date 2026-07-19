/* Function at 0x8073203C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8073203C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x6f4; // 0x80732044
    r8 = r3 + 0x7bc; // 0x80732048
    *(0x14 + r1) = r0; // stw @ 0x8073204C
    /* li r5, 0x18 */ // 0x80732050
    /* li r6, 0x19 */ // 0x80732054
    /* li r9, 1 */ // 0x80732058
    *(0xc + r1) = r31; // stw @ 0x8073205C
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80732064
    FUN_807273A0(r6, r9); // bl 0x807273A0
    r4 = *(0x530 + r31); // lwz @ 0x8073206C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80732074
    r8 = r31 + 0x7c8; // 0x80732078
    /* li r5, 0x19 */ // 0x8073207C
    /* li r6, 0x1a */ // 0x80732080
    /* li r9, 1 */ // 0x80732084
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x8073208C
    r31 = *(0xc + r1); // lwz @ 0x80732090
    return;
}