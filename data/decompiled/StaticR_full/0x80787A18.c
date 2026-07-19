/* Function at 0x80787A18, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80787A18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x80787A24
    /* stmw r27, 0xc(r1) */ // 0x80787A28
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x80787b30;
    /* li r29, 0 */ // 0x80787A38
    /* li r30, 0 */ // 0x80787A3C
    r3 = r27 + r30; // 0x80787A40
    r3 = *(0x14 + r3); // lwz @ 0x80787A44
    if (==) goto 0x0x80787a5c;
    if (==) goto 0x0x80787a5c;
    /* li r4, 0 */ // 0x80787A54
    FUN_805E3430(r4); // bl 0x805E3430
    r29 = r29 + 1; // 0x80787A5C
    r30 = r30 + 4; // 0x80787A60
    if (<) goto 0x0x80787a40;
    /* lis r4, 0 */ // 0x80787A6C
    r3 = r27 + 0x14; // 0x80787A70
    r4 = r4 + 0; // 0x80787A74
    /* li r5, 4 */ // 0x80787A78
    /* li r6, 2 */ // 0x80787A7C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x80787b20;
    /* lis r4, 0 */ // 0x80787A8C
    /* lis r3, 0 */ // 0x80787A90
    r4 = r4 + 0; // 0x80787A94
    *(0 + r27) = r4; // stw @ 0x80787A98
}