/* Function at 0x805B904C, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805B904C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x805B9064
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805B906C
    r29 = r4;
    if (!=) goto 0x0x805b9080;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r31 = *(0xc94 + r3); // lwz @ 0x805B907C
    r3 = r29;
    r4 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}