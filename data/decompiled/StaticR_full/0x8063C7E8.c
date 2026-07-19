/* Function at 0x8063C7E8, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8063C7E8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8063C7FC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8063C804
    r29 = r3;
    if (==) goto 0x0x8063c840;
    /* clrlwi r0, r4, 0x18 */ // 0x8063C810
    if (>) goto 0x0x8063c83c;
    FUN_805E3430(); // bl 0x805E3430
    r31 = r3;
    /* extsb r3, r30 */ // 0x8063C824
    FUN_805E3430(); // bl 0x805E3430
    r4 = r31;
    r5 = r29;
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* b 0x8063c840 */ // 0x8063C838
    FUN_805E3430(r4, r5); // bl 0x805E3430
}