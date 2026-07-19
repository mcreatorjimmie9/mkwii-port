/* Function at 0x806E711C, size=188 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r14 */
/* Calls: 5 function(s) */

int FUN_806E711C(int r3, int r4)
{
    /* Stack frame: -128(r1) */
    /* saved r14 */
    /* lis r4, 0 */ // 0x806E7124
    *(0x84 + r1) = r0; // stw @ 0x806E7128
    /* stmw r14, 0x38(r1) */ // 0x806E712C
    r15 = r3;
    r3 = *(0 + r4); // lwz @ 0x806E7134
    FUN_80702A18(r4); // bl 0x80702A18
    r3 = r15;
    FUN_806E87B4(r3); // bl 0x806E87B4
    /* lis r18, 0x68dc */ // 0x806E7144
    /* lis r20, 0 */ // 0x806E7148
    /* lis r21, 0 */ // 0x806E7150
    /* li r23, 2 */ // 0x806E7154
    /* li r24, 0 */ // 0x806E7158
    /* li r25, 7 */ // 0x806E715C
    /* li r22, 3 */ // 0x806E7160
    /* lis r28, 0 */ // 0x806E7164
    /* lis r29, 0 */ // 0x806E7168
    /* li r27, 0xff */ // 0x806E716C
    /* lis r16, 0 */ // 0x806E7170
    /* lis r19, 0x1062 */ // 0x806E7174
    /* lis r26, 0 */ // 0x806E7178
    /* li r31, 4 */ // 0x806E717C
    /* li r14, -1 */ // 0x806E7180
    /* li r30, 6 */ // 0x806E7184
    /* b 0x806e75cc */ // 0x806E7188
    r3 = *(0 + r16); // lwz @ 0x806E718C
    r0 = *(0x51 + r3); // lbz @ 0x806E7190
    if (==) goto 0x0x806e71b8;
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 1 */ // 0x806E71A4
    *(0x2757 + r15) = r0; // stb @ 0x806E71A8
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* b 0x806e75d8 */ // 0x806E71B4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r4 = *(0x20 + r1); // lwz @ 0x806E71C4
    /* mulhw r0, r17, r4 */ // 0x806E71C8
    r0 = r0 >> 0xc; // srawi
    /* srwi r3, r0, 0x1f */ // 0x806E71D0
    r0 = r0 + r3; // 0x806E71D4
}