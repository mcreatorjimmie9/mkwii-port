/* Function at 0x8067E640, size=88 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8067E640(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x8067E64C
    r3 = r3 + r0; // 0x8067E650
    /* li r5, 0 */ // 0x8067E654
    *(0x2c + r1) = r31; // stw @ 0x8067E658
    *(0x28 + r1) = r30; // stw @ 0x8067E65C
    *(0x24 + r1) = r29; // stw @ 0x8067E660
    r29 = r4;
    r30 = *(0x1b7c + r3); // lwz @ 0x8067E668
    r3 = r29;
    r4 = r30 + 0x2454; // 0x8067E670
    FUN_806A0A34(r3, r4); // bl 0x806A0A34
    /* lis r31, 0 */ // 0x8067E678
    r6 = r30;
    r31 = r31 + 0; // 0x8067E680
    r5 = r31 + 0x22e; // 0x8067E688
    /* li r4, 0xf */ // 0x8067E68C
    /* crclr cr1eq */ // 0x8067E690
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}