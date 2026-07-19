/* Function at 0x805A8D1C, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805A8D1C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* extsb. r0, r6 */ // 0x805A8D28
    /* li r6, 1 */ // 0x805A8D2C
    *(0x1c + r1) = r31; // stw @ 0x805A8D30
    /* li r31, 0 */ // 0x805A8D34
    *(0x18 + r1) = r30; // stw @ 0x805A8D38
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805A8D40
    r29 = r3;
    if (>=) goto 0x0x805a8d50;
    /* li r6, 2 */ // 0x805A8D4C
    r3 = r4;
    r5 = r30;
    r9 = r29 + 0x18; // 0x805A8D58
    /* li r4, 0 */ // 0x805A8D5C
    /* li r7, 0 */ // 0x805A8D60
    /* li r8, 0 */ // 0x805A8D64
    FUN_805E3430(r5, r9, r4, r7, r8); // bl 0x805E3430
}