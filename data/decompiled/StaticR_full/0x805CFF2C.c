/* Function at 0x805CFF2C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805CFF2C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r0, r4, 0x1c */ // 0x805CFF38
    r3 = r3 + r0; // 0x805CFF40
    *(0x18 + r1) = r30; // stw @ 0x805CFF44
    r31 = r3 + 8; // 0x805CFF48
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x805CFF50
    r29 = r5;
    r3 = r31;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (==) goto 0x0x805cff7c;
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_805BA38C(r3, r4, r5); // bl 0x805BA38C
    /* b 0x805cff80 */ // 0x805CFF78
    /* li r3, 0 */ // 0x805CFF7C
    r0 = *(0x24 + r1); // lwz @ 0x805CFF80
    r31 = *(0x1c + r1); // lwz @ 0x805CFF84
    r30 = *(0x18 + r1); // lwz @ 0x805CFF88
    r29 = *(0x14 + r1); // lwz @ 0x805CFF8C
    return;
}