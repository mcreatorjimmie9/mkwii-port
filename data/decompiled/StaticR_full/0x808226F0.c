/* Function at 0x808226F0, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808226F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80822704
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8082270C
    r29 = r3;
    if (==) goto 0x0x80822754;
    /* lis r31, 0 */ // 0x80822718
    /* li r5, 0xc */ // 0x8082271C
    r4 = r31 + 0; // 0x80822720
    /* li r6, 3 */ // 0x80822724
    r3 = r3 + 0xfc; // 0x80822728
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    r3 = r29 + 0x2c; // 0x80822730
    r4 = r31 + 0; // 0x80822734
    /* li r5, 0xc */ // 0x80822738
    /* li r6, 3 */ // 0x8082273C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80822754;
    r3 = r29;
}