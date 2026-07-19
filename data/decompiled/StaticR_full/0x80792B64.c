/* Function at 0x80792B64, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80792B64(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80792B78
    /* li r30, 0 */ // 0x80792B7C
    *(0x14 + r1) = r29; // stw @ 0x80792B80
    r29 = r4;
    r3 = *(0x80 + r31); // lwz @ 0x80792B88
    if (==) goto 0x0x80792b9c;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x80792B9C
    r31 = r31 + 4; // 0x80792BA0
    if (<) goto 0x0x80792b88;
    r0 = *(0x24 + r1); // lwz @ 0x80792BAC
    r31 = *(0x1c + r1); // lwz @ 0x80792BB0
    r30 = *(0x18 + r1); // lwz @ 0x80792BB4
    r29 = *(0x14 + r1); // lwz @ 0x80792BB8
    return;
}