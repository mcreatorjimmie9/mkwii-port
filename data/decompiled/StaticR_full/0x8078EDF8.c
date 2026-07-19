/* Function at 0x8078EDF8, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078EDF8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8078EE0C
    /* li r30, 0 */ // 0x8078EE10
    *(0x14 + r1) = r29; // stw @ 0x8078EE14
    r29 = r4;
    r3 = *(0x80 + r31); // lwz @ 0x8078EE1C
    if (==) goto 0x0x8078ee30;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x8078EE30
    r31 = r31 + 4; // 0x8078EE34
    if (<) goto 0x0x8078ee1c;
    r0 = *(0x24 + r1); // lwz @ 0x8078EE40
    r31 = *(0x1c + r1); // lwz @ 0x8078EE44
    r30 = *(0x18 + r1); // lwz @ 0x8078EE48
    r29 = *(0x14 + r1); // lwz @ 0x8078EE4C
    return;
}