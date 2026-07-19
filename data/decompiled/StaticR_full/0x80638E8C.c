/* Function at 0x80638E8C, size=268 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r19 */
/* Calls: 4 function(s) */

int FUN_80638E8C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r19 */
    /* stmw r19, 0x2c(r1) */ // 0x80638E98
    /* lis r27, 0 */ // 0x80638E9C
    /* lis r28, 0 */ // 0x80638EA0
    /* lis r23, 0 */ // 0x80638EA4
    /* lis r25, 0 */ // 0x80638EA8
    /* lis r26, 0 */ // 0x80638EAC
    r27 = r27 + 0; // 0x80638EB0
    r29 = r28 + 0; // 0x80638EB4
    r23 = r23 + 0; // 0x80638EB8
    r25 = r25 + 0; // 0x80638EC0
    r26 = r26 + 0; // 0x80638EC4
    /* li r31, 0 */ // 0x80638EC8
    /* lis r30, 0 */ // 0x80638ECC
    r4 = *(0 + r23); // lwz @ 0x80638ED0
    r21 = r31 rlwinm 2; // rlwinm
    r0 = *(4 + r23); // lwz @ 0x80638ED8
    r3 = r28 + 0; // 0x80638EDC
    *(8 + r1) = r4; // stw @ 0x80638EE0
    *(0xc + r1) = r0; // stw @ 0x80638EE4
    /* lwzx r4, r24, r21 */ // 0x80638EE8
    /* crclr cr1eq */ // 0x80638EEC
    FUN_8063803C(r3); // bl 0x8063803C
    r5 = r3;
    r3 = *(0 + r30); // lwz @ 0x80638EF8
    /* li r4, 1 */ // 0x80638EFC
    /* li r6, 0 */ // 0x80638F00
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = r31 rlwinm 3; // rlwinm
    /* stwx r3, r25, r21 */ // 0x80638F10
    r22 = r22 + r0; // 0x80638F14
    r21 = r26 + r0; // 0x80638F18
    /* li r19, 0 */ // 0x80638F1C
    r6 = *(0 + r27); // lwz @ 0x80638F20
    r20 = r19 rlwinm 2; // rlwinm
    r5 = *(4 + r27); // lwz @ 0x80638F28
    r3 = r29 + 0xa; // 0x80638F2C
    r4 = *(8 + r27); // lwz @ 0x80638F30
    r0 = *(0xc + r27); // lwz @ 0x80638F34
    *(0x10 + r1) = r6; // stw @ 0x80638F38
    *(0x14 + r1) = r5; // stw @ 0x80638F3C
    *(0x18 + r1) = r4; // stw @ 0x80638F40
    *(0x1c + r1) = r0; // stw @ 0x80638F44
    /* lwzx r4, r22, r20 */ // 0x80638F48
    /* crclr cr1eq */ // 0x80638F4C
    FUN_8063803C(); // bl 0x8063803C
    r5 = r3;
    r3 = *(0 + r30); // lwz @ 0x80638F58
    /* li r4, 1 */ // 0x80638F5C
    /* li r6, 0 */ // 0x80638F60
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    /* stwx r3, r21, r20 */ // 0x80638F6C
    if (<) goto 0x0x80638f20;
    r31 = r31 + 1; // 0x80638F78
    if (<) goto 0x0x80638ed0;
    r0 = *(0x64 + r1); // lwz @ 0x80638F88
    return;
}