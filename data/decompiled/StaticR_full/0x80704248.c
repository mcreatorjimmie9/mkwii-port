/* Function at 0x80704248, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80704248(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80704250
    *(0x14 + r1) = r0; // stw @ 0x80704254
    r6 = r6 + 0; // 0x80704258
    *(0xc + r1) = r31; // stw @ 0x8070425C
    r31 = r3;
    r7 = r31;
    *(0x18 + r3) = r5; // stw @ 0x80704268
    r3 = r4;
    /* li r4, 0xe0 */ // 0x80704270
    /* li r5, 1 */ // 0x80704274
    FUN_805E3430(r7, r3, r4, r5); // bl 0x805E3430
}