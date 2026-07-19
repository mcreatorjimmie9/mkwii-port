/* Function at 0x80658570, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80658570(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80658578
    /* li r6, 0 */ // 0x8065857C
    *(0x14 + r1) = r0; // stw @ 0x80658580
    *(0xc + r1) = r31; // stw @ 0x80658584
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x8065858C
    r5 = r4;
    /* li r4, 3 */ // 0x80658594
    FUN_805CFD60(r5, r4); // bl 0x805CFD60
    r4 = r3;
    r3 = r31;
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
}