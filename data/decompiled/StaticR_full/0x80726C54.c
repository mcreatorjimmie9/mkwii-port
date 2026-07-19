/* Function at 0x80726C54, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80726C54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80726C6C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80726C74
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80726C7C
    r28 = r3;
    if (!=) goto 0x0x80726c90;
    /* li r3, 0 */ // 0x80726C88
    /* b 0x80726d30 */ // 0x80726C8C
    r3 = r4 + 0x74; // 0x80726C90
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (!=) goto 0x0x80726ca8;
    /* li r3, 0 */ // 0x80726CA0
    /* b 0x80726cac */ // 0x80726CA4
    r3 = *(0xc + r3); // lwz @ 0x80726CA8
    /* li r0, 0 */ // 0x80726CB0
    if (==) goto 0x0x80726cc0;
}