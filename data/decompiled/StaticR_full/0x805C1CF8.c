/* Function at 0x805C1CF8, size=64 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805C1CF8(int r3, int r4)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x805C1D00
    r4 = r4 + 0; // 0x805C1D08
    *(0x88 + r1) = r30; // stw @ 0x805C1D10
    *(0x84 + r1) = r29; // stw @ 0x805C1D14
    *(0x80 + r1) = r28; // stw @ 0x805C1D18
    r28 = r3;
    *(0 + r3) = r4; // stw @ 0x805C1D20
    /* li r4, 0xc */ // 0x805C1D24
    r3 = r3 + 0x34; // 0x805C1D28
    FUN_805DE834(r4, r3); // bl 0x805DE834
    /* li r3, 0x18 */ // 0x805C1D30
    FUN_805E3430(r4, r3, r3); // bl 0x805E3430
}