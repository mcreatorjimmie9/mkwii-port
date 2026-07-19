/* Function at 0x805F100C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F100C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805F101C
    *(8 + r1) = r30; // stw @ 0x805F1020
    r30 = r3;
    /* b 0x805f107c */ // 0x805F1028
    r4 = *(0x1c + r30); // lwz @ 0x805F102C
    /* li r3, 0x58 */ // 0x805F1030
    /* li r5, 4 */ // 0x805F1034
    r4 = *(0x10 + r4); // lwz @ 0x805F1038
    FUN_805E3430(r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805f106c;
    r4 = *(0x1c + r30); // lwz @ 0x805F1048
    r6 = *(0x24 + r30); // lwz @ 0x805F104C
    r4 = *(0x30 + r4); // lwz @ 0x805F1050
    r5 = r6 + 1; // 0x805F1054
    r0 = r6 + 8; // 0x805F1058
    *(0x24 + r30) = r5; // stw @ 0x805F105C
    /* extsb r6, r0 */ // 0x805F1060
    r5 = *(0x20 + r30); // lwz @ 0x805F1064
    FUN_805F00C8(r5); // bl 0x805F00C8
    r4 = r3;
}