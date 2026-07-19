/* Function at 0x808F7660, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808F7660(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808F7674
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808F767C
    r29 = r3;
    if (==) goto 0x0x808f7778;
    /* lis r4, 0 */ // 0x808F7688
    /* li r5, 0x30 */ // 0x808F768C
    r4 = r4 + 0; // 0x808F7690
    /* li r6, 0x18 */ // 0x808F7694
    r3 = r3 + 0x42a8; // 0x808F7698
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* lis r31, 0 */ // 0x808F76A0
    r3 = r29 + 0x4140; // 0x808F76A4
    r4 = r31 + 0; // 0x808F76A8
    /* li r5, 0x30 */ // 0x808F76AC
    /* li r6, 6 */ // 0x808F76B0
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x4020; // 0x808F76B8
    r4 = r31 + 0; // 0x808F76BC
}