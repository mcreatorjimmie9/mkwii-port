/* Function at 0x80782424, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_80782424(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80782430
    /* lis r29, 0 */ // 0x80782434
    r31 = r3;
    r27 = r4;
    r5 = r29 + 0; // 0x80782440
    FUN_80776794(r5); // bl 0x80776794
    /* lis r3, 0 */ // 0x80782448
    r3 = r3 + 0; // 0x8078244C
    *(0 + r31) = r3; // stw @ 0x80782450
    r3 = *(0 + r27); // lwz @ 0x80782454
    r0 = *(0x2c + r3); // lha @ 0x80782458
    if (!=) goto 0x0x80782474;
    /* li r0, 0 */ // 0x80782464
    *(0xbc + r31) = r0; // stw @ 0x80782468
    *(0xb8 + r31) = r0; // stw @ 0x8078246C
    /* b 0x80782588 */ // 0x80782470
    if (!=) goto 0x0x80782500;
    /* li r0, 1 */ // 0x8078247C
    *(0xbc + r31) = r0; // stw @ 0x80782480
    /* li r3, 0x7c */ // 0x80782484
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807824a4;
    r4 = r29 + 0; // 0x80782494
    /* li r5, 0 */ // 0x80782498
    r4 = r4 + 9; // 0x8078249C
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    /* lis r30, 0 */ // 0x807824A4
    *(0xb8 + r31) = r3; // stw @ 0x807824A8
    r30 = r30 + 0; // 0x807824AC
    /* li r27, 0 */ // 0x807824B0
    /* li r28, 0 */ // 0x807824B4
    /* lis r29, 0 */ // 0x807824B8
}