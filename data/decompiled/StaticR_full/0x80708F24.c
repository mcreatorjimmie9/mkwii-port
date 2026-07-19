/* Function at 0x80708F24, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80708F24(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x174; // 0x80708F34
    *(0x18 + r1) = r30; // stw @ 0x80708F38
    /* li r30, 0 */ // 0x80708F3C
    *(0x14 + r1) = r29; // stw @ 0x80708F40
    r29 = r4;
    r3 = r31;
    r4 = r29;
    /* li r5, 0 */ // 0x80708F50
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x80708F58
    r31 = r31 + 0x254; // 0x80708F5C
    if (<) goto 0x0x80708f48;
    r0 = *(0x24 + r1); // lwz @ 0x80708F68
    r31 = *(0x1c + r1); // lwz @ 0x80708F6C
    r30 = *(0x18 + r1); // lwz @ 0x80708F70
    r29 = *(0x14 + r1); // lwz @ 0x80708F74
    return;
}