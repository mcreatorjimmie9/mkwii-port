/* Function at 0x80865640, size=52 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80865640(int r3, int r4)
{
    /* Stack frame: -272(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80865648
    r4 = r4 + 0; // 0x80865650
    *(0x10c + r1) = r31; // stw @ 0x80865654
    r31 = r3;
    /* li r3, 0x4c */ // 0x8086565C
    *(0x108 + r1) = r30; // stw @ 0x80865660
    r30 = r4 + 0x69; // 0x80865664
    *(0x104 + r1) = r29; // stw @ 0x80865668
    r29 = r4 + 0x60; // 0x8086566C
    FUN_805E3430(r3); // bl 0x805E3430
}