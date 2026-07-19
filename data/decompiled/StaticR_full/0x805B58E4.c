/* Function at 0x805B58E4, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805B58E4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805B58F4
    r31 = r31 + 0; // 0x805B58F8
    *(0x18 + r1) = r30; // stw @ 0x805B58FC
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805B5904
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805B590C
    r28 = r3;
    /* li r3, 0x64 */ // 0x805B5914
    FUN_805E3430(r3); // bl 0x805E3430
}