/* Function at 0x805E0580, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805E0580(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x805E0588
    r5 = r5 + 0; // 0x805E0590
    *(0x1c + r1) = r31; // stw @ 0x805E0594
    *(0x18 + r1) = r30; // stw @ 0x805E0598
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805E05A0
    r29 = r3;
    r0 = *(0xa0 + r5); // lwz @ 0x805E05A8
    if (==) goto 0x0x805e068c;
    r0 = *(0xa7 + r5); // lbz @ 0x805E05B4
    if (==) goto 0x0x805e068c;
    FUN_805E3430(); // bl 0x805E3430
    /* li r31, 0x30 */ // 0x805E05C8
    if (!=) goto 0x0x805e05d4;
    /* li r31, 0x20 */ // 0x805E05D0
    if (<=) goto 0x0x805e05e0;
    /* li r29, 0x7f */ // 0x805E05DC
}