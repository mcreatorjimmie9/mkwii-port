/* Function at 0x805DA990, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805DA990(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x805DA9A4
    *(0x14 + r1) = r29; // stw @ 0x805DA9A8
    r29 = r3;
    r31 = r29;
    r3 = *(0x44 + r31); // lwz @ 0x805DA9B4
    if (==) goto 0x0x805da9cc;
    r0 = *(0x24 + r29); // lha @ 0x805DA9C0
    /* clrlwi r4, r0, 0x18 */ // 0x805DA9C4
    FUN_805D9954(); // bl 0x805D9954
    r30 = r30 + 1; // 0x805DA9CC
    r31 = r31 + 4; // 0x805DA9D0
    if (<) goto 0x0x805da9b4;
    r0 = *(0x24 + r1); // lwz @ 0x805DA9DC
    r31 = *(0x1c + r1); // lwz @ 0x805DA9E0
    r30 = *(0x18 + r1); // lwz @ 0x805DA9E4
    r29 = *(0x14 + r1); // lwz @ 0x805DA9E8
    return;
}