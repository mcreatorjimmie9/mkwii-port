/* Function at 0x80809148, size=180 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80809148(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0xb8 + r1) = r30; // stw @ 0x8080915C
    r30 = r3;
    *(0xb4 + r1) = r29; // stw @ 0x80809164
    r5 = *(0x10 + r3); // lwz @ 0x80809168
    r0 = *(0xe4 + r5); // lwz @ 0x8080916C
    if (>=) goto 0x0x80809254;
    r4 = *(8 + r5); // lwz @ 0x80809178
    r0 = *(0xc + r4); // lwz @ 0x80809180
    *(0x10 + r1) = r0; // stw @ 0x80809184
    r4 = *(0x14 + r30); // lwz @ 0x80809188
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (!=) goto 0x0x808091b8;
    /* lis r3, 0 */ // 0x8080919C
    /* lis r5, 0 */ // 0x808091A0
    r3 = r3 + 0; // 0x808091A4
    /* li r4, 0x53 */ // 0x808091A8
    r5 = r5 + 0; // 0x808091AC
    /* crclr cr1eq */ // 0x808091B0
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    if (==) goto 0x0x808091c8;
    r0 = *(0x10 + r29); // lwz @ 0x808091C0
    /* b 0x808091cc */ // 0x808091C4
    /* li r0, 0 */ // 0x808091C8
    /* mulli r0, r0, 0x30 */ // 0x808091CC
    /* lis r3, 0 */ // 0x808091D0
    /* lfs f1, 0(r3) */ // 0x808091D4
    r5 = r3 + 0; // 0x808091DC
    r29 = r31 + r0; // 0x808091E0
    /* lfs f2, 4(r5) */ // 0x808091E4
    r3 = r29;
    /* lfs f3, 8(r5) */ // 0x808091EC
    FUN_805E3430(r5, r3); // bl 0x805E3430
    r0 = *(0x7c + r1); // lwz @ 0x808091F4
    r3 = *(0x78 + r1); // lwz @ 0x808091F8
}