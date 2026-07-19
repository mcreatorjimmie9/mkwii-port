/* Function at 0x80775478, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80775478(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x8077548C
    *(0x14 + r1) = r29; // stw @ 0x80775490
    /* li r29, 0 */ // 0x80775494
    *(0x10 + r1) = r28; // stw @ 0x80775498
    r28 = r3;
    /* b 0x807754f4 */ // 0x807754A0
    r3 = *(0xc + r28); // lwz @ 0x807754A4
    /* lwzx r31, r3, r30 */ // 0x807754A8
    r0 = *(0 + r31); // lwz @ 0x807754AC
    if (!=) goto 0x0x807754c4;
    r3 = r31;
    FUN_80771C04(r3); // bl 0x80771C04
    /* b 0x807754ec */ // 0x807754C0
    r0 = *(4 + r31); // lwz @ 0x807754C4
    if (!=) goto 0x0x807754dc;
    r3 = r31;
    FUN_80771D60(r3); // bl 0x80771D60
    /* b 0x807754ec */ // 0x807754D8
    r3 = r31;
    FUN_80771D60(r3, r3); // bl 0x80771D60
    r3 = r31;
    FUN_80771C04(r3, r3); // bl 0x80771C04
    r30 = r30 + 4; // 0x807754EC
    r29 = r29 + 1; // 0x807754F0
    r0 = *(0x10 + r28); // lbz @ 0x807754F4
    if (<) goto 0x0x807754a4;
    r0 = *(0x24 + r1); // lwz @ 0x80775500
    r31 = *(0x1c + r1); // lwz @ 0x80775504
    r30 = *(0x18 + r1); // lwz @ 0x80775508
    r29 = *(0x14 + r1); // lwz @ 0x8077550C
    r28 = *(0x10 + r1); // lwz @ 0x80775510
    return;
}