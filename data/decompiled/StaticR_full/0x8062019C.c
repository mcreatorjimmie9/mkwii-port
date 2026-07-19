/* Function at 0x8062019C, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8062019C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0x20 */ // 0x806201AC
    *(0x14 + r1) = r29; // stw @ 0x806201B4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806201BC
    r28 = r3;
    r0 = *(0x12 + r4); // lbz @ 0x806201C4
    if (==) goto 0x0x806201d4;
    r31 = r31 | 0x2100; // 0x806201D0
    /* li r3, 0x4c */ // 0x806201D4
    FUN_805E3430(r3); // bl 0x805E3430
}