/* Function at 0x807889E4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807889E4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3 + 0x14; // 0x807889F4
    *(0x14 + r1) = r29; // stw @ 0x807889FC
    /* li r29, 0 */ // 0x80788A00
    *(0x10 + r1) = r28; // stw @ 0x80788A04
    r28 = r3;
    r30 = r28;
    r0 = *(0x1c + r28); // lwz @ 0x80788A10
    if (==) goto 0x0x80788a40;
    r0 = *(0x20 + r28); // lwz @ 0x80788A1C
    if (==) goto 0x0x80788a40;
    r3 = *(0x14 + r30); // lwz @ 0x80788A28
    if (==) goto 0x0x80788a40;
    if (==) goto 0x0x80788a40;
    /* li r4, 0 */ // 0x80788A38
    FUN_805E3430(r4); // bl 0x805E3430
    r29 = r29 + 1; // 0x80788A40
    r30 = r30 + 4; // 0x80788A44
    r31 = r31 + 4; // 0x80788A4C
    if (<) goto 0x0x80788a10;
    r0 = *(0x24 + r1); // lwz @ 0x80788A54
    r31 = *(0x1c + r1); // lwz @ 0x80788A58
    r30 = *(0x18 + r1); // lwz @ 0x80788A5C
    r29 = *(0x14 + r1); // lwz @ 0x80788A60
    r28 = *(0x10 + r1); // lwz @ 0x80788A64
    return;
}